from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
import time

PATH = '/home/ahmad/chromedriver'
driver = webdriver.Chrome(PATH)

driver.get('https://www.stonybrook.edu/search/')
print(driver.title)

time.sleep(5)

search = driver.find_element_by_name('search')
search.send_keys('Computer Science')
search.send_keys(Keys.ENTER)

time.sleep(5)

try:
    main = WebDriverWait(driver, 10).until(
        EC.presence_of_element_located((By.ID, 'cse-search-results'))
    )
    anchortitle = 'a.gs-title'
    urlClass= 'gs-visibleUrl-long'
    
    headlines = main.find_elements_by_css_selector(anchortitle)
    subHeadlines = main.find_elements_by_class_name(urlClass)

    for anchortitle in headlines:
        print(anchortitle.text)
    
    for urlClass in subHeadlines:
        print(urlClass.text)
        
finally:
    driver.quit()

    #For more info check: https://github.com/AhmadTakkoush/SBU_scraper