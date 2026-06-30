#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CE8A0
// Address: 0x2ce8a0 - 0x2cf290
void sub_002CE8A0_0x2ce8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE8A0_0x2ce8a0");
#endif

    switch (ctx->pc) {
        case 0x2ceae0u: goto label_2ceae0;
        case 0x2ceb00u: goto label_2ceb00;
        case 0x2ceb2cu: goto label_2ceb2c;
        case 0x2ceb4cu: goto label_2ceb4c;
        case 0x2ceb78u: goto label_2ceb78;
        case 0x2ceb98u: goto label_2ceb98;
        case 0x2cec08u: goto label_2cec08;
        case 0x2cec50u: goto label_2cec50;
        case 0x2cec60u: goto label_2cec60;
        case 0x2cec7cu: goto label_2cec7c;
        case 0x2cec8cu: goto label_2cec8c;
        case 0x2ceca8u: goto label_2ceca8;
        case 0x2cece4u: goto label_2cece4;
        case 0x2ced20u: goto label_2ced20;
        case 0x2ced60u: goto label_2ced60;
        case 0x2ced90u: goto label_2ced90;
        case 0x2cedd0u: goto label_2cedd0;
        case 0x2cee0cu: goto label_2cee0c;
        case 0x2cee3cu: goto label_2cee3c;
        case 0x2cee5cu: goto label_2cee5c;
        case 0x2cee7cu: goto label_2cee7c;
        case 0x2ceeb8u: goto label_2ceeb8;
        case 0x2ceef8u: goto label_2ceef8;
        case 0x2cef28u: goto label_2cef28;
        case 0x2cef48u: goto label_2cef48;
        case 0x2cef78u: goto label_2cef78;
        case 0x2cefa8u: goto label_2cefa8;
        case 0x2cefd8u: goto label_2cefd8;
        case 0x2ceff8u: goto label_2ceff8;
        case 0x2cf028u: goto label_2cf028;
        case 0x2cf058u: goto label_2cf058;
        case 0x2cf078u: goto label_2cf078;
        case 0x2cf098u: goto label_2cf098;
        case 0x2cf0b8u: goto label_2cf0b8;
        case 0x2cf0d8u: goto label_2cf0d8;
        case 0x2cf110u: goto label_2cf110;
        case 0x2cf14cu: goto label_2cf14c;
        case 0x2cf188u: goto label_2cf188;
        case 0x2cf1c4u: goto label_2cf1c4;
        case 0x2cf1e4u: goto label_2cf1e4;
        case 0x2cf204u: goto label_2cf204;
        case 0x2cf244u: goto label_2cf244;
        case 0x2cf278u: goto label_2cf278;
        default: break;
    }

    ctx->pc = 0x2ce8a0u;

    // 0x2ce8a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ce8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ce8a4: 0x3402ffdc  ori         $v0, $zero, 0xFFDC
    ctx->pc = 0x2ce8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65500);
    // 0x2ce8a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ce8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ce8ac: 0x10a20257  beq         $a1, $v0, . + 4 + (0x257 << 2)
    ctx->pc = 0x2CE8ACu;
    {
        const bool branch_taken_0x2ce8ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CE8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE8ACu;
            // 0x2ce8b0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce8ac) {
            ctx->pc = 0x2CF20Cu;
            goto label_2cf20c;
        }
    }
    ctx->pc = 0x2CE8B4u;
    // 0x2ce8b4: 0x3402cf6d  ori         $v0, $zero, 0xCF6D
    ctx->pc = 0x2ce8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53101);
    // 0x2ce8b8: 0x50a2024c  beql        $a1, $v0, . + 4 + (0x24C << 2)
    ctx->pc = 0x2CE8B8u;
    {
        const bool branch_taken_0x2ce8b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce8b8) {
            ctx->pc = 0x2CE8BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE8B8u;
            // 0x2ce8bc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CF1ECu;
            goto label_2cf1ec;
        }
    }
    ctx->pc = 0x2CE8C0u;
    // 0x2ce8c0: 0x3402cf6c  ori         $v0, $zero, 0xCF6C
    ctx->pc = 0x2ce8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53100);
    // 0x2ce8c4: 0x10a20241  beq         $a1, $v0, . + 4 + (0x241 << 2)
    ctx->pc = 0x2CE8C4u;
    {
        const bool branch_taken_0x2ce8c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce8c4) {
            ctx->pc = 0x2CF1CCu;
            goto label_2cf1cc;
        }
    }
    ctx->pc = 0x2CE8CCu;
    // 0x2ce8cc: 0x3402cf08  ori         $v0, $zero, 0xCF08
    ctx->pc = 0x2ce8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53000);
    // 0x2ce8d0: 0x10a2022f  beq         $a1, $v0, . + 4 + (0x22F << 2)
    ctx->pc = 0x2CE8D0u;
    {
        const bool branch_taken_0x2ce8d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce8d0) {
            ctx->pc = 0x2CF190u;
            goto label_2cf190;
        }
    }
    ctx->pc = 0x2CE8D8u;
    // 0x2ce8d8: 0x3402cbb6  ori         $v0, $zero, 0xCBB6
    ctx->pc = 0x2ce8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52150);
    // 0x2ce8dc: 0x10a2021d  beq         $a1, $v0, . + 4 + (0x21D << 2)
    ctx->pc = 0x2CE8DCu;
    {
        const bool branch_taken_0x2ce8dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce8dc) {
            ctx->pc = 0x2CF154u;
            goto label_2cf154;
        }
    }
    ctx->pc = 0x2CE8E4u;
    // 0x2ce8e4: 0x3402cb98  ori         $v0, $zero, 0xCB98
    ctx->pc = 0x2ce8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52120);
    // 0x2ce8e8: 0x10a2020b  beq         $a1, $v0, . + 4 + (0x20B << 2)
    ctx->pc = 0x2CE8E8u;
    {
        const bool branch_taken_0x2ce8e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce8e8) {
            ctx->pc = 0x2CF118u;
            goto label_2cf118;
        }
    }
    ctx->pc = 0x2CE8F0u;
    // 0x2ce8f0: 0x3402cb93  ori         $v0, $zero, 0xCB93
    ctx->pc = 0x2ce8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52115);
    // 0x2ce8f4: 0x50a201fb  beql        $a1, $v0, . + 4 + (0x1FB << 2)
    ctx->pc = 0x2CE8F4u;
    {
        const bool branch_taken_0x2ce8f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce8f4) {
            ctx->pc = 0x2CE8F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE8F4u;
            // 0x2ce8f8: 0x24a38000  addiu       $v1, $a1, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CF0E4u;
            goto label_2cf0e4;
        }
    }
    ctx->pc = 0x2CE8FCu;
    // 0x2ce8fc: 0x3402cb92  ori         $v0, $zero, 0xCB92
    ctx->pc = 0x2ce8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52114);
    // 0x2ce900: 0x10a201f7  beq         $a1, $v0, . + 4 + (0x1F7 << 2)
    ctx->pc = 0x2CE900u;
    {
        const bool branch_taken_0x2ce900 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce900) {
            ctx->pc = 0x2CF0E0u;
            goto label_2cf0e0;
        }
    }
    ctx->pc = 0x2CE908u;
    // 0x2ce908: 0x3402cb91  ori         $v0, $zero, 0xCB91
    ctx->pc = 0x2ce908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52113);
    // 0x2ce90c: 0x10a201f4  beq         $a1, $v0, . + 4 + (0x1F4 << 2)
    ctx->pc = 0x2CE90Cu;
    {
        const bool branch_taken_0x2ce90c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce90c) {
            ctx->pc = 0x2CF0E0u;
            goto label_2cf0e0;
        }
    }
    ctx->pc = 0x2CE914u;
    // 0x2ce914: 0x3402cb90  ori         $v0, $zero, 0xCB90
    ctx->pc = 0x2ce914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52112);
    // 0x2ce918: 0x10a201f1  beq         $a1, $v0, . + 4 + (0x1F1 << 2)
    ctx->pc = 0x2CE918u;
    {
        const bool branch_taken_0x2ce918 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce918) {
            ctx->pc = 0x2CF0E0u;
            goto label_2cf0e0;
        }
    }
    ctx->pc = 0x2CE920u;
    // 0x2ce920: 0x3402cb8f  ori         $v0, $zero, 0xCB8F
    ctx->pc = 0x2ce920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52111);
    // 0x2ce924: 0x10a201ee  beq         $a1, $v0, . + 4 + (0x1EE << 2)
    ctx->pc = 0x2CE924u;
    {
        const bool branch_taken_0x2ce924 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce924) {
            ctx->pc = 0x2CF0E0u;
            goto label_2cf0e0;
        }
    }
    ctx->pc = 0x2CE92Cu;
    // 0x2ce92c: 0x3402cb8e  ori         $v0, $zero, 0xCB8E
    ctx->pc = 0x2ce92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52110);
    // 0x2ce930: 0x10a201eb  beq         $a1, $v0, . + 4 + (0x1EB << 2)
    ctx->pc = 0x2CE930u;
    {
        const bool branch_taken_0x2ce930 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce930) {
            ctx->pc = 0x2CF0E0u;
            goto label_2cf0e0;
        }
    }
    ctx->pc = 0x2CE938u;
    // 0x2ce938: 0x3402cb83  ori         $v0, $zero, 0xCB83
    ctx->pc = 0x2ce938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52099);
    // 0x2ce93c: 0x10a201e0  beq         $a1, $v0, . + 4 + (0x1E0 << 2)
    ctx->pc = 0x2CE93Cu;
    {
        const bool branch_taken_0x2ce93c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce93c) {
            ctx->pc = 0x2CF0C0u;
            goto label_2cf0c0;
        }
    }
    ctx->pc = 0x2CE944u;
    // 0x2ce944: 0x3402cb82  ori         $v0, $zero, 0xCB82
    ctx->pc = 0x2ce944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52098);
    // 0x2ce948: 0x10a201d5  beq         $a1, $v0, . + 4 + (0x1D5 << 2)
    ctx->pc = 0x2CE948u;
    {
        const bool branch_taken_0x2ce948 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce948) {
            ctx->pc = 0x2CF0A0u;
            goto label_2cf0a0;
        }
    }
    ctx->pc = 0x2CE950u;
    // 0x2ce950: 0x3402cb7a  ori         $v0, $zero, 0xCB7A
    ctx->pc = 0x2ce950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52090);
    // 0x2ce954: 0x10a201ca  beq         $a1, $v0, . + 4 + (0x1CA << 2)
    ctx->pc = 0x2CE954u;
    {
        const bool branch_taken_0x2ce954 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce954) {
            ctx->pc = 0x2CF080u;
            goto label_2cf080;
        }
    }
    ctx->pc = 0x2CE95Cu;
    // 0x2ce95c: 0x3402cb76  ori         $v0, $zero, 0xCB76
    ctx->pc = 0x2ce95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52086);
    // 0x2ce960: 0x10a201bf  beq         $a1, $v0, . + 4 + (0x1BF << 2)
    ctx->pc = 0x2CE960u;
    {
        const bool branch_taken_0x2ce960 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce960) {
            ctx->pc = 0x2CF060u;
            goto label_2cf060;
        }
    }
    ctx->pc = 0x2CE968u;
    // 0x2ce968: 0x3402cb75  ori         $v0, $zero, 0xCB75
    ctx->pc = 0x2ce968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52085);
    // 0x2ce96c: 0x10a201b0  beq         $a1, $v0, . + 4 + (0x1B0 << 2)
    ctx->pc = 0x2CE96Cu;
    {
        const bool branch_taken_0x2ce96c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce96c) {
            ctx->pc = 0x2CF030u;
            goto label_2cf030;
        }
    }
    ctx->pc = 0x2CE974u;
    // 0x2ce974: 0x3402cb70  ori         $v0, $zero, 0xCB70
    ctx->pc = 0x2ce974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52080);
    // 0x2ce978: 0x10a201a1  beq         $a1, $v0, . + 4 + (0x1A1 << 2)
    ctx->pc = 0x2CE978u;
    {
        const bool branch_taken_0x2ce978 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce978) {
            ctx->pc = 0x2CF000u;
            goto label_2cf000;
        }
    }
    ctx->pc = 0x2CE980u;
    // 0x2ce980: 0x3402cb84  ori         $v0, $zero, 0xCB84
    ctx->pc = 0x2ce980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52100);
    // 0x2ce984: 0x10a20196  beq         $a1, $v0, . + 4 + (0x196 << 2)
    ctx->pc = 0x2CE984u;
    {
        const bool branch_taken_0x2ce984 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce984) {
            ctx->pc = 0x2CEFE0u;
            goto label_2cefe0;
        }
    }
    ctx->pc = 0x2CE98Cu;
    // 0x2ce98c: 0x3402cb43  ori         $v0, $zero, 0xCB43
    ctx->pc = 0x2ce98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52035);
    // 0x2ce990: 0x10a20187  beq         $a1, $v0, . + 4 + (0x187 << 2)
    ctx->pc = 0x2CE990u;
    {
        const bool branch_taken_0x2ce990 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce990) {
            ctx->pc = 0x2CEFB0u;
            goto label_2cefb0;
        }
    }
    ctx->pc = 0x2CE998u;
    // 0x2ce998: 0x3402cb3e  ori         $v0, $zero, 0xCB3E
    ctx->pc = 0x2ce998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52030);
    // 0x2ce99c: 0x10a20178  beq         $a1, $v0, . + 4 + (0x178 << 2)
    ctx->pc = 0x2CE99Cu;
    {
        const bool branch_taken_0x2ce99c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce99c) {
            ctx->pc = 0x2CEF80u;
            goto label_2cef80;
        }
    }
    ctx->pc = 0x2CE9A4u;
    // 0x2ce9a4: 0x3402cb39  ori         $v0, $zero, 0xCB39
    ctx->pc = 0x2ce9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52025);
    // 0x2ce9a8: 0x10a20169  beq         $a1, $v0, . + 4 + (0x169 << 2)
    ctx->pc = 0x2CE9A8u;
    {
        const bool branch_taken_0x2ce9a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce9a8) {
            ctx->pc = 0x2CEF50u;
            goto label_2cef50;
        }
    }
    ctx->pc = 0x2CE9B0u;
    // 0x2ce9b0: 0x3402cb25  ori         $v0, $zero, 0xCB25
    ctx->pc = 0x2ce9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52005);
    // 0x2ce9b4: 0x10a2015e  beq         $a1, $v0, . + 4 + (0x15E << 2)
    ctx->pc = 0x2CE9B4u;
    {
        const bool branch_taken_0x2ce9b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce9b4) {
            ctx->pc = 0x2CEF30u;
            goto label_2cef30;
        }
    }
    ctx->pc = 0x2CE9BCu;
    // 0x2ce9bc: 0x3402cb4d  ori         $v0, $zero, 0xCB4D
    ctx->pc = 0x2ce9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52045);
    // 0x2ce9c0: 0x10a2014f  beq         $a1, $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x2CE9C0u;
    {
        const bool branch_taken_0x2ce9c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce9c0) {
            ctx->pc = 0x2CEF00u;
            goto label_2cef00;
        }
    }
    ctx->pc = 0x2CE9C8u;
    // 0x2ce9c8: 0x3402c38c  ori         $v0, $zero, 0xC38C
    ctx->pc = 0x2ce9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50060);
    // 0x2ce9cc: 0x10a2012d  beq         $a1, $v0, . + 4 + (0x12D << 2)
    ctx->pc = 0x2CE9CCu;
    {
        const bool branch_taken_0x2ce9cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce9cc) {
            ctx->pc = 0x2CEE84u;
            goto label_2cee84;
        }
    }
    ctx->pc = 0x2CE9D4u;
    // 0x2ce9d4: 0x3402c382  ori         $v0, $zero, 0xC382
    ctx->pc = 0x2ce9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50050);
    // 0x2ce9d8: 0x10a20122  beq         $a1, $v0, . + 4 + (0x122 << 2)
    ctx->pc = 0x2CE9D8u;
    {
        const bool branch_taken_0x2ce9d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce9d8) {
            ctx->pc = 0x2CEE64u;
            goto label_2cee64;
        }
    }
    ctx->pc = 0x2CE9E0u;
    // 0x2ce9e0: 0x3402c378  ori         $v0, $zero, 0xC378
    ctx->pc = 0x2ce9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50040);
    // 0x2ce9e4: 0x10a20117  beq         $a1, $v0, . + 4 + (0x117 << 2)
    ctx->pc = 0x2CE9E4u;
    {
        const bool branch_taken_0x2ce9e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce9e4) {
            ctx->pc = 0x2CEE44u;
            goto label_2cee44;
        }
    }
    ctx->pc = 0x2CE9ECu;
    // 0x2ce9ec: 0x3402c36e  ori         $v0, $zero, 0xC36E
    ctx->pc = 0x2ce9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50030);
    // 0x2ce9f0: 0x10a20108  beq         $a1, $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x2CE9F0u;
    {
        const bool branch_taken_0x2ce9f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce9f0) {
            ctx->pc = 0x2CEE14u;
            goto label_2cee14;
        }
    }
    ctx->pc = 0x2CE9F8u;
    // 0x2ce9f8: 0x3402c364  ori         $v0, $zero, 0xC364
    ctx->pc = 0x2ce9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50020);
    // 0x2ce9fc: 0x10a200f6  beq         $a1, $v0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x2CE9FCu;
    {
        const bool branch_taken_0x2ce9fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce9fc) {
            ctx->pc = 0x2CEDD8u;
            goto label_2cedd8;
        }
    }
    ctx->pc = 0x2CEA04u;
    // 0x2cea04: 0x3402c35a  ori         $v0, $zero, 0xC35A
    ctx->pc = 0x2cea04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50010);
    // 0x2cea08: 0x10a200e3  beq         $a1, $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x2CEA08u;
    {
        const bool branch_taken_0x2cea08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cea08) {
            ctx->pc = 0x2CED98u;
            goto label_2ced98;
        }
    }
    ctx->pc = 0x2CEA10u;
    // 0x2cea10: 0x3402c350  ori         $v0, $zero, 0xC350
    ctx->pc = 0x2cea10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
    // 0x2cea14: 0x10a200d4  beq         $a1, $v0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x2CEA14u;
    {
        const bool branch_taken_0x2cea14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cea14) {
            ctx->pc = 0x2CED68u;
            goto label_2ced68;
        }
    }
    ctx->pc = 0x2CEA1Cu;
    // 0x2cea1c: 0x34029290  ori         $v0, $zero, 0x9290
    ctx->pc = 0x2cea1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37520);
    // 0x2cea20: 0x10a200c1  beq         $a1, $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x2CEA20u;
    {
        const bool branch_taken_0x2cea20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cea20) {
            ctx->pc = 0x2CED28u;
            goto label_2ced28;
        }
    }
    ctx->pc = 0x2CEA28u;
    // 0x2cea28: 0x24020409  addiu       $v0, $zero, 0x409
    ctx->pc = 0x2cea28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2cea2c: 0x10a200af  beq         $a1, $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x2CEA2Cu;
    {
        const bool branch_taken_0x2cea2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cea2c) {
            ctx->pc = 0x2CECECu;
            goto label_2cecec;
        }
    }
    ctx->pc = 0x2CEA34u;
    // 0x2cea34: 0x24020407  addiu       $v0, $zero, 0x407
    ctx->pc = 0x2cea34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1031));
    // 0x2cea38: 0x10a2009d  beq         $a1, $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x2CEA38u;
    {
        const bool branch_taken_0x2cea38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cea38) {
            ctx->pc = 0x2CECB0u;
            goto label_2cecb0;
        }
    }
    ctx->pc = 0x2CEA40u;
    // 0x2cea40: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2cea40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2cea44: 0x50a2008f  beql        $a1, $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x2CEA44u;
    {
        const bool branch_taken_0x2cea44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cea44) {
            ctx->pc = 0x2CEA48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEA44u;
            // 0x2cea48: 0x30c4ffff  andi        $a0, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CEC84u;
            goto label_2cec84;
        }
    }
    ctx->pc = 0x2CEA4Cu;
    // 0x2cea4c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2cea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cea50: 0x50a20081  beql        $a1, $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x2CEA50u;
    {
        const bool branch_taken_0x2cea50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cea50) {
            ctx->pc = 0x2CEA54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEA50u;
            // 0x2cea54: 0x30c4ffff  andi        $a0, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CEC58u;
            goto label_2cec58;
        }
    }
    ctx->pc = 0x2CEA58u;
    // 0x2cea58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cea58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cea5c: 0x10a2006c  beq         $a1, $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x2CEA5Cu;
    {
        const bool branch_taken_0x2cea5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cea5c) {
            ctx->pc = 0x2CEC10u;
            goto label_2cec10;
        }
    }
    ctx->pc = 0x2CEA64u;
    // 0x2cea64: 0x10a0004e  beqz        $a1, . + 4 + (0x4E << 2)
    ctx->pc = 0x2CEA64u;
    {
        const bool branch_taken_0x2cea64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cea64) {
            ctx->pc = 0x2CEBA0u;
            goto label_2ceba0;
        }
    }
    ctx->pc = 0x2CEA6Cu;
    // 0x2cea6c: 0x24020069  addiu       $v0, $zero, 0x69
    ctx->pc = 0x2cea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x2cea70: 0x50a20043  beql        $a1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2CEA70u;
    {
        const bool branch_taken_0x2cea70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cea70) {
            ctx->pc = 0x2CEA74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEA70u;
            // 0x2cea74: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CEB80u;
            goto label_2ceb80;
        }
    }
    ctx->pc = 0x2CEA78u;
    // 0x2cea78: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x2cea78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2cea7c: 0x50a20035  beql        $a1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2CEA7Cu;
    {
        const bool branch_taken_0x2cea7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cea7c) {
            ctx->pc = 0x2CEA80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEA7Cu;
            // 0x2cea80: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CEB54u;
            goto label_2ceb54;
        }
    }
    ctx->pc = 0x2CEA84u;
    // 0x2cea84: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x2cea84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x2cea88: 0x50a2002a  beql        $a1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2CEA88u;
    {
        const bool branch_taken_0x2cea88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cea88) {
            ctx->pc = 0x2CEA8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEA88u;
            // 0x2cea8c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CEB34u;
            goto label_2ceb34;
        }
    }
    ctx->pc = 0x2CEA90u;
    // 0x2cea90: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x2cea90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x2cea94: 0x50a2001c  beql        $a1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2CEA94u;
    {
        const bool branch_taken_0x2cea94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cea94) {
            ctx->pc = 0x2CEA98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEA94u;
            // 0x2cea98: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CEB08u;
            goto label_2ceb08;
        }
    }
    ctx->pc = 0x2CEA9Cu;
    // 0x2cea9c: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x2cea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x2ceaa0: 0x50a20011  beql        $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CEAA0u;
    {
        const bool branch_taken_0x2ceaa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ceaa0) {
            ctx->pc = 0x2CEAA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEAA0u;
            // 0x2ceaa4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CEAE8u;
            goto label_2ceae8;
        }
    }
    ctx->pc = 0x2CEAA8u;
    // 0x2ceaa8: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2ceaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2ceaac: 0x50a20003  beql        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CEAACu;
    {
        const bool branch_taken_0x2ceaac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ceaac) {
            ctx->pc = 0x2CEAB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEAACu;
            // 0x2ceab0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CEABCu;
            goto label_2ceabc;
        }
    }
    ctx->pc = 0x2CEAB4u;
    // 0x2ceab4: 0x100001f1  b           . + 4 + (0x1F1 << 2)
    ctx->pc = 0x2CEAB4u;
    {
        const bool branch_taken_0x2ceab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEAB4u;
            // 0x2ceab8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceab4) {
            ctx->pc = 0x2CF27Cu;
            goto label_2cf27c;
        }
    }
    ctx->pc = 0x2CEABCu;
label_2ceabc:
    // 0x2ceabc: 0x39020003  xori        $v0, $t0, 0x3
    ctx->pc = 0x2ceabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)3);
    // 0x2ceac0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2ceac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ceac4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2ceac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2ceac8: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2ceac8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2ceacc: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2ceaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cead0: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x2cead0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2cead4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cead4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cead8: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CEAD8u;
    SET_GPR_U32(ctx, 31, 0x2CEAE0u);
    ctx->pc = 0x2CEADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEAD8u;
            // 0x2ceadc: 0x24c614f8  addiu       $a2, $a2, 0x14F8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEAE0u; }
        if (ctx->pc != 0x2CEAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEAE0u; }
        if (ctx->pc != 0x2CEAE0u) { return; }
    }
    ctx->pc = 0x2CEAE0u;
label_2ceae0:
    // 0x2ceae0: 0x100001e5  b           . + 4 + (0x1E5 << 2)
    ctx->pc = 0x2CEAE0u;
    {
        const bool branch_taken_0x2ceae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ceae0) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CEAE8u;
label_2ceae8:
    // 0x2ceae8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2ceae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2ceaec: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2ceaecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2ceaf0: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2ceaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2ceaf4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2ceaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ceaf8: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CEAF8u;
    SET_GPR_U32(ctx, 31, 0x2CEB00u);
    ctx->pc = 0x2CEAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEAF8u;
            // 0x2ceafc: 0x24c61510  addiu       $a2, $a2, 0x1510 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB00u; }
        if (ctx->pc != 0x2CEB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB00u; }
        if (ctx->pc != 0x2CEB00u) { return; }
    }
    ctx->pc = 0x2CEB00u;
label_2ceb00:
    // 0x2ceb00: 0x100001dd  b           . + 4 + (0x1DD << 2)
    ctx->pc = 0x2CEB00u;
    {
        const bool branch_taken_0x2ceb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ceb00) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CEB08u;
label_2ceb08:
    // 0x2ceb08: 0x39020003  xori        $v0, $t0, 0x3
    ctx->pc = 0x2ceb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)3);
    // 0x2ceb0c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2ceb0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ceb10: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2ceb10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2ceb14: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2ceb14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2ceb18: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2ceb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2ceb1c: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x2ceb1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2ceb20: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2ceb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ceb24: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CEB24u;
    SET_GPR_U32(ctx, 31, 0x2CEB2Cu);
    ctx->pc = 0x2CEB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEB24u;
            // 0x2ceb28: 0x24c61530  addiu       $a2, $a2, 0x1530 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB2Cu; }
        if (ctx->pc != 0x2CEB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB2Cu; }
        if (ctx->pc != 0x2CEB2Cu) { return; }
    }
    ctx->pc = 0x2CEB2Cu;
label_2ceb2c:
    // 0x2ceb2c: 0x100001d2  b           . + 4 + (0x1D2 << 2)
    ctx->pc = 0x2CEB2Cu;
    {
        const bool branch_taken_0x2ceb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ceb2c) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CEB34u;
label_2ceb34:
    // 0x2ceb34: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2ceb34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2ceb38: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2ceb38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2ceb3c: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2ceb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2ceb40: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2ceb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ceb44: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CEB44u;
    SET_GPR_U32(ctx, 31, 0x2CEB4Cu);
    ctx->pc = 0x2CEB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEB44u;
            // 0x2ceb48: 0x24c61548  addiu       $a2, $a2, 0x1548 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB4Cu; }
        if (ctx->pc != 0x2CEB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB4Cu; }
        if (ctx->pc != 0x2CEB4Cu) { return; }
    }
    ctx->pc = 0x2CEB4Cu;
label_2ceb4c:
    // 0x2ceb4c: 0x100001ca  b           . + 4 + (0x1CA << 2)
    ctx->pc = 0x2CEB4Cu;
    {
        const bool branch_taken_0x2ceb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ceb4c) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CEB54u;
label_2ceb54:
    // 0x2ceb54: 0x39020003  xori        $v0, $t0, 0x3
    ctx->pc = 0x2ceb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)3);
    // 0x2ceb58: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2ceb58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ceb5c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2ceb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2ceb60: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2ceb60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2ceb64: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2ceb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2ceb68: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x2ceb68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2ceb6c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2ceb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ceb70: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CEB70u;
    SET_GPR_U32(ctx, 31, 0x2CEB78u);
    ctx->pc = 0x2CEB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEB70u;
            // 0x2ceb74: 0x24c61550  addiu       $a2, $a2, 0x1550 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB78u; }
        if (ctx->pc != 0x2CEB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB78u; }
        if (ctx->pc != 0x2CEB78u) { return; }
    }
    ctx->pc = 0x2CEB78u;
label_2ceb78:
    // 0x2ceb78: 0x100001bf  b           . + 4 + (0x1BF << 2)
    ctx->pc = 0x2CEB78u;
    {
        const bool branch_taken_0x2ceb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ceb78) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CEB80u;
label_2ceb80:
    // 0x2ceb80: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2ceb80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2ceb84: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2ceb84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2ceb88: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2ceb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2ceb8c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2ceb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ceb90: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CEB90u;
    SET_GPR_U32(ctx, 31, 0x2CEB98u);
    ctx->pc = 0x2CEB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEB90u;
            // 0x2ceb94: 0x24c61570  addiu       $a2, $a2, 0x1570 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB98u; }
        if (ctx->pc != 0x2CEB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB98u; }
        if (ctx->pc != 0x2CEB98u) { return; }
    }
    ctx->pc = 0x2CEB98u;
label_2ceb98:
    // 0x2ceb98: 0x100001b7  b           . + 4 + (0x1B7 << 2)
    ctx->pc = 0x2CEB98u;
    {
        const bool branch_taken_0x2ceb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ceb98) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CEBA0u;
label_2ceba0:
    // 0x2ceba0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2ceba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2ceba4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2ceba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ceba8: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x2ceba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x2cebac: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x2cebacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x2cebb0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CEBB0u;
    {
        const bool branch_taken_0x2cebb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cebb0) {
            ctx->pc = 0x2CEBC8u;
            goto label_2cebc8;
        }
    }
    ctx->pc = 0x2CEBB8u;
    // 0x2cebb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2cebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cebbc: 0x14c20002  bne         $a2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CEBBCu;
    {
        const bool branch_taken_0x2cebbc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cebbc) {
            ctx->pc = 0x2CEBC8u;
            goto label_2cebc8;
        }
    }
    ctx->pc = 0x2CEBC4u;
    // 0x2cebc4: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x2cebc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2cebc8:
    // 0x2cebc8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2cebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2cebcc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2cebccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2cebd0: 0x2442e1a0  addiu       $v0, $v0, -0x1E60
    ctx->pc = 0x2cebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959520));
    // 0x2cebd4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cebd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cebd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cebdc: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cebdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cebe0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2cebe0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cebe4: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x2cebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2cebe8: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cebe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cebec: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cebecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cebf0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2cebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2cebf4: 0x2442e1f0  addiu       $v0, $v0, -0x1E10
    ctx->pc = 0x2cebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959600));
    // 0x2cebf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cebfc: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x2cebfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cec00: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CEC00u;
    SET_GPR_U32(ctx, 31, 0x2CEC08u);
    ctx->pc = 0x2CEC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEC00u;
            // 0x2cec04: 0x24c61588  addiu       $a2, $a2, 0x1588 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEC08u; }
        if (ctx->pc != 0x2CEC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEC08u; }
        if (ctx->pc != 0x2CEC08u) { return; }
    }
    ctx->pc = 0x2CEC08u;
label_2cec08:
    // 0x2cec08: 0x1000019b  b           . + 4 + (0x19B << 2)
    ctx->pc = 0x2CEC08u;
    {
        const bool branch_taken_0x2cec08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cec08) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CEC10u;
label_2cec10:
    // 0x2cec10: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2cec10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2cec14: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2cec14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2cec18: 0x2442e210  addiu       $v0, $v0, -0x1DF0
    ctx->pc = 0x2cec18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959632));
    // 0x2cec1c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cec1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cec20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cec20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cec24: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cec24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cec28: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2cec28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cec2c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x2cec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2cec30: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cec30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cec34: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cec34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cec38: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2cec38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2cec3c: 0x2442e260  addiu       $v0, $v0, -0x1DA0
    ctx->pc = 0x2cec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959712));
    // 0x2cec40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cec40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cec44: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x2cec44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cec48: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CEC48u;
    SET_GPR_U32(ctx, 31, 0x2CEC50u);
    ctx->pc = 0x2CEC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEC48u;
            // 0x2cec4c: 0x24c61598  addiu       $a2, $a2, 0x1598 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEC50u; }
        if (ctx->pc != 0x2CEC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEC50u; }
        if (ctx->pc != 0x2CEC50u) { return; }
    }
    ctx->pc = 0x2CEC50u;
label_2cec50:
    // 0x2cec50: 0x10000189  b           . + 4 + (0x189 << 2)
    ctx->pc = 0x2CEC50u;
    {
        const bool branch_taken_0x2cec50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cec50) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CEC58u;
label_2cec58:
    // 0x2cec58: 0xc078d80  jal         func_1E3600
    ctx->pc = 0x2CEC58u;
    SET_GPR_U32(ctx, 31, 0x2CEC60u);
    ctx->pc = 0x1E3600u;
    if (runtime->hasFunction(0x1E3600u)) {
        auto targetFn = runtime->lookupFunction(0x1E3600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEC60u; }
        if (ctx->pc != 0x2CEC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3600_0x1e3600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEC60u; }
        if (ctx->pc != 0x2CEC60u) { return; }
    }
    ctx->pc = 0x2CEC60u;
label_2cec60:
    // 0x2cec60: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cec60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cec64: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cec64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cec68: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2cec68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cec6c: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cec6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cec70: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cec70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cec74: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CEC74u;
    SET_GPR_U32(ctx, 31, 0x2CEC7Cu);
    ctx->pc = 0x2CEC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEC74u;
            // 0x2cec78: 0x24c615a8  addiu       $a2, $a2, 0x15A8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEC7Cu; }
        if (ctx->pc != 0x2CEC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEC7Cu; }
        if (ctx->pc != 0x2CEC7Cu) { return; }
    }
    ctx->pc = 0x2CEC7Cu;
label_2cec7c:
    // 0x2cec7c: 0x1000017e  b           . + 4 + (0x17E << 2)
    ctx->pc = 0x2CEC7Cu;
    {
        const bool branch_taken_0x2cec7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cec7c) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CEC84u;
label_2cec84:
    // 0x2cec84: 0xc078d80  jal         func_1E3600
    ctx->pc = 0x2CEC84u;
    SET_GPR_U32(ctx, 31, 0x2CEC8Cu);
    ctx->pc = 0x1E3600u;
    if (runtime->hasFunction(0x1E3600u)) {
        auto targetFn = runtime->lookupFunction(0x1E3600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEC8Cu; }
        if (ctx->pc != 0x2CEC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3600_0x1e3600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEC8Cu; }
        if (ctx->pc != 0x2CEC8Cu) { return; }
    }
    ctx->pc = 0x2CEC8Cu;
label_2cec8c:
    // 0x2cec8c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cec8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cec90: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cec90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cec94: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2cec94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cec98: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cec98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cec9c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cec9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ceca0: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CECA0u;
    SET_GPR_U32(ctx, 31, 0x2CECA8u);
    ctx->pc = 0x2CECA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CECA0u;
            // 0x2ceca4: 0x24c615b0  addiu       $a2, $a2, 0x15B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CECA8u; }
        if (ctx->pc != 0x2CECA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CECA8u; }
        if (ctx->pc != 0x2CECA8u) { return; }
    }
    ctx->pc = 0x2CECA8u;
label_2ceca8:
    // 0x2ceca8: 0x10000173  b           . + 4 + (0x173 << 2)
    ctx->pc = 0x2CECA8u;
    {
        const bool branch_taken_0x2ceca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ceca8) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CECB0u;
label_2cecb0:
    // 0x2cecb0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2cecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2cecb4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x2cecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x2cecb8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2cecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x2cecbc: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cecc0: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cecc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cecc4: 0x24632568  addiu       $v1, $v1, 0x2568
    ctx->pc = 0x2cecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9576));
    // 0x2cecc8: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cecc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2ceccc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cecccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cecd0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2cecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2cecd4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2cecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cecd8: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x2cecd8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cecdc: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CECDCu;
    SET_GPR_U32(ctx, 31, 0x2CECE4u);
    ctx->pc = 0x2CECE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CECDCu;
            // 0x2cece0: 0x24c615b8  addiu       $a2, $a2, 0x15B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CECE4u; }
        if (ctx->pc != 0x2CECE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CECE4u; }
        if (ctx->pc != 0x2CECE4u) { return; }
    }
    ctx->pc = 0x2CECE4u;
label_2cece4:
    // 0x2cece4: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x2CECE4u;
    {
        const bool branch_taken_0x2cece4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cece4) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CECECu;
label_2cecec:
    // 0x2cecec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2cececu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2cecf0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x2cecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x2cecf4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2cecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x2cecf8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cecfc: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cecfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2ced00: 0x24632568  addiu       $v1, $v1, 0x2568
    ctx->pc = 0x2ced00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9576));
    // 0x2ced04: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2ced04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2ced08: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2ced08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ced0c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2ced0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ced10: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ced10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ced14: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x2ced14u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ced18: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CED18u;
    SET_GPR_U32(ctx, 31, 0x2CED20u);
    ctx->pc = 0x2CED1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CED18u;
            // 0x2ced1c: 0x24c615c8  addiu       $a2, $a2, 0x15C8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CED20u; }
        if (ctx->pc != 0x2CED20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CED20u; }
        if (ctx->pc != 0x2CED20u) { return; }
    }
    ctx->pc = 0x2CED20u;
label_2ced20:
    // 0x2ced20: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x2CED20u;
    {
        const bool branch_taken_0x2ced20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ced20) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CED28u;
label_2ced28:
    // 0x2ced28: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2ced28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2ced2c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2ced2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ced30: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x2ced30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x2ced34: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2ced34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2ced38: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2ced38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2ced3c: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2ced3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2ced40: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2ced40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ced44: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x2ced44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2ced48: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x2ced48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x2ced4c: 0x24422568  addiu       $v0, $v0, 0x2568
    ctx->pc = 0x2ced4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9576));
    // 0x2ced50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ced50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ced54: 0x80480000  lb          $t0, 0x0($v0)
    ctx->pc = 0x2ced54u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ced58: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CED58u;
    SET_GPR_U32(ctx, 31, 0x2CED60u);
    ctx->pc = 0x2CED5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CED58u;
            // 0x2ced5c: 0x24c615d8  addiu       $a2, $a2, 0x15D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CED60u; }
        if (ctx->pc != 0x2CED60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CED60u; }
        if (ctx->pc != 0x2CED60u) { return; }
    }
    ctx->pc = 0x2CED60u;
label_2ced60:
    // 0x2ced60: 0x10000145  b           . + 4 + (0x145 << 2)
    ctx->pc = 0x2CED60u;
    {
        const bool branch_taken_0x2ced60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ced60) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CED68u;
label_2ced68:
    // 0x2ced68: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x2ced68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x2ced6c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2ced6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2ced70: 0x24422568  addiu       $v0, $v0, 0x2568
    ctx->pc = 0x2ced70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9576));
    // 0x2ced74: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2ced74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2ced78: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2ced78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ced7c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2ced7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ced80: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x2ced80u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ced84: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2ced84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2ced88: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CED88u;
    SET_GPR_U32(ctx, 31, 0x2CED90u);
    ctx->pc = 0x2CED8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CED88u;
            // 0x2ced8c: 0x24c615e0  addiu       $a2, $a2, 0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CED90u; }
        if (ctx->pc != 0x2CED90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CED90u; }
        if (ctx->pc != 0x2CED90u) { return; }
    }
    ctx->pc = 0x2CED90u;
label_2ced90:
    // 0x2ced90: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x2CED90u;
    {
        const bool branch_taken_0x2ced90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ced90) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CED98u;
label_2ced98:
    // 0x2ced98: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2ced98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2ced9c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2ced9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceda0: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x2ceda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x2ceda4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2ceda4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2ceda8: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2ceda8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cedac: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cedacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cedb0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cedb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cedb4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x2cedb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2cedb8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x2cedb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x2cedbc: 0x24422568  addiu       $v0, $v0, 0x2568
    ctx->pc = 0x2cedbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9576));
    // 0x2cedc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cedc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cedc4: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x2cedc4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cedc8: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CEDC8u;
    SET_GPR_U32(ctx, 31, 0x2CEDD0u);
    ctx->pc = 0x2CEDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEDC8u;
            // 0x2cedcc: 0x24c615e8  addiu       $a2, $a2, 0x15E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEDD0u; }
        if (ctx->pc != 0x2CEDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEDD0u; }
        if (ctx->pc != 0x2CEDD0u) { return; }
    }
    ctx->pc = 0x2CEDD0u;
label_2cedd0:
    // 0x2cedd0: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x2CEDD0u;
    {
        const bool branch_taken_0x2cedd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cedd0) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CEDD8u;
label_2cedd8:
    // 0x2cedd8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2cedd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2ceddc: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x2ceddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x2cede0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2cede0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x2cede4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cede4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cede8: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cede8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cedec: 0x24632568  addiu       $v1, $v1, 0x2568
    ctx->pc = 0x2cedecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9576));
    // 0x2cedf0: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cedf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cedf4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cedf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cedf8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2cedf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2cedfc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2cedfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cee00: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x2cee00u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cee04: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CEE04u;
    SET_GPR_U32(ctx, 31, 0x2CEE0Cu);
    ctx->pc = 0x2CEE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEE04u;
            // 0x2cee08: 0x24c615f8  addiu       $a2, $a2, 0x15F8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEE0Cu; }
        if (ctx->pc != 0x2CEE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEE0Cu; }
        if (ctx->pc != 0x2CEE0Cu) { return; }
    }
    ctx->pc = 0x2CEE0Cu;
label_2cee0c:
    // 0x2cee0c: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x2CEE0Cu;
    {
        const bool branch_taken_0x2cee0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cee0c) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CEE14u;
label_2cee14:
    // 0x2cee14: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x2cee14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x2cee18: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cee18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cee1c: 0x24422568  addiu       $v0, $v0, 0x2568
    ctx->pc = 0x2cee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9576));
    // 0x2cee20: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cee20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cee24: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2cee24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2cee28: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cee28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cee2c: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x2cee2cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cee30: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cee30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cee34: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CEE34u;
    SET_GPR_U32(ctx, 31, 0x2CEE3Cu);
    ctx->pc = 0x2CEE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEE34u;
            // 0x2cee38: 0x24c61608  addiu       $a2, $a2, 0x1608 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEE3Cu; }
        if (ctx->pc != 0x2CEE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEE3Cu; }
        if (ctx->pc != 0x2CEE3Cu) { return; }
    }
    ctx->pc = 0x2CEE3Cu;
label_2cee3c:
    // 0x2cee3c: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x2CEE3Cu;
    {
        const bool branch_taken_0x2cee3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cee3c) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CEE44u;
label_2cee44:
    // 0x2cee44: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cee44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cee48: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cee48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cee4c: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cee4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cee50: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cee50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cee54: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CEE54u;
    SET_GPR_U32(ctx, 31, 0x2CEE5Cu);
    ctx->pc = 0x2CEE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEE54u;
            // 0x2cee58: 0x24c61618  addiu       $a2, $a2, 0x1618 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEE5Cu; }
        if (ctx->pc != 0x2CEE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEE5Cu; }
        if (ctx->pc != 0x2CEE5Cu) { return; }
    }
    ctx->pc = 0x2CEE5Cu;
label_2cee5c:
    // 0x2cee5c: 0x10000106  b           . + 4 + (0x106 << 2)
    ctx->pc = 0x2CEE5Cu;
    {
        const bool branch_taken_0x2cee5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cee5c) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CEE64u;
label_2cee64:
    // 0x2cee64: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cee64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cee68: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cee68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cee6c: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cee70: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cee70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cee74: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CEE74u;
    SET_GPR_U32(ctx, 31, 0x2CEE7Cu);
    ctx->pc = 0x2CEE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEE74u;
            // 0x2cee78: 0x24c61628  addiu       $a2, $a2, 0x1628 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEE7Cu; }
        if (ctx->pc != 0x2CEE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEE7Cu; }
        if (ctx->pc != 0x2CEE7Cu) { return; }
    }
    ctx->pc = 0x2CEE7Cu;
label_2cee7c:
    // 0x2cee7c: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x2CEE7Cu;
    {
        const bool branch_taken_0x2cee7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cee7c) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CEE84u;
label_2cee84:
    // 0x2cee84: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2cee84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2cee88: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x2cee88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x2cee8c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2cee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x2cee90: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cee90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cee94: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cee94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cee98: 0x24632568  addiu       $v1, $v1, 0x2568
    ctx->pc = 0x2cee98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9576));
    // 0x2cee9c: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cee9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2ceea0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2ceea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ceea4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2ceea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ceea8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ceea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ceeac: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x2ceeacu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ceeb0: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CEEB0u;
    SET_GPR_U32(ctx, 31, 0x2CEEB8u);
    ctx->pc = 0x2CEEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEEB0u;
            // 0x2ceeb4: 0x24c61638  addiu       $a2, $a2, 0x1638 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEEB8u; }
        if (ctx->pc != 0x2CEEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEEB8u; }
        if (ctx->pc != 0x2CEEB8u) { return; }
    }
    ctx->pc = 0x2CEEB8u;
label_2ceeb8:
    // 0x2ceeb8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2ceeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2ceebc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ceebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ceec0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2ceec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x2ceec4: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x2ceec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ceec8: 0x14a300eb  bne         $a1, $v1, . + 4 + (0xEB << 2)
    ctx->pc = 0x2CEEC8u;
    {
        const bool branch_taken_0x2ceec8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ceec8) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CEED0u;
    // 0x2ceed0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x2ceed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x2ceed4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2ceed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2ceed8: 0x24422568  addiu       $v0, $v0, 0x2568
    ctx->pc = 0x2ceed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9576));
    // 0x2ceedc: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2ceedcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2ceee0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ceee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ceee4: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2ceee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2ceee8: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x2ceee8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ceeec: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2ceeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ceef0: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CEEF0u;
    SET_GPR_U32(ctx, 31, 0x2CEEF8u);
    ctx->pc = 0x2CEEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEEF0u;
            // 0x2ceef4: 0x24c61648  addiu       $a2, $a2, 0x1648 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEEF8u; }
        if (ctx->pc != 0x2CEEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEEF8u; }
        if (ctx->pc != 0x2CEEF8u) { return; }
    }
    ctx->pc = 0x2CEEF8u;
label_2ceef8:
    // 0x2ceef8: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x2CEEF8u;
    {
        const bool branch_taken_0x2ceef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ceef8) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CEF00u;
label_2cef00:
    // 0x2cef00: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x2cef00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x2cef04: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cef04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cef08: 0x24422568  addiu       $v0, $v0, 0x2568
    ctx->pc = 0x2cef08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9576));
    // 0x2cef0c: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cef0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cef10: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2cef10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2cef14: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cef14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cef18: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x2cef18u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cef1c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cef1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cef20: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CEF20u;
    SET_GPR_U32(ctx, 31, 0x2CEF28u);
    ctx->pc = 0x2CEF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEF20u;
            // 0x2cef24: 0x24c61658  addiu       $a2, $a2, 0x1658 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEF28u; }
        if (ctx->pc != 0x2CEF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEF28u; }
        if (ctx->pc != 0x2CEF28u) { return; }
    }
    ctx->pc = 0x2CEF28u;
label_2cef28:
    // 0x2cef28: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x2CEF28u;
    {
        const bool branch_taken_0x2cef28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cef28) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CEF30u;
label_2cef30:
    // 0x2cef30: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cef30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cef34: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cef34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cef38: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cef38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cef3c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cef3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cef40: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CEF40u;
    SET_GPR_U32(ctx, 31, 0x2CEF48u);
    ctx->pc = 0x2CEF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEF40u;
            // 0x2cef44: 0x24c61660  addiu       $a2, $a2, 0x1660 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEF48u; }
        if (ctx->pc != 0x2CEF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEF48u; }
        if (ctx->pc != 0x2CEF48u) { return; }
    }
    ctx->pc = 0x2CEF48u;
label_2cef48:
    // 0x2cef48: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x2CEF48u;
    {
        const bool branch_taken_0x2cef48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cef48) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CEF50u;
label_2cef50:
    // 0x2cef50: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x2cef50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x2cef54: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cef54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cef58: 0x24422568  addiu       $v0, $v0, 0x2568
    ctx->pc = 0x2cef58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9576));
    // 0x2cef5c: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cef60: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2cef60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2cef64: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cef64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cef68: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x2cef68u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cef6c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cef6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cef70: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CEF70u;
    SET_GPR_U32(ctx, 31, 0x2CEF78u);
    ctx->pc = 0x2CEF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEF70u;
            // 0x2cef74: 0x24c61668  addiu       $a2, $a2, 0x1668 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEF78u; }
        if (ctx->pc != 0x2CEF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEF78u; }
        if (ctx->pc != 0x2CEF78u) { return; }
    }
    ctx->pc = 0x2CEF78u;
label_2cef78:
    // 0x2cef78: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x2CEF78u;
    {
        const bool branch_taken_0x2cef78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cef78) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CEF80u;
label_2cef80:
    // 0x2cef80: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x2cef80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x2cef84: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cef84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cef88: 0x24422568  addiu       $v0, $v0, 0x2568
    ctx->pc = 0x2cef88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9576));
    // 0x2cef8c: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cef90: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2cef90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2cef94: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cef94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cef98: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x2cef98u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cef9c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cef9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cefa0: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CEFA0u;
    SET_GPR_U32(ctx, 31, 0x2CEFA8u);
    ctx->pc = 0x2CEFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEFA0u;
            // 0x2cefa4: 0x24c61670  addiu       $a2, $a2, 0x1670 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEFA8u; }
        if (ctx->pc != 0x2CEFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEFA8u; }
        if (ctx->pc != 0x2CEFA8u) { return; }
    }
    ctx->pc = 0x2CEFA8u;
label_2cefa8:
    // 0x2cefa8: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x2CEFA8u;
    {
        const bool branch_taken_0x2cefa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cefa8) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CEFB0u;
label_2cefb0:
    // 0x2cefb0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x2cefb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x2cefb4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cefb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cefb8: 0x24422568  addiu       $v0, $v0, 0x2568
    ctx->pc = 0x2cefb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9576));
    // 0x2cefbc: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cefbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cefc0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2cefc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2cefc4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cefc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cefc8: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x2cefc8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cefcc: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cefccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cefd0: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CEFD0u;
    SET_GPR_U32(ctx, 31, 0x2CEFD8u);
    ctx->pc = 0x2CEFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEFD0u;
            // 0x2cefd4: 0x24c61680  addiu       $a2, $a2, 0x1680 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEFD8u; }
        if (ctx->pc != 0x2CEFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEFD8u; }
        if (ctx->pc != 0x2CEFD8u) { return; }
    }
    ctx->pc = 0x2CEFD8u;
label_2cefd8:
    // 0x2cefd8: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x2CEFD8u;
    {
        const bool branch_taken_0x2cefd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cefd8) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CEFE0u;
label_2cefe0:
    // 0x2cefe0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cefe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cefe4: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cefe4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cefe8: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cefe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cefec: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cefecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ceff0: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CEFF0u;
    SET_GPR_U32(ctx, 31, 0x2CEFF8u);
    ctx->pc = 0x2CEFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEFF0u;
            // 0x2ceff4: 0x24c61688  addiu       $a2, $a2, 0x1688 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEFF8u; }
        if (ctx->pc != 0x2CEFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEFF8u; }
        if (ctx->pc != 0x2CEFF8u) { return; }
    }
    ctx->pc = 0x2CEFF8u;
label_2ceff8:
    // 0x2ceff8: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x2CEFF8u;
    {
        const bool branch_taken_0x2ceff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ceff8) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CF000u;
label_2cf000:
    // 0x2cf000: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x2cf000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x2cf004: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cf004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cf008: 0x24422568  addiu       $v0, $v0, 0x2568
    ctx->pc = 0x2cf008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9576));
    // 0x2cf00c: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cf00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cf010: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2cf010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2cf014: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cf014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cf018: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x2cf018u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf01c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cf01cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cf020: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CF020u;
    SET_GPR_U32(ctx, 31, 0x2CF028u);
    ctx->pc = 0x2CF024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF020u;
            // 0x2cf024: 0x24c61690  addiu       $a2, $a2, 0x1690 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF028u; }
        if (ctx->pc != 0x2CF028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF028u; }
        if (ctx->pc != 0x2CF028u) { return; }
    }
    ctx->pc = 0x2CF028u;
label_2cf028:
    // 0x2cf028: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x2CF028u;
    {
        const bool branch_taken_0x2cf028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf028) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CF030u;
label_2cf030:
    // 0x2cf030: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x2cf030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x2cf034: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cf034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cf038: 0x24422568  addiu       $v0, $v0, 0x2568
    ctx->pc = 0x2cf038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9576));
    // 0x2cf03c: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cf03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cf040: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2cf040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2cf044: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cf044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cf048: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x2cf048u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf04c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cf04cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cf050: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CF050u;
    SET_GPR_U32(ctx, 31, 0x2CF058u);
    ctx->pc = 0x2CF054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF050u;
            // 0x2cf054: 0x24c616a0  addiu       $a2, $a2, 0x16A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF058u; }
        if (ctx->pc != 0x2CF058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF058u; }
        if (ctx->pc != 0x2CF058u) { return; }
    }
    ctx->pc = 0x2CF058u;
label_2cf058:
    // 0x2cf058: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x2CF058u;
    {
        const bool branch_taken_0x2cf058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf058) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CF060u;
label_2cf060:
    // 0x2cf060: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cf060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cf064: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cf064u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cf068: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cf068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cf06c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cf06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cf070: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CF070u;
    SET_GPR_U32(ctx, 31, 0x2CF078u);
    ctx->pc = 0x2CF074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF070u;
            // 0x2cf074: 0x24c616a8  addiu       $a2, $a2, 0x16A8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF078u; }
        if (ctx->pc != 0x2CF078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF078u; }
        if (ctx->pc != 0x2CF078u) { return; }
    }
    ctx->pc = 0x2CF078u;
label_2cf078:
    // 0x2cf078: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x2CF078u;
    {
        const bool branch_taken_0x2cf078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf078) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CF080u;
label_2cf080:
    // 0x2cf080: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cf080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cf084: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cf084u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cf088: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cf088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cf08c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cf08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cf090: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CF090u;
    SET_GPR_U32(ctx, 31, 0x2CF098u);
    ctx->pc = 0x2CF094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF090u;
            // 0x2cf094: 0x24c616b0  addiu       $a2, $a2, 0x16B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF098u; }
        if (ctx->pc != 0x2CF098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF098u; }
        if (ctx->pc != 0x2CF098u) { return; }
    }
    ctx->pc = 0x2CF098u;
label_2cf098:
    // 0x2cf098: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x2CF098u;
    {
        const bool branch_taken_0x2cf098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf098) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CF0A0u;
label_2cf0a0:
    // 0x2cf0a0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cf0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cf0a4: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cf0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cf0a8: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cf0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cf0ac: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cf0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cf0b0: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CF0B0u;
    SET_GPR_U32(ctx, 31, 0x2CF0B8u);
    ctx->pc = 0x2CF0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF0B0u;
            // 0x2cf0b4: 0x24c616b8  addiu       $a2, $a2, 0x16B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF0B8u; }
        if (ctx->pc != 0x2CF0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF0B8u; }
        if (ctx->pc != 0x2CF0B8u) { return; }
    }
    ctx->pc = 0x2CF0B8u;
label_2cf0b8:
    // 0x2cf0b8: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2CF0B8u;
    {
        const bool branch_taken_0x2cf0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf0b8) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CF0C0u;
label_2cf0c0:
    // 0x2cf0c0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cf0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cf0c4: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cf0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cf0c8: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cf0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cf0cc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cf0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cf0d0: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CF0D0u;
    SET_GPR_U32(ctx, 31, 0x2CF0D8u);
    ctx->pc = 0x2CF0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF0D0u;
            // 0x2cf0d4: 0x24c616c0  addiu       $a2, $a2, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF0D8u; }
        if (ctx->pc != 0x2CF0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF0D8u; }
        if (ctx->pc != 0x2CF0D8u) { return; }
    }
    ctx->pc = 0x2CF0D8u;
label_2cf0d8:
    // 0x2cf0d8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x2CF0D8u;
    {
        const bool branch_taken_0x2cf0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf0d8) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CF0E0u;
label_2cf0e0:
    // 0x2cf0e0: 0x24a38000  addiu       $v1, $a1, -0x8000
    ctx->pc = 0x2cf0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
label_2cf0e4:
    // 0x2cf0e4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x2cf0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x2cf0e8: 0x24422568  addiu       $v0, $v0, 0x2568
    ctx->pc = 0x2cf0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9576));
    // 0x2cf0ec: 0x2463b472  addiu       $v1, $v1, -0x4B8E
    ctx->pc = 0x2cf0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947954));
    // 0x2cf0f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cf0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cf0f4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cf0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cf0f8: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x2cf0f8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf0fc: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cf0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cf100: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cf100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cf104: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cf104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cf108: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CF108u;
    SET_GPR_U32(ctx, 31, 0x2CF110u);
    ctx->pc = 0x2CF10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF108u;
            // 0x2cf10c: 0x24c616c8  addiu       $a2, $a2, 0x16C8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF110u; }
        if (ctx->pc != 0x2CF110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF110u; }
        if (ctx->pc != 0x2CF110u) { return; }
    }
    ctx->pc = 0x2CF110u;
label_2cf110:
    // 0x2cf110: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2CF110u;
    {
        const bool branch_taken_0x2cf110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf110) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CF118u;
label_2cf118:
    // 0x2cf118: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2cf118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2cf11c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x2cf11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x2cf120: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2cf120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x2cf124: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cf124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cf128: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cf128u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cf12c: 0x24632568  addiu       $v1, $v1, 0x2568
    ctx->pc = 0x2cf12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9576));
    // 0x2cf130: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cf130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cf134: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cf134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cf138: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2cf138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2cf13c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2cf13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cf140: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x2cf140u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf144: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CF144u;
    SET_GPR_U32(ctx, 31, 0x2CF14Cu);
    ctx->pc = 0x2CF148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF144u;
            // 0x2cf148: 0x24c616d8  addiu       $a2, $a2, 0x16D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF14Cu; }
        if (ctx->pc != 0x2CF14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF14Cu; }
        if (ctx->pc != 0x2CF14Cu) { return; }
    }
    ctx->pc = 0x2CF14Cu;
label_2cf14c:
    // 0x2cf14c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2CF14Cu;
    {
        const bool branch_taken_0x2cf14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf14c) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CF154u;
label_2cf154:
    // 0x2cf154: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2cf154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2cf158: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x2cf158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x2cf15c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2cf15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x2cf160: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cf160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cf164: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cf164u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cf168: 0x24632568  addiu       $v1, $v1, 0x2568
    ctx->pc = 0x2cf168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9576));
    // 0x2cf16c: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cf16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cf170: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cf170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cf174: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2cf174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2cf178: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2cf178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cf17c: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x2cf17cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf180: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CF180u;
    SET_GPR_U32(ctx, 31, 0x2CF188u);
    ctx->pc = 0x2CF184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF180u;
            // 0x2cf184: 0x24c616e8  addiu       $a2, $a2, 0x16E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF188u; }
        if (ctx->pc != 0x2CF188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF188u; }
        if (ctx->pc != 0x2CF188u) { return; }
    }
    ctx->pc = 0x2CF188u;
label_2cf188:
    // 0x2cf188: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2CF188u;
    {
        const bool branch_taken_0x2cf188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf188) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CF190u;
label_2cf190:
    // 0x2cf190: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2cf190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2cf194: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x2cf194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x2cf198: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x2cf198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x2cf19c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cf19cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cf1a0: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cf1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cf1a4: 0x24632568  addiu       $v1, $v1, 0x2568
    ctx->pc = 0x2cf1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9576));
    // 0x2cf1a8: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cf1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cf1ac: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cf1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cf1b0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2cf1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2cf1b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2cf1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cf1b8: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x2cf1b8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf1bc: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CF1BCu;
    SET_GPR_U32(ctx, 31, 0x2CF1C4u);
    ctx->pc = 0x2CF1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF1BCu;
            // 0x2cf1c0: 0x24c616f8  addiu       $a2, $a2, 0x16F8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF1C4u; }
        if (ctx->pc != 0x2CF1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF1C4u; }
        if (ctx->pc != 0x2CF1C4u) { return; }
    }
    ctx->pc = 0x2CF1C4u;
label_2cf1c4:
    // 0x2cf1c4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2CF1C4u;
    {
        const bool branch_taken_0x2cf1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf1c4) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CF1CCu;
label_2cf1cc:
    // 0x2cf1cc: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cf1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cf1d0: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cf1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cf1d4: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cf1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cf1d8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cf1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cf1dc: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CF1DCu;
    SET_GPR_U32(ctx, 31, 0x2CF1E4u);
    ctx->pc = 0x2CF1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF1DCu;
            // 0x2cf1e0: 0x24c61708  addiu       $a2, $a2, 0x1708 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF1E4u; }
        if (ctx->pc != 0x2CF1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF1E4u; }
        if (ctx->pc != 0x2CF1E4u) { return; }
    }
    ctx->pc = 0x2CF1E4u;
label_2cf1e4:
    // 0x2cf1e4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2CF1E4u;
    {
        const bool branch_taken_0x2cf1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf1e4) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CF1ECu;
label_2cf1ec:
    // 0x2cf1ec: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cf1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cf1f0: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cf1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cf1f4: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cf1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cf1f8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cf1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cf1fc: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CF1FCu;
    SET_GPR_U32(ctx, 31, 0x2CF204u);
    ctx->pc = 0x2CF200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF1FCu;
            // 0x2cf200: 0x24c61710  addiu       $a2, $a2, 0x1710 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF204u; }
        if (ctx->pc != 0x2CF204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF204u; }
        if (ctx->pc != 0x2CF204u) { return; }
    }
    ctx->pc = 0x2CF204u;
label_2cf204:
    // 0x2cf204: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2CF204u;
    {
        const bool branch_taken_0x2cf204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf204) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CF20Cu;
label_2cf20c:
    // 0x2cf20c: 0x61402  srl         $v0, $a2, 16
    ctx->pc = 0x2cf20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x2cf210: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2CF210u;
    {
        const bool branch_taken_0x2cf210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF210u;
            // 0x2cf214: 0x30c3ffff  andi        $v1, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf210) {
            ctx->pc = 0x2CF24Cu;
            goto label_2cf24c;
        }
    }
    ctx->pc = 0x2CF218u;
    // 0x2cf218: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2cf218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2cf21c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cf21cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cf220: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cf220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cf224: 0x2442a880  addiu       $v0, $v0, -0x5780
    ctx->pc = 0x2cf224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944896));
    // 0x2cf228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cf228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cf22c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cf22cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cf230: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2cf230u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf234: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cf234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cf238: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cf238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cf23c: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CF23Cu;
    SET_GPR_U32(ctx, 31, 0x2CF244u);
    ctx->pc = 0x2CF240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF23Cu;
            // 0x2cf240: 0x24c61720  addiu       $a2, $a2, 0x1720 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF244u; }
        if (ctx->pc != 0x2CF244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF244u; }
        if (ctx->pc != 0x2CF244u) { return; }
    }
    ctx->pc = 0x2CF244u;
label_2cf244:
    // 0x2cf244: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CF244u;
    {
        const bool branch_taken_0x2cf244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf244) {
            ctx->pc = 0x2CF278u;
            goto label_2cf278;
        }
    }
    ctx->pc = 0x2CF24Cu;
label_2cf24c:
    // 0x2cf24c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2cf24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2cf250: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cf250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cf254: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cf254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cf258: 0x2442a880  addiu       $v0, $v0, -0x5780
    ctx->pc = 0x2cf258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944896));
    // 0x2cf25c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cf25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cf260: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2cf260u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x2cf264: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2cf264u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf268: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x2cf268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x2cf26c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2cf26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cf270: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x2CF270u;
    SET_GPR_U32(ctx, 31, 0x2CF278u);
    ctx->pc = 0x2CF274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF270u;
            // 0x2cf274: 0x24c61730  addiu       $a2, $a2, 0x1730 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF278u; }
        if (ctx->pc != 0x2CF278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF278u; }
        if (ctx->pc != 0x2CF278u) { return; }
    }
    ctx->pc = 0x2CF278u;
label_2cf278:
    // 0x2cf278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf27c:
    // 0x2cf27c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cf27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2cf280: 0x24420c80  addiu       $v0, $v0, 0xC80
    ctx->pc = 0x2cf280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3200));
    // 0x2cf284: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF284u;
            // 0x2cf288: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF28Cu;
    // 0x2cf28c: 0x0  nop
    ctx->pc = 0x2cf28cu;
    // NOP
}
