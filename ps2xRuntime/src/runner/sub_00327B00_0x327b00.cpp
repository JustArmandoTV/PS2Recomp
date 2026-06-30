#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00327B00
// Address: 0x327b00 - 0x328020
void sub_00327B00_0x327b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327B00_0x327b00");
#endif

    switch (ctx->pc) {
        case 0x327c5cu: goto label_327c5c;
        case 0x327c74u: goto label_327c74;
        case 0x327c90u: goto label_327c90;
        case 0x327ca8u: goto label_327ca8;
        case 0x327cc4u: goto label_327cc4;
        case 0x327cdcu: goto label_327cdc;
        case 0x327cf8u: goto label_327cf8;
        case 0x327d10u: goto label_327d10;
        case 0x327d30u: goto label_327d30;
        case 0x327d48u: goto label_327d48;
        case 0x327d64u: goto label_327d64;
        case 0x327d7cu: goto label_327d7c;
        case 0x327d98u: goto label_327d98;
        case 0x327db0u: goto label_327db0;
        case 0x327dccu: goto label_327dcc;
        case 0x327de4u: goto label_327de4;
        case 0x327e00u: goto label_327e00;
        case 0x327e18u: goto label_327e18;
        case 0x327e34u: goto label_327e34;
        case 0x327e4cu: goto label_327e4c;
        case 0x327e6cu: goto label_327e6c;
        case 0x327e94u: goto label_327e94;
        case 0x327eb0u: goto label_327eb0;
        case 0x327ec8u: goto label_327ec8;
        case 0x327ee4u: goto label_327ee4;
        case 0x327efcu: goto label_327efc;
        case 0x327f18u: goto label_327f18;
        case 0x327f30u: goto label_327f30;
        case 0x327f4cu: goto label_327f4c;
        case 0x327f64u: goto label_327f64;
        case 0x327f80u: goto label_327f80;
        case 0x327f98u: goto label_327f98;
        case 0x327fb4u: goto label_327fb4;
        case 0x327fccu: goto label_327fcc;
        case 0x327fe8u: goto label_327fe8;
        case 0x328000u: goto label_328000;
        default: break;
    }

    ctx->pc = 0x327b00u;

    // 0x327b00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x327b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x327b04: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x327b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x327b08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x327b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x327b0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x327b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x327b10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x327b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x327b14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x327b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x327b18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x327b18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327b1c: 0x8c70a348  lw          $s0, -0x5CB8($v1)
    ctx->pc = 0x327b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
    // 0x327b20: 0x3405cf6c  ori         $a1, $zero, 0xCF6C
    ctx->pc = 0x327b20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53100);
    // 0x327b24: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x327b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x327b28: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x327b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x327b2c: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x327b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x327b30: 0x12250128  beq         $s1, $a1, . + 4 + (0x128 << 2)
    ctx->pc = 0x327B30u;
    {
        const bool branch_taken_0x327b30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        ctx->pc = 0x327B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327B30u;
            // 0x327b34: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327b30) {
            ctx->pc = 0x327FD4u;
            goto label_327fd4;
        }
    }
    ctx->pc = 0x327B38u;
    // 0x327b38: 0x3405cf08  ori         $a1, $zero, 0xCF08
    ctx->pc = 0x327b38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53000);
    // 0x327b3c: 0x12250118  beq         $s1, $a1, . + 4 + (0x118 << 2)
    ctx->pc = 0x327B3Cu;
    {
        const bool branch_taken_0x327b3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x327b3c) {
            ctx->pc = 0x327FA0u;
            goto label_327fa0;
        }
    }
    ctx->pc = 0x327B44u;
    // 0x327b44: 0x3405cbb6  ori         $a1, $zero, 0xCBB6
    ctx->pc = 0x327b44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52150);
    // 0x327b48: 0x12250108  beq         $s1, $a1, . + 4 + (0x108 << 2)
    ctx->pc = 0x327B48u;
    {
        const bool branch_taken_0x327b48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x327b48) {
            ctx->pc = 0x327F6Cu;
            goto label_327f6c;
        }
    }
    ctx->pc = 0x327B50u;
    // 0x327b50: 0x3405cb70  ori         $a1, $zero, 0xCB70
    ctx->pc = 0x327b50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52080);
    // 0x327b54: 0x122500f8  beq         $s1, $a1, . + 4 + (0xF8 << 2)
    ctx->pc = 0x327B54u;
    {
        const bool branch_taken_0x327b54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x327b54) {
            ctx->pc = 0x327F38u;
            goto label_327f38;
        }
    }
    ctx->pc = 0x327B5Cu;
    // 0x327b5c: 0x3405cb75  ori         $a1, $zero, 0xCB75
    ctx->pc = 0x327b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52085);
    // 0x327b60: 0x122500e8  beq         $s1, $a1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x327B60u;
    {
        const bool branch_taken_0x327b60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x327b60) {
            ctx->pc = 0x327F04u;
            goto label_327f04;
        }
    }
    ctx->pc = 0x327B68u;
    // 0x327b68: 0x3405cb76  ori         $a1, $zero, 0xCB76
    ctx->pc = 0x327b68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52086);
    // 0x327b6c: 0x122500d8  beq         $s1, $a1, . + 4 + (0xD8 << 2)
    ctx->pc = 0x327B6Cu;
    {
        const bool branch_taken_0x327b6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x327b6c) {
            ctx->pc = 0x327ED0u;
            goto label_327ed0;
        }
    }
    ctx->pc = 0x327B74u;
    // 0x327b74: 0x3405cb98  ori         $a1, $zero, 0xCB98
    ctx->pc = 0x327b74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52120);
    // 0x327b78: 0x122500c8  beq         $s1, $a1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x327B78u;
    {
        const bool branch_taken_0x327b78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x327b78) {
            ctx->pc = 0x327E9Cu;
            goto label_327e9c;
        }
    }
    ctx->pc = 0x327B80u;
    // 0x327b80: 0x3403cb93  ori         $v1, $zero, 0xCB93
    ctx->pc = 0x327b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52115);
    // 0x327b84: 0x122300b3  beq         $s1, $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x327B84u;
    {
        const bool branch_taken_0x327b84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x327b84) {
            ctx->pc = 0x327E54u;
            goto label_327e54;
        }
    }
    ctx->pc = 0x327B8Cu;
    // 0x327b8c: 0x3403cb92  ori         $v1, $zero, 0xCB92
    ctx->pc = 0x327b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52114);
    // 0x327b90: 0x122300b0  beq         $s1, $v1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x327B90u;
    {
        const bool branch_taken_0x327b90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x327b90) {
            ctx->pc = 0x327E54u;
            goto label_327e54;
        }
    }
    ctx->pc = 0x327B98u;
    // 0x327b98: 0x3403cb91  ori         $v1, $zero, 0xCB91
    ctx->pc = 0x327b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52113);
    // 0x327b9c: 0x122300ad  beq         $s1, $v1, . + 4 + (0xAD << 2)
    ctx->pc = 0x327B9Cu;
    {
        const bool branch_taken_0x327b9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x327b9c) {
            ctx->pc = 0x327E54u;
            goto label_327e54;
        }
    }
    ctx->pc = 0x327BA4u;
    // 0x327ba4: 0x3403cb90  ori         $v1, $zero, 0xCB90
    ctx->pc = 0x327ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52112);
    // 0x327ba8: 0x122300aa  beq         $s1, $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x327BA8u;
    {
        const bool branch_taken_0x327ba8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x327ba8) {
            ctx->pc = 0x327E54u;
            goto label_327e54;
        }
    }
    ctx->pc = 0x327BB0u;
    // 0x327bb0: 0x3403cb8f  ori         $v1, $zero, 0xCB8F
    ctx->pc = 0x327bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52111);
    // 0x327bb4: 0x122300a7  beq         $s1, $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x327BB4u;
    {
        const bool branch_taken_0x327bb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x327bb4) {
            ctx->pc = 0x327E54u;
            goto label_327e54;
        }
    }
    ctx->pc = 0x327BBCu;
    // 0x327bbc: 0x3403cb8e  ori         $v1, $zero, 0xCB8E
    ctx->pc = 0x327bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52110);
    // 0x327bc0: 0x122300a4  beq         $s1, $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x327BC0u;
    {
        const bool branch_taken_0x327bc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x327bc0) {
            ctx->pc = 0x327E54u;
            goto label_327e54;
        }
    }
    ctx->pc = 0x327BC8u;
    // 0x327bc8: 0x3405cb84  ori         $a1, $zero, 0xCB84
    ctx->pc = 0x327bc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52100);
    // 0x327bcc: 0x12250094  beq         $s1, $a1, . + 4 + (0x94 << 2)
    ctx->pc = 0x327BCCu;
    {
        const bool branch_taken_0x327bcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x327bcc) {
            ctx->pc = 0x327E20u;
            goto label_327e20;
        }
    }
    ctx->pc = 0x327BD4u;
    // 0x327bd4: 0x3405cb83  ori         $a1, $zero, 0xCB83
    ctx->pc = 0x327bd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52099);
    // 0x327bd8: 0x12250084  beq         $s1, $a1, . + 4 + (0x84 << 2)
    ctx->pc = 0x327BD8u;
    {
        const bool branch_taken_0x327bd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x327bd8) {
            ctx->pc = 0x327DECu;
            goto label_327dec;
        }
    }
    ctx->pc = 0x327BE0u;
    // 0x327be0: 0x3405cb82  ori         $a1, $zero, 0xCB82
    ctx->pc = 0x327be0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52098);
    // 0x327be4: 0x12250074  beq         $s1, $a1, . + 4 + (0x74 << 2)
    ctx->pc = 0x327BE4u;
    {
        const bool branch_taken_0x327be4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x327be4) {
            ctx->pc = 0x327DB8u;
            goto label_327db8;
        }
    }
    ctx->pc = 0x327BECu;
    // 0x327bec: 0x3405cb7a  ori         $a1, $zero, 0xCB7A
    ctx->pc = 0x327becu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52090);
    // 0x327bf0: 0x12250064  beq         $s1, $a1, . + 4 + (0x64 << 2)
    ctx->pc = 0x327BF0u;
    {
        const bool branch_taken_0x327bf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x327bf0) {
            ctx->pc = 0x327D84u;
            goto label_327d84;
        }
    }
    ctx->pc = 0x327BF8u;
    // 0x327bf8: 0x3405cb4d  ori         $a1, $zero, 0xCB4D
    ctx->pc = 0x327bf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52045);
    // 0x327bfc: 0x12250054  beq         $s1, $a1, . + 4 + (0x54 << 2)
    ctx->pc = 0x327BFCu;
    {
        const bool branch_taken_0x327bfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x327bfc) {
            ctx->pc = 0x327D50u;
            goto label_327d50;
        }
    }
    ctx->pc = 0x327C04u;
    // 0x327c04: 0x3403cb48  ori         $v1, $zero, 0xCB48
    ctx->pc = 0x327c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52040);
    // 0x327c08: 0x12230043  beq         $s1, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x327C08u;
    {
        const bool branch_taken_0x327c08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x327c08) {
            ctx->pc = 0x327D18u;
            goto label_327d18;
        }
    }
    ctx->pc = 0x327C10u;
    // 0x327c10: 0x3405cb43  ori         $a1, $zero, 0xCB43
    ctx->pc = 0x327c10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52035);
    // 0x327c14: 0x12250033  beq         $s1, $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x327C14u;
    {
        const bool branch_taken_0x327c14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x327c14) {
            ctx->pc = 0x327CE4u;
            goto label_327ce4;
        }
    }
    ctx->pc = 0x327C1Cu;
    // 0x327c1c: 0x3405cb39  ori         $a1, $zero, 0xCB39
    ctx->pc = 0x327c1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52025);
    // 0x327c20: 0x12250023  beq         $s1, $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x327C20u;
    {
        const bool branch_taken_0x327c20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x327c20) {
            ctx->pc = 0x327CB0u;
            goto label_327cb0;
        }
    }
    ctx->pc = 0x327C28u;
    // 0x327c28: 0x3405cb3e  ori         $a1, $zero, 0xCB3E
    ctx->pc = 0x327c28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52030);
    // 0x327c2c: 0x12250013  beq         $s1, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x327C2Cu;
    {
        const bool branch_taken_0x327c2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x327c2c) {
            ctx->pc = 0x327C7Cu;
            goto label_327c7c;
        }
    }
    ctx->pc = 0x327C34u;
    // 0x327c34: 0x3405cb25  ori         $a1, $zero, 0xCB25
    ctx->pc = 0x327c34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52005);
    // 0x327c38: 0x12250003  beq         $s1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x327C38u;
    {
        const bool branch_taken_0x327c38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x327c38) {
            ctx->pc = 0x327C48u;
            goto label_327c48;
        }
    }
    ctx->pc = 0x327C40u;
    // 0x327c40: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x327C40u;
    {
        const bool branch_taken_0x327c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327C40u;
            // 0x327c44: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327c40) {
            ctx->pc = 0x328004u;
            goto label_328004;
        }
    }
    ctx->pc = 0x327C48u;
label_327c48:
    // 0x327c48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x327c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x327c4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x327c4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327c50: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x327c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x327c54: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x327C54u;
    SET_GPR_U32(ctx, 31, 0x327C5Cu);
    ctx->pc = 0x327C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327C54u;
            // 0x327c58: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327C5Cu; }
        if (ctx->pc != 0x327C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327C5Cu; }
        if (ctx->pc != 0x327C5Cu) { return; }
    }
    ctx->pc = 0x327C5Cu;
label_327c5c:
    // 0x327c5c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x327c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x327c60: 0x264600e8  addiu       $a2, $s2, 0xE8
    ctx->pc = 0x327c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 232));
    // 0x327c64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x327c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327c68: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x327c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x327c6c: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x327C6Cu;
    SET_GPR_U32(ctx, 31, 0x327C74u);
    ctx->pc = 0x327C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327C6Cu;
            // 0x327c70: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327C74u; }
        if (ctx->pc != 0x327C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327C74u; }
        if (ctx->pc != 0x327C74u) { return; }
    }
    ctx->pc = 0x327C74u;
label_327c74:
    // 0x327c74: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x327C74u;
    {
        const bool branch_taken_0x327c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327c74) {
            ctx->pc = 0x328000u;
            goto label_328000;
        }
    }
    ctx->pc = 0x327C7Cu;
label_327c7c:
    // 0x327c7c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x327c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x327c80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x327c80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327c84: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x327c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x327c88: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x327C88u;
    SET_GPR_U32(ctx, 31, 0x327C90u);
    ctx->pc = 0x327C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327C88u;
            // 0x327c8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327C90u; }
        if (ctx->pc != 0x327C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327C90u; }
        if (ctx->pc != 0x327C90u) { return; }
    }
    ctx->pc = 0x327C90u;
label_327c90:
    // 0x327c90: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x327c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x327c94: 0x26460058  addiu       $a2, $s2, 0x58
    ctx->pc = 0x327c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
    // 0x327c98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x327c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327c9c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x327c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x327ca0: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x327CA0u;
    SET_GPR_U32(ctx, 31, 0x327CA8u);
    ctx->pc = 0x327CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327CA0u;
            // 0x327ca4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327CA8u; }
        if (ctx->pc != 0x327CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327CA8u; }
        if (ctx->pc != 0x327CA8u) { return; }
    }
    ctx->pc = 0x327CA8u;
label_327ca8:
    // 0x327ca8: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x327CA8u;
    {
        const bool branch_taken_0x327ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327ca8) {
            ctx->pc = 0x328000u;
            goto label_328000;
        }
    }
    ctx->pc = 0x327CB0u;
label_327cb0:
    // 0x327cb0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x327cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x327cb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x327cb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327cb8: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x327cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x327cbc: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x327CBCu;
    SET_GPR_U32(ctx, 31, 0x327CC4u);
    ctx->pc = 0x327CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327CBCu;
            // 0x327cc0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327CC4u; }
        if (ctx->pc != 0x327CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327CC4u; }
        if (ctx->pc != 0x327CC4u) { return; }
    }
    ctx->pc = 0x327CC4u;
label_327cc4:
    // 0x327cc4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x327cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x327cc8: 0x264600f0  addiu       $a2, $s2, 0xF0
    ctx->pc = 0x327cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
    // 0x327ccc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x327cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327cd0: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x327cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x327cd4: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x327CD4u;
    SET_GPR_U32(ctx, 31, 0x327CDCu);
    ctx->pc = 0x327CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327CD4u;
            // 0x327cd8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327CDCu; }
        if (ctx->pc != 0x327CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327CDCu; }
        if (ctx->pc != 0x327CDCu) { return; }
    }
    ctx->pc = 0x327CDCu;
label_327cdc:
    // 0x327cdc: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x327CDCu;
    {
        const bool branch_taken_0x327cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327cdc) {
            ctx->pc = 0x328000u;
            goto label_328000;
        }
    }
    ctx->pc = 0x327CE4u;
label_327ce4:
    // 0x327ce4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x327ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x327ce8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x327ce8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327cec: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x327cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x327cf0: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x327CF0u;
    SET_GPR_U32(ctx, 31, 0x327CF8u);
    ctx->pc = 0x327CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327CF0u;
            // 0x327cf4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327CF8u; }
        if (ctx->pc != 0x327CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327CF8u; }
        if (ctx->pc != 0x327CF8u) { return; }
    }
    ctx->pc = 0x327CF8u;
label_327cf8:
    // 0x327cf8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x327cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x327cfc: 0x264600ec  addiu       $a2, $s2, 0xEC
    ctx->pc = 0x327cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 236));
    // 0x327d00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x327d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327d04: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x327d04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x327d08: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x327D08u;
    SET_GPR_U32(ctx, 31, 0x327D10u);
    ctx->pc = 0x327D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327D08u;
            // 0x327d0c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327D10u; }
        if (ctx->pc != 0x327D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327D10u; }
        if (ctx->pc != 0x327D10u) { return; }
    }
    ctx->pc = 0x327D10u;
label_327d10:
    // 0x327d10: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x327D10u;
    {
        const bool branch_taken_0x327d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327d10) {
            ctx->pc = 0x328000u;
            goto label_328000;
        }
    }
    ctx->pc = 0x327D18u;
label_327d18:
    // 0x327d18: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x327d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x327d1c: 0x3405c350  ori         $a1, $zero, 0xC350
    ctx->pc = 0x327d1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
    // 0x327d20: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x327d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x327d24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x327d24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327d28: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x327D28u;
    SET_GPR_U32(ctx, 31, 0x327D30u);
    ctx->pc = 0x327D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327D28u;
            // 0x327d2c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327D30u; }
        if (ctx->pc != 0x327D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327D30u; }
        if (ctx->pc != 0x327D30u) { return; }
    }
    ctx->pc = 0x327D30u;
label_327d30:
    // 0x327d30: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x327d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x327d34: 0x26460058  addiu       $a2, $s2, 0x58
    ctx->pc = 0x327d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
    // 0x327d38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x327d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327d3c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x327d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x327d40: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x327D40u;
    SET_GPR_U32(ctx, 31, 0x327D48u);
    ctx->pc = 0x327D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327D40u;
            // 0x327d44: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327D48u; }
        if (ctx->pc != 0x327D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327D48u; }
        if (ctx->pc != 0x327D48u) { return; }
    }
    ctx->pc = 0x327D48u;
label_327d48:
    // 0x327d48: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x327D48u;
    {
        const bool branch_taken_0x327d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327d48) {
            ctx->pc = 0x328000u;
            goto label_328000;
        }
    }
    ctx->pc = 0x327D50u;
label_327d50:
    // 0x327d50: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x327d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x327d54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x327d54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327d58: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x327d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x327d5c: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x327D5Cu;
    SET_GPR_U32(ctx, 31, 0x327D64u);
    ctx->pc = 0x327D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327D5Cu;
            // 0x327d60: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327D64u; }
        if (ctx->pc != 0x327D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327D64u; }
        if (ctx->pc != 0x327D64u) { return; }
    }
    ctx->pc = 0x327D64u;
label_327d64:
    // 0x327d64: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x327d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x327d68: 0x264600e4  addiu       $a2, $s2, 0xE4
    ctx->pc = 0x327d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 228));
    // 0x327d6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x327d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327d70: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x327d70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x327d74: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x327D74u;
    SET_GPR_U32(ctx, 31, 0x327D7Cu);
    ctx->pc = 0x327D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327D74u;
            // 0x327d78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327D7Cu; }
        if (ctx->pc != 0x327D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327D7Cu; }
        if (ctx->pc != 0x327D7Cu) { return; }
    }
    ctx->pc = 0x327D7Cu;
label_327d7c:
    // 0x327d7c: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x327D7Cu;
    {
        const bool branch_taken_0x327d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327d7c) {
            ctx->pc = 0x328000u;
            goto label_328000;
        }
    }
    ctx->pc = 0x327D84u;
label_327d84:
    // 0x327d84: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x327d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x327d88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x327d88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327d8c: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x327d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x327d90: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x327D90u;
    SET_GPR_U32(ctx, 31, 0x327D98u);
    ctx->pc = 0x327D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327D90u;
            // 0x327d94: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327D98u; }
        if (ctx->pc != 0x327D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327D98u; }
        if (ctx->pc != 0x327D98u) { return; }
    }
    ctx->pc = 0x327D98u;
label_327d98:
    // 0x327d98: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x327d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x327d9c: 0x26460058  addiu       $a2, $s2, 0x58
    ctx->pc = 0x327d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
    // 0x327da0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x327da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327da4: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x327da4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x327da8: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x327DA8u;
    SET_GPR_U32(ctx, 31, 0x327DB0u);
    ctx->pc = 0x327DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327DA8u;
            // 0x327dac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327DB0u; }
        if (ctx->pc != 0x327DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327DB0u; }
        if (ctx->pc != 0x327DB0u) { return; }
    }
    ctx->pc = 0x327DB0u;
label_327db0:
    // 0x327db0: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x327DB0u;
    {
        const bool branch_taken_0x327db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327db0) {
            ctx->pc = 0x328000u;
            goto label_328000;
        }
    }
    ctx->pc = 0x327DB8u;
label_327db8:
    // 0x327db8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x327db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x327dbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x327dbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327dc0: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x327dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x327dc4: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x327DC4u;
    SET_GPR_U32(ctx, 31, 0x327DCCu);
    ctx->pc = 0x327DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327DC4u;
            // 0x327dc8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327DCCu; }
        if (ctx->pc != 0x327DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327DCCu; }
        if (ctx->pc != 0x327DCCu) { return; }
    }
    ctx->pc = 0x327DCCu;
label_327dcc:
    // 0x327dcc: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x327dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x327dd0: 0x264600e8  addiu       $a2, $s2, 0xE8
    ctx->pc = 0x327dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 232));
    // 0x327dd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x327dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327dd8: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x327dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x327ddc: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x327DDCu;
    SET_GPR_U32(ctx, 31, 0x327DE4u);
    ctx->pc = 0x327DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327DDCu;
            // 0x327de0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327DE4u; }
        if (ctx->pc != 0x327DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327DE4u; }
        if (ctx->pc != 0x327DE4u) { return; }
    }
    ctx->pc = 0x327DE4u;
label_327de4:
    // 0x327de4: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x327DE4u;
    {
        const bool branch_taken_0x327de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327de4) {
            ctx->pc = 0x328000u;
            goto label_328000;
        }
    }
    ctx->pc = 0x327DECu;
label_327dec:
    // 0x327dec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x327decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x327df0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x327df0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327df4: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x327df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x327df8: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x327DF8u;
    SET_GPR_U32(ctx, 31, 0x327E00u);
    ctx->pc = 0x327DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327DF8u;
            // 0x327dfc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327E00u; }
        if (ctx->pc != 0x327E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327E00u; }
        if (ctx->pc != 0x327E00u) { return; }
    }
    ctx->pc = 0x327E00u;
label_327e00:
    // 0x327e00: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x327e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x327e04: 0x264600f4  addiu       $a2, $s2, 0xF4
    ctx->pc = 0x327e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 244));
    // 0x327e08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x327e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327e0c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x327e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x327e10: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x327E10u;
    SET_GPR_U32(ctx, 31, 0x327E18u);
    ctx->pc = 0x327E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327E10u;
            // 0x327e14: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327E18u; }
        if (ctx->pc != 0x327E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327E18u; }
        if (ctx->pc != 0x327E18u) { return; }
    }
    ctx->pc = 0x327E18u;
label_327e18:
    // 0x327e18: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x327E18u;
    {
        const bool branch_taken_0x327e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327e18) {
            ctx->pc = 0x328000u;
            goto label_328000;
        }
    }
    ctx->pc = 0x327E20u;
label_327e20:
    // 0x327e20: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x327e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x327e24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x327e24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327e28: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x327e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x327e2c: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x327E2Cu;
    SET_GPR_U32(ctx, 31, 0x327E34u);
    ctx->pc = 0x327E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327E2Cu;
            // 0x327e30: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327E34u; }
        if (ctx->pc != 0x327E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327E34u; }
        if (ctx->pc != 0x327E34u) { return; }
    }
    ctx->pc = 0x327E34u;
label_327e34:
    // 0x327e34: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x327e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x327e38: 0x26460094  addiu       $a2, $s2, 0x94
    ctx->pc = 0x327e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 148));
    // 0x327e3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x327e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327e40: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x327e40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x327e44: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x327E44u;
    SET_GPR_U32(ctx, 31, 0x327E4Cu);
    ctx->pc = 0x327E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327E44u;
            // 0x327e48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327E4Cu; }
        if (ctx->pc != 0x327E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327E4Cu; }
        if (ctx->pc != 0x327E4Cu) { return; }
    }
    ctx->pc = 0x327E4Cu;
label_327e4c:
    // 0x327e4c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x327E4Cu;
    {
        const bool branch_taken_0x327e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327e4c) {
            ctx->pc = 0x328000u;
            goto label_328000;
        }
    }
    ctx->pc = 0x327E54u;
label_327e54:
    // 0x327e54: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x327e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x327e58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x327e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327e5c: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x327e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x327e60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x327e60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327e64: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x327E64u;
    SET_GPR_U32(ctx, 31, 0x327E6Cu);
    ctx->pc = 0x327E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327E64u;
            // 0x327e68: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327E6Cu; }
        if (ctx->pc != 0x327E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327E6Cu; }
        if (ctx->pc != 0x327E6Cu) { return; }
    }
    ctx->pc = 0x327E6Cu;
label_327e6c:
    // 0x327e6c: 0x26238000  addiu       $v1, $s1, -0x8000
    ctx->pc = 0x327e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934528));
    // 0x327e70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x327e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327e74: 0x2463b476  addiu       $v1, $v1, -0x4B8A
    ctx->pc = 0x327e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947958));
    // 0x327e78: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x327e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x327e7c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x327e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x327e80: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x327e80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x327e84: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x327e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x327e88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x327e88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327e8c: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x327E8Cu;
    SET_GPR_U32(ctx, 31, 0x327E94u);
    ctx->pc = 0x327E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327E8Cu;
            // 0x327e90: 0x24460094  addiu       $a2, $v0, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327E94u; }
        if (ctx->pc != 0x327E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327E94u; }
        if (ctx->pc != 0x327E94u) { return; }
    }
    ctx->pc = 0x327E94u;
label_327e94:
    // 0x327e94: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x327E94u;
    {
        const bool branch_taken_0x327e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327e94) {
            ctx->pc = 0x328000u;
            goto label_328000;
        }
    }
    ctx->pc = 0x327E9Cu;
label_327e9c:
    // 0x327e9c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x327e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x327ea0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x327ea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327ea4: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x327ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x327ea8: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x327EA8u;
    SET_GPR_U32(ctx, 31, 0x327EB0u);
    ctx->pc = 0x327EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327EA8u;
            // 0x327eac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327EB0u; }
        if (ctx->pc != 0x327EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327EB0u; }
        if (ctx->pc != 0x327EB0u) { return; }
    }
    ctx->pc = 0x327EB0u;
label_327eb0:
    // 0x327eb0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x327eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x327eb4: 0x26460098  addiu       $a2, $s2, 0x98
    ctx->pc = 0x327eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 152));
    // 0x327eb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x327eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327ebc: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x327ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x327ec0: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x327EC0u;
    SET_GPR_U32(ctx, 31, 0x327EC8u);
    ctx->pc = 0x327EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327EC0u;
            // 0x327ec4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327EC8u; }
        if (ctx->pc != 0x327EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327EC8u; }
        if (ctx->pc != 0x327EC8u) { return; }
    }
    ctx->pc = 0x327EC8u;
label_327ec8:
    // 0x327ec8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x327EC8u;
    {
        const bool branch_taken_0x327ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327ec8) {
            ctx->pc = 0x328000u;
            goto label_328000;
        }
    }
    ctx->pc = 0x327ED0u;
label_327ed0:
    // 0x327ed0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x327ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x327ed4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x327ed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327ed8: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x327ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x327edc: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x327EDCu;
    SET_GPR_U32(ctx, 31, 0x327EE4u);
    ctx->pc = 0x327EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327EDCu;
            // 0x327ee0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327EE4u; }
        if (ctx->pc != 0x327EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327EE4u; }
        if (ctx->pc != 0x327EE4u) { return; }
    }
    ctx->pc = 0x327EE4u;
label_327ee4:
    // 0x327ee4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x327ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x327ee8: 0x264600e8  addiu       $a2, $s2, 0xE8
    ctx->pc = 0x327ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 232));
    // 0x327eec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x327eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327ef0: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x327ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x327ef4: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x327EF4u;
    SET_GPR_U32(ctx, 31, 0x327EFCu);
    ctx->pc = 0x327EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327EF4u;
            // 0x327ef8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327EFCu; }
        if (ctx->pc != 0x327EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327EFCu; }
        if (ctx->pc != 0x327EFCu) { return; }
    }
    ctx->pc = 0x327EFCu;
label_327efc:
    // 0x327efc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x327EFCu;
    {
        const bool branch_taken_0x327efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327efc) {
            ctx->pc = 0x328000u;
            goto label_328000;
        }
    }
    ctx->pc = 0x327F04u;
label_327f04:
    // 0x327f04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x327f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x327f08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x327f08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f0c: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x327f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x327f10: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x327F10u;
    SET_GPR_U32(ctx, 31, 0x327F18u);
    ctx->pc = 0x327F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327F10u;
            // 0x327f14: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327F18u; }
        if (ctx->pc != 0x327F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327F18u; }
        if (ctx->pc != 0x327F18u) { return; }
    }
    ctx->pc = 0x327F18u;
label_327f18:
    // 0x327f18: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x327f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x327f1c: 0x2646010c  addiu       $a2, $s2, 0x10C
    ctx->pc = 0x327f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 268));
    // 0x327f20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x327f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f24: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x327f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x327f28: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x327F28u;
    SET_GPR_U32(ctx, 31, 0x327F30u);
    ctx->pc = 0x327F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327F28u;
            // 0x327f2c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327F30u; }
        if (ctx->pc != 0x327F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327F30u; }
        if (ctx->pc != 0x327F30u) { return; }
    }
    ctx->pc = 0x327F30u;
label_327f30:
    // 0x327f30: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x327F30u;
    {
        const bool branch_taken_0x327f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327f30) {
            ctx->pc = 0x328000u;
            goto label_328000;
        }
    }
    ctx->pc = 0x327F38u;
label_327f38:
    // 0x327f38: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x327f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x327f3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x327f3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f40: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x327f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x327f44: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x327F44u;
    SET_GPR_U32(ctx, 31, 0x327F4Cu);
    ctx->pc = 0x327F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327F44u;
            // 0x327f48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327F4Cu; }
        if (ctx->pc != 0x327F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327F4Cu; }
        if (ctx->pc != 0x327F4Cu) { return; }
    }
    ctx->pc = 0x327F4Cu;
label_327f4c:
    // 0x327f4c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x327f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x327f50: 0x26460058  addiu       $a2, $s2, 0x58
    ctx->pc = 0x327f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
    // 0x327f54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x327f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f58: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x327f58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x327f5c: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x327F5Cu;
    SET_GPR_U32(ctx, 31, 0x327F64u);
    ctx->pc = 0x327F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327F5Cu;
            // 0x327f60: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327F64u; }
        if (ctx->pc != 0x327F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327F64u; }
        if (ctx->pc != 0x327F64u) { return; }
    }
    ctx->pc = 0x327F64u;
label_327f64:
    // 0x327f64: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x327F64u;
    {
        const bool branch_taken_0x327f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327f64) {
            ctx->pc = 0x328000u;
            goto label_328000;
        }
    }
    ctx->pc = 0x327F6Cu;
label_327f6c:
    // 0x327f6c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x327f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x327f70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x327f70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f74: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x327f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x327f78: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x327F78u;
    SET_GPR_U32(ctx, 31, 0x327F80u);
    ctx->pc = 0x327F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327F78u;
            // 0x327f7c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327F80u; }
        if (ctx->pc != 0x327F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327F80u; }
        if (ctx->pc != 0x327F80u) { return; }
    }
    ctx->pc = 0x327F80u;
label_327f80:
    // 0x327f80: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x327f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x327f84: 0x2646009c  addiu       $a2, $s2, 0x9C
    ctx->pc = 0x327f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 156));
    // 0x327f88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x327f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f8c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x327f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x327f90: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x327F90u;
    SET_GPR_U32(ctx, 31, 0x327F98u);
    ctx->pc = 0x327F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327F90u;
            // 0x327f94: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327F98u; }
        if (ctx->pc != 0x327F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327F98u; }
        if (ctx->pc != 0x327F98u) { return; }
    }
    ctx->pc = 0x327F98u;
label_327f98:
    // 0x327f98: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x327F98u;
    {
        const bool branch_taken_0x327f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327f98) {
            ctx->pc = 0x328000u;
            goto label_328000;
        }
    }
    ctx->pc = 0x327FA0u;
label_327fa0:
    // 0x327fa0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x327fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x327fa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x327fa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327fa8: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x327fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x327fac: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x327FACu;
    SET_GPR_U32(ctx, 31, 0x327FB4u);
    ctx->pc = 0x327FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327FACu;
            // 0x327fb0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327FB4u; }
        if (ctx->pc != 0x327FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327FB4u; }
        if (ctx->pc != 0x327FB4u) { return; }
    }
    ctx->pc = 0x327FB4u;
label_327fb4:
    // 0x327fb4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x327fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x327fb8: 0x264600a0  addiu       $a2, $s2, 0xA0
    ctx->pc = 0x327fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x327fbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x327fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327fc0: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x327fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x327fc4: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x327FC4u;
    SET_GPR_U32(ctx, 31, 0x327FCCu);
    ctx->pc = 0x327FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327FC4u;
            // 0x327fc8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327FCCu; }
        if (ctx->pc != 0x327FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327FCCu; }
        if (ctx->pc != 0x327FCCu) { return; }
    }
    ctx->pc = 0x327FCCu;
label_327fcc:
    // 0x327fcc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x327FCCu;
    {
        const bool branch_taken_0x327fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327fcc) {
            ctx->pc = 0x328000u;
            goto label_328000;
        }
    }
    ctx->pc = 0x327FD4u;
label_327fd4:
    // 0x327fd4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x327fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x327fd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x327fd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327fdc: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x327fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x327fe0: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x327FE0u;
    SET_GPR_U32(ctx, 31, 0x327FE8u);
    ctx->pc = 0x327FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327FE0u;
            // 0x327fe4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327FE8u; }
        if (ctx->pc != 0x327FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327FE8u; }
        if (ctx->pc != 0x327FE8u) { return; }
    }
    ctx->pc = 0x327FE8u;
label_327fe8:
    // 0x327fe8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x327fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x327fec: 0x26460128  addiu       $a2, $s2, 0x128
    ctx->pc = 0x327fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 296));
    // 0x327ff0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x327ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327ff4: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x327ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x327ff8: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x327FF8u;
    SET_GPR_U32(ctx, 31, 0x328000u);
    ctx->pc = 0x327FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327FF8u;
            // 0x327ffc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328000u; }
        if (ctx->pc != 0x328000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328000u; }
        if (ctx->pc != 0x328000u) { return; }
    }
    ctx->pc = 0x328000u;
label_328000:
    // 0x328000: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x328000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_328004:
    // 0x328004: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x328004u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x328008: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x328008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32800c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32800cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328010: 0x3e00008  jr          $ra
    ctx->pc = 0x328010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328010u;
            // 0x328014: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x328018u;
    // 0x328018: 0x0  nop
    ctx->pc = 0x328018u;
    // NOP
    // 0x32801c: 0x0  nop
    ctx->pc = 0x32801cu;
    // NOP
}
