# EspGPT
a project about implementing chatGPT into a small and very portable device.

## needed items
- [esp32](https://aliexpress.com/item/1005002611857804.html?spm=a2g0o.productlist.main.21.72487404JRBjbQ&algo_pvid=2c1611fb-288f-4998-acce-3d9379a17d80&algo_exp_id=2c1611fb-288f-4998-acce-3d9379a17d80-10&pdp_ext_f=%7B%22sku_id%22%3A%2212000023035492114%22%7D&pdp_npi=3%40dis%21ILS%2117.41%210.04%21%21%21%21%21%40211bd4cd16793434873825875d0745%2112000023035492114%21sea%21IL%212202747066&curPageLogUid=KGUOc7q6X8Om&gatewayAdapt=glo2isr)
- [keyboard](https://www.aliexpress.com/item/1005004182998265.html?pdp_npi=2%40dis%21ILS%21%E2%82%AA+104.60%21%E2%82%AA+80.62%21%21%21%21%21%402101f6ba16793372161988950e2dd3%2112000028323401462%21btf&_t=pvid%3Ac53ab0f5-37a4-411b-aa5f-4a508a152901&afTraceInfo=1005004182998265__pc__pcBridgePPC__xxxxxx__1679337216&spm=a2g0o.ppclist.product.mainProduct&gatewayAdapt=glo2isr)
- [screen 4 inch without touch](https://he.aliexpress.com/item/33015586094.html?spm=a2g0o.productlist.main.1.afaf4c65vVlMQX&algo_pvid=33405a6e-e6e3-421d-aa75-244b49a2a7df&aem_p4p_detail=202303212255081231614017392350004334881&algo_exp_id=33405a6e-e6e3-421d-aa75-244b49a2a7df-0&pdp_ext_f=%7B%22sku_id%22%3A%2212000026583382486%22%7D&pdp_npi=3%40dis%21ILS%2114.47%2110.84%21%21%21%21%21%402102186a16794645082337644d06e6%2112000026583382486%21sea%21IL%212202747066&curPageLogUid=Ed0O3EKDrDGn&ad_pvid=202303212255081231614017392350004334881_1&ad_pvid=202303212255081231614017392350004334881_1)

## arduino ide setup
1. first add the esp to the ide by clicking preferences under the file on the top left corner and adding on additional url [this](https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json)(separated by commas) and installing the esp in the board manager
2. second add all the folders in the libraries folder to your libraries folder inside the arduino project folder(Can be checked on preferences and sketchbook loction) if you dont have one create one
