start_addr = 0x1E600000; end_addr = 0x1E61FFFF+1; seg_name = "ABHC";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E620000; end_addr = 0x1E62FFFF+1; seg_name = "FMC";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E630000; end_addr = 0x1E630FFF+1; seg_name = "SPI1_CTRL";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E631000; end_addr = 0x1E631FFF+1; seg_name = "SPI2_CTRL";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E640000; end_addr = 0x1E65FFFF+1; seg_name = "MIC";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E660000; end_addr = 0x1E67FFFF+1; seg_name = "MAC1";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E680000; end_addr = 0x1E69FFFF+1; seg_name = "MAC2";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E6A0000; end_addr = 0x1E6A0FFF+1; seg_name = "USB2_HUB_CTRL";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E6A1000; end_addr = 0x1E6A1FFF+1; seg_name = "USB2_EHCI_HOST_CTRL1";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E6A2000; end_addr = 0x1E6A2FFF+1; seg_name = "USB2_DEV_CTRL";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E6A3000; end_addr = 0x1E6A3FFF+1; seg_name = "USB2_EHCI_HOST_CTRL2";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E6B0000; end_addr = 0x1E6BFFFF+1; seg_name = "USB1_UHCI_HOST_CTRL";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E6C0000; end_addr = 0x1E6DFFFF+1; seg_name = "VIC";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E6E0000; end_addr = 0x1E6E0FFF+1; seg_name = "SDRAM_MMC_CTRL";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E6E1000; end_addr = 0x1E6E1FFF+1; seg_name = "USB1_HID_CTRL";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E6E2000; end_addr = 0x1E6E2FFF+1; seg_name = "SCU";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E6E3000; end_addr = 0x1E6E3FFF+1; seg_name = "HACE";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E6E4000; end_addr = 0x1E6E4FFF+1; seg_name = "JTAG_MASTER";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E6E6000; end_addr = 0x1E6E6FFF+1; seg_name = "GFX";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E6E7000; end_addr = 0x1E6E7FFF+1; seg_name = "XDMA_CTRL";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E6E8000; end_addr = 0x1E6E8FFF+1; seg_name = "MCTP_CTRL";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E6E9000; end_addr = 0x1E6E9FFF+1; seg_name = "ADC_VOLT_MONITOR";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E6EC000; end_addr = 0x1E6ECFFF+1; seg_name = "LPC_PLUS_CTRL";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E6ED000; end_addr = 0x1E6EDFFF+1; seg_name = "PCIE_HOST_CTRL";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E6EE000; end_addr = 0x1E6EEFFF+1; seg_name = "ESPI_CTRL";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E6EF000; end_addr = 0x1E6EFFFF+1; seg_name = "BATT_BACKED_SDRAM";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E6F0000; end_addr = 0x1E6F0FFF+1; seg_name = "APBtoPCIE_BRIDGE";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E700000; end_addr = 0x1E71FFFF+1; seg_name = "VIDEO_ENGINE";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E720000; end_addr = 0x1E73FFFF+1; seg_name = "SRAM_36KB";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E740000; end_addr = 0x1E75FFFF+1; seg_name = "SD_SDIO_EMMC_CTRL";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E760000; end_addr = 0x1E77FFFF+1; seg_name = "ENGINE_2D";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E780000; end_addr = 0x1E780FFF+1; seg_name = "GPIO_CTRL";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E781000; end_addr = 0x1E781FFF+1; seg_name = "RTC";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E782000; end_addr = 0x1E782FFF+1; seg_name = "TIMER1_CTRL";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E783000; end_addr = 0x1E783FFF+1; seg_name = "LPC_UART1";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E784000; end_addr = 0x1E784FFF+1; seg_name = "BMC_UART5";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E785000; end_addr = 0x1E785FFF+1; seg_name = "WDT";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E786000; end_addr = 0x1E786FFF+1; seg_name = "PWM";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E787000; end_addr = 0x1E787FFF+1; seg_name = "VUART";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E788000; end_addr = 0x1E788FFF+1; seg_name = "PUART";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E789000; end_addr = 0x1E789FFF+1; seg_name = "LPC_CTRL";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E78A000; end_addr = 0x1E78AFFF+1; seg_name = "I2C_SMBUS_CTRL";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E78B000; end_addr = 0x1E78BFFF+1; seg_name = "PECI_CTRL";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E78C000; end_addr = 0x1E78CFFF+1; seg_name = "APBtoPCI_BRIDGE";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E78D000; end_addr = 0x1E78DFFF+1; seg_name = "LPC_UART2";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E78E000; end_addr = 0x1E78EFFF+1; seg_name = "LPC_UART3";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E78F000; end_addr = 0x1E78FFFF+1; seg_name = "LPC_UART4";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x1E79E000; end_addr = 0x1E79EFFF+1; seg_name = "UART_DMA";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x20000000; end_addr = 0x2FFFFFFF+1; seg_name = "BMC_SPI_FLASH_MEM";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x30000000; end_addr = 0x37FFFFFF+1; seg_name = "SPI1_FLASH_MEM";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x38000000; end_addr = 0x3FFFFFFF+1; seg_name = "SPI2_FLASH_MEM";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x60000000; end_addr = 0x6FFFFFFF+1; seg_name = "AHBtoLPC_BRIDGE";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x70000000; end_addr = 0x7FFFFFFF+1; seg_name = "AHBtoLPC_PLUS_BRIDGE";
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
start_addr = 0x80000000; end_addr = 0xC0000000; seg_name = "SDRAM" 
add_segm_ex(start_addr, end_addr, 0, 1, 0, 0, 0); set_segm_name(start_addr, seg_name); set_name(start_addr, seg_name + "_mmio", 2);
