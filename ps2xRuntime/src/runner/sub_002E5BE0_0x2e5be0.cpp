#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E5BE0
// Address: 0x2e5be0 - 0x2e6fc0
void sub_002E5BE0_0x2e5be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5BE0_0x2e5be0");
#endif

    switch (ctx->pc) {
        case 0x2e5c54u: goto label_2e5c54;
        case 0x2e5c8cu: goto label_2e5c8c;
        case 0x2e5cd4u: goto label_2e5cd4;
        case 0x2e5cdcu: goto label_2e5cdc;
        case 0x2e5d04u: goto label_2e5d04;
        case 0x2e5d10u: goto label_2e5d10;
        case 0x2e5d18u: goto label_2e5d18;
        case 0x2e5d20u: goto label_2e5d20;
        case 0x2e5d2cu: goto label_2e5d2c;
        case 0x2e5d34u: goto label_2e5d34;
        case 0x2e5d3cu: goto label_2e5d3c;
        case 0x2e5d44u: goto label_2e5d44;
        case 0x2e5d50u: goto label_2e5d50;
        case 0x2e5d6cu: goto label_2e5d6c;
        case 0x2e5d88u: goto label_2e5d88;
        case 0x2e5da0u: goto label_2e5da0;
        case 0x2e5dacu: goto label_2e5dac;
        case 0x2e5dbcu: goto label_2e5dbc;
        case 0x2e5e14u: goto label_2e5e14;
        case 0x2e5e24u: goto label_2e5e24;
        case 0x2e5e2cu: goto label_2e5e2c;
        case 0x2e5e38u: goto label_2e5e38;
        case 0x2e5e4cu: goto label_2e5e4c;
        case 0x2e5e54u: goto label_2e5e54;
        case 0x2e5e90u: goto label_2e5e90;
        case 0x2e5e98u: goto label_2e5e98;
        case 0x2e5ea0u: goto label_2e5ea0;
        case 0x2e5eacu: goto label_2e5eac;
        case 0x2e5eb4u: goto label_2e5eb4;
        case 0x2e5ec4u: goto label_2e5ec4;
        case 0x2e5eccu: goto label_2e5ecc;
        case 0x2e5ed8u: goto label_2e5ed8;
        case 0x2e5ef8u: goto label_2e5ef8;
        case 0x2e5f20u: goto label_2e5f20;
        case 0x2e5f54u: goto label_2e5f54;
        case 0x2e5f68u: goto label_2e5f68;
        case 0x2e5f84u: goto label_2e5f84;
        case 0x2e5f9cu: goto label_2e5f9c;
        case 0x2e5fc0u: goto label_2e5fc0;
        case 0x2e5fd0u: goto label_2e5fd0;
        case 0x2e5fe8u: goto label_2e5fe8;
        case 0x2e5ff8u: goto label_2e5ff8;
        case 0x2e6008u: goto label_2e6008;
        case 0x2e6018u: goto label_2e6018;
        case 0x2e6030u: goto label_2e6030;
        case 0x2e6040u: goto label_2e6040;
        case 0x2e6050u: goto label_2e6050;
        case 0x2e6060u: goto label_2e6060;
        case 0x2e6070u: goto label_2e6070;
        case 0x2e60f4u: goto label_2e60f4;
        case 0x2e6120u: goto label_2e6120;
        case 0x2e6140u: goto label_2e6140;
        case 0x2e6148u: goto label_2e6148;
        case 0x2e6150u: goto label_2e6150;
        case 0x2e615cu: goto label_2e615c;
        case 0x2e6164u: goto label_2e6164;
        case 0x2e6174u: goto label_2e6174;
        case 0x2e617cu: goto label_2e617c;
        case 0x2e6188u: goto label_2e6188;
        case 0x2e61a8u: goto label_2e61a8;
        case 0x2e61d0u: goto label_2e61d0;
        case 0x2e620cu: goto label_2e620c;
        case 0x2e6228u: goto label_2e6228;
        case 0x2e6240u: goto label_2e6240;
        case 0x2e6258u: goto label_2e6258;
        case 0x2e626cu: goto label_2e626c;
        case 0x2e6290u: goto label_2e6290;
        case 0x2e62a0u: goto label_2e62a0;
        case 0x2e62b8u: goto label_2e62b8;
        case 0x2e62c8u: goto label_2e62c8;
        case 0x2e62d8u: goto label_2e62d8;
        case 0x2e62e8u: goto label_2e62e8;
        case 0x2e62f8u: goto label_2e62f8;
        case 0x2e6310u: goto label_2e6310;
        case 0x2e6320u: goto label_2e6320;
        case 0x2e6330u: goto label_2e6330;
        case 0x2e6340u: goto label_2e6340;
        case 0x2e6350u: goto label_2e6350;
        case 0x2e6360u: goto label_2e6360;
        case 0x2e6408u: goto label_2e6408;
        case 0x2e6430u: goto label_2e6430;
        case 0x2e6448u: goto label_2e6448;
        case 0x2e6460u: goto label_2e6460;
        case 0x2e6484u: goto label_2e6484;
        case 0x2e648cu: goto label_2e648c;
        case 0x2e6494u: goto label_2e6494;
        case 0x2e649cu: goto label_2e649c;
        case 0x2e64a8u: goto label_2e64a8;
        case 0x2e64b0u: goto label_2e64b0;
        case 0x2e64b8u: goto label_2e64b8;
        case 0x2e64c0u: goto label_2e64c0;
        case 0x2e64ccu: goto label_2e64cc;
        case 0x2e64ecu: goto label_2e64ec;
        case 0x2e6514u: goto label_2e6514;
        case 0x2e654cu: goto label_2e654c;
        case 0x2e65d0u: goto label_2e65d0;
        case 0x2e65e0u: goto label_2e65e0;
        case 0x2e65f0u: goto label_2e65f0;
        case 0x2e6600u: goto label_2e6600;
        case 0x2e6610u: goto label_2e6610;
        case 0x2e6620u: goto label_2e6620;
        case 0x2e6638u: goto label_2e6638;
        case 0x2e6648u: goto label_2e6648;
        case 0x2e6658u: goto label_2e6658;
        case 0x2e6668u: goto label_2e6668;
        case 0x2e6678u: goto label_2e6678;
        case 0x2e671cu: goto label_2e671c;
        case 0x2e6748u: goto label_2e6748;
        case 0x2e6760u: goto label_2e6760;
        case 0x2e6778u: goto label_2e6778;
        case 0x2e679cu: goto label_2e679c;
        case 0x2e67acu: goto label_2e67ac;
        case 0x2e67b4u: goto label_2e67b4;
        case 0x2e67bcu: goto label_2e67bc;
        case 0x2e67c4u: goto label_2e67c4;
        case 0x2e67d0u: goto label_2e67d0;
        case 0x2e67d8u: goto label_2e67d8;
        case 0x2e67f0u: goto label_2e67f0;
        case 0x2e6810u: goto label_2e6810;
        case 0x2e6838u: goto label_2e6838;
        case 0x2e6850u: goto label_2e6850;
        case 0x2e6888u: goto label_2e6888;
        case 0x2e6898u: goto label_2e6898;
        case 0x2e68d8u: goto label_2e68d8;
        case 0x2e696cu: goto label_2e696c;
        case 0x2e6998u: goto label_2e6998;
        case 0x2e69b0u: goto label_2e69b0;
        case 0x2e69c8u: goto label_2e69c8;
        case 0x2e69ecu: goto label_2e69ec;
        case 0x2e69fcu: goto label_2e69fc;
        case 0x2e6a04u: goto label_2e6a04;
        case 0x2e6a0cu: goto label_2e6a0c;
        case 0x2e6a14u: goto label_2e6a14;
        case 0x2e6a20u: goto label_2e6a20;
        case 0x2e6a28u: goto label_2e6a28;
        case 0x2e6a40u: goto label_2e6a40;
        case 0x2e6a60u: goto label_2e6a60;
        case 0x2e6a88u: goto label_2e6a88;
        case 0x2e6aa0u: goto label_2e6aa0;
        case 0x2e6ae0u: goto label_2e6ae0;
        case 0x2e6af0u: goto label_2e6af0;
        case 0x2e6b30u: goto label_2e6b30;
        case 0x2e6bd8u: goto label_2e6bd8;
        case 0x2e6c00u: goto label_2e6c00;
        case 0x2e6c18u: goto label_2e6c18;
        case 0x2e6c3cu: goto label_2e6c3c;
        case 0x2e6c48u: goto label_2e6c48;
        case 0x2e6c50u: goto label_2e6c50;
        case 0x2e6c58u: goto label_2e6c58;
        case 0x2e6c64u: goto label_2e6c64;
        case 0x2e6c6cu: goto label_2e6c6c;
        case 0x2e6c74u: goto label_2e6c74;
        case 0x2e6c7cu: goto label_2e6c7c;
        case 0x2e6c88u: goto label_2e6c88;
        case 0x2e6ca8u: goto label_2e6ca8;
        case 0x2e6cd0u: goto label_2e6cd0;
        case 0x2e6d0cu: goto label_2e6d0c;
        case 0x2e6d1cu: goto label_2e6d1c;
        case 0x2e6d34u: goto label_2e6d34;
        case 0x2e6d44u: goto label_2e6d44;
        case 0x2e6d54u: goto label_2e6d54;
        case 0x2e6d74u: goto label_2e6d74;
        case 0x2e6dacu: goto label_2e6dac;
        case 0x2e6ddcu: goto label_2e6ddc;
        case 0x2e6df0u: goto label_2e6df0;
        case 0x2e6e08u: goto label_2e6e08;
        case 0x2e6e20u: goto label_2e6e20;
        case 0x2e6e30u: goto label_2e6e30;
        case 0x2e6e40u: goto label_2e6e40;
        case 0x2e6e50u: goto label_2e6e50;
        case 0x2e6e60u: goto label_2e6e60;
        case 0x2e6e78u: goto label_2e6e78;
        case 0x2e6e88u: goto label_2e6e88;
        case 0x2e6e98u: goto label_2e6e98;
        case 0x2e6ea8u: goto label_2e6ea8;
        case 0x2e6eb8u: goto label_2e6eb8;
        case 0x2e6f60u: goto label_2e6f60;
        case 0x2e6f88u: goto label_2e6f88;
        default: break;
    }

    ctx->pc = 0x2e5be0u;

    // 0x2e5be0: 0x27bdf920  addiu       $sp, $sp, -0x6E0
    ctx->pc = 0x2e5be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965536));
    // 0x2e5be4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x2e5be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x2e5be8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e5be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2e5bec: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2e5becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2e5bf0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2e5bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2e5bf4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e5bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2e5bf8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e5bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e5bfc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e5bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e5c00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e5c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e5c04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e5c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e5c08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e5c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e5c0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e5c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e5c10: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x2e5c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
    // 0x2e5c14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e5c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5c18: 0x9084010d  lbu         $a0, 0x10D($a0)
    ctx->pc = 0x2e5c18u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 269)));
    // 0x2e5c1c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e5c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e5c20: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5C20u;
    {
        const bool branch_taken_0x2e5c20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E5C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5C20u;
            // 0x2e5c24: 0x8ca50130  lw          $a1, 0x130($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c20) {
            ctx->pc = 0x2E5C30u;
            goto label_2e5c30;
        }
    }
    ctx->pc = 0x2E5C28u;
    // 0x2e5c28: 0x548504d8  bnel        $a0, $a1, . + 4 + (0x4D8 << 2)
    ctx->pc = 0x2E5C28u;
    {
        const bool branch_taken_0x2e5c28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x2e5c28) {
            ctx->pc = 0x2E5C2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5C28u;
            // 0x2e5c2c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E6F8Cu;
            goto label_2e6f8c;
        }
    }
    ctx->pc = 0x2E5C30u;
label_2e5c30:
    // 0x2e5c30: 0x8e0400f4  lw          $a0, 0xF4($s0)
    ctx->pc = 0x2e5c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2e5c34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e5c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5c38: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x2e5c38u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e5c3c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2e5c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2e5c40: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5C40u;
    {
        const bool branch_taken_0x2e5c40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e5c40) {
            ctx->pc = 0x2E5C44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5C40u;
            // 0x2e5c44: 0x8e050104  lw          $a1, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E5C60u;
            goto label_2e5c60;
        }
    }
    ctx->pc = 0x2E5C48u;
    // 0x2e5c48: 0x8e0500f8  lw          $a1, 0xF8($s0)
    ctx->pc = 0x2e5c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x2e5c4c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E5C4Cu;
    SET_GPR_U32(ctx, 31, 0x2E5C54u);
    ctx->pc = 0x2E5C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5C4Cu;
            // 0x2e5c50: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5C54u; }
        if (ctx->pc != 0x2E5C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5C54u; }
        if (ctx->pc != 0x2E5C54u) { return; }
    }
    ctx->pc = 0x2E5C54u;
label_2e5c54:
    // 0x2e5c54: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e5c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e5c58: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x2e5c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x2e5c5c: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x2e5c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2e5c60:
    // 0x2e5c60: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2E5C60u;
    {
        const bool branch_taken_0x2e5c60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5c60) {
            ctx->pc = 0x2E5C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5C60u;
            // 0x2e5c64: 0x8e0500f4  lw          $a1, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E5C90u;
            goto label_2e5c90;
        }
    }
    ctx->pc = 0x2E5C68u;
    // 0x2e5c68: 0x8e0400f4  lw          $a0, 0xF4($s0)
    ctx->pc = 0x2e5c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2e5c6c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x2e5c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2e5c70: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x2e5c70u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e5c74: 0x30840200  andi        $a0, $a0, 0x200
    ctx->pc = 0x2e5c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x2e5c78: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5C78u;
    {
        const bool branch_taken_0x2e5c78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e5c78) {
            ctx->pc = 0x2E5C8Cu;
            goto label_2e5c8c;
        }
    }
    ctx->pc = 0x2E5C80u;
    // 0x2e5c80: 0x8e0600fc  lw          $a2, 0xFC($s0)
    ctx->pc = 0x2e5c80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x2e5c84: 0xc04ccc4  jal         func_133310
    ctx->pc = 0x2E5C84u;
    SET_GPR_U32(ctx, 31, 0x2E5C8Cu);
    ctx->pc = 0x2E5C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5C84u;
            // 0x2e5c88: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5C8Cu; }
        if (ctx->pc != 0x2E5C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5C8Cu; }
        if (ctx->pc != 0x2E5C8Cu) { return; }
    }
    ctx->pc = 0x2E5C8Cu;
label_2e5c8c:
    // 0x2e5c8c: 0x8e0500f4  lw          $a1, 0xF4($s0)
    ctx->pc = 0x2e5c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_2e5c90:
    // 0x2e5c90: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x2e5c90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2e5c94: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x2e5c94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2e5c98: 0x102004bb  beqz        $at, . + 4 + (0x4BB << 2)
    ctx->pc = 0x2E5C98u;
    {
        const bool branch_taken_0x2e5c98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5c98) {
            ctx->pc = 0x2E6F88u;
            goto label_2e6f88;
        }
    }
    ctx->pc = 0x2E5CA0u;
    // 0x2e5ca0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2e5ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x2e5ca4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e5ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e5ca8: 0x24841dc0  addiu       $a0, $a0, 0x1DC0
    ctx->pc = 0x2e5ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7616));
    // 0x2e5cac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e5cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e5cb0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2e5cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e5cb4: 0x600008  jr          $v1
    ctx->pc = 0x2E5CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E5CBCu: goto label_2e5cbc;
            case 0x2E5E78u: goto label_2e5e78;
            case 0x2E6128u: goto label_2e6128;
            case 0x2E6438u: goto label_2e6438;
            case 0x2E6750u: goto label_2e6750;
            case 0x2E69A0u: goto label_2e69a0;
            case 0x2E6C08u: goto label_2e6c08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E5CBCu;
label_2e5cbc:
    // 0x2e5cbc: 0x9211010d  lbu         $s1, 0x10D($s0)
    ctx->pc = 0x2e5cbcu;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
    // 0x2e5cc0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e5cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e5cc4: 0x52220008  beql        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E5CC4u;
    {
        const bool branch_taken_0x2e5cc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e5cc4) {
            ctx->pc = 0x2E5CC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5CC4u;
            // 0x2e5cc8: 0x8e020104  lw          $v0, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E5CE8u;
            goto label_2e5ce8;
        }
    }
    ctx->pc = 0x2E5CCCu;
    // 0x2e5ccc: 0xc0b36b4  jal         func_2CDAD0
    ctx->pc = 0x2E5CCCu;
    SET_GPR_U32(ctx, 31, 0x2E5CD4u);
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5CD4u; }
        if (ctx->pc != 0x2E5CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5CD4u; }
        if (ctx->pc != 0x2E5CD4u) { return; }
    }
    ctx->pc = 0x2E5CD4u;
label_2e5cd4:
    // 0x2e5cd4: 0xc0b9c64  jal         func_2E7190
    ctx->pc = 0x2E5CD4u;
    SET_GPR_U32(ctx, 31, 0x2E5CDCu);
    ctx->pc = 0x2E5CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5CD4u;
            // 0x2e5cd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5CDCu; }
        if (ctx->pc != 0x2E5CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5CDCu; }
        if (ctx->pc != 0x2E5CDCu) { return; }
    }
    ctx->pc = 0x2E5CDCu;
label_2e5cdc:
    // 0x2e5cdc: 0x162204aa  bne         $s1, $v0, . + 4 + (0x4AA << 2)
    ctx->pc = 0x2E5CDCu;
    {
        const bool branch_taken_0x2e5cdc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e5cdc) {
            ctx->pc = 0x2E6F88u;
            goto label_2e6f88;
        }
    }
    ctx->pc = 0x2E5CE4u;
    // 0x2e5ce4: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2e5ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2e5ce8:
    // 0x2e5ce8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5CE8u;
    {
        const bool branch_taken_0x2e5ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5CE8u;
            // 0x2e5cec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ce8) {
            ctx->pc = 0x2E5D08u;
            goto label_2e5d08;
        }
    }
    ctx->pc = 0x2E5CF0u;
    // 0x2e5cf0: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x2e5cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2e5cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5cf8: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2e5cf8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e5cfc: 0xc0b96f0  jal         func_2E5BC0
    ctx->pc = 0x2E5CFCu;
    SET_GPR_U32(ctx, 31, 0x2E5D04u);
    ctx->pc = 0x2E5D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5CFCu;
            // 0x2e5d00: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5BC0u;
    if (runtime->hasFunction(0x2E5BC0u)) {
        auto targetFn = runtime->lookupFunction(0x2E5BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D04u; }
        if (ctx->pc != 0x2E5D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5BC0_0x2e5bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D04u; }
        if (ctx->pc != 0x2E5D04u) { return; }
    }
    ctx->pc = 0x2E5D04u;
label_2e5d04:
    // 0x2e5d04: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2e5d04u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e5d08:
    // 0x2e5d08: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x2E5D08u;
    SET_GPR_U32(ctx, 31, 0x2E5D10u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D10u; }
        if (ctx->pc != 0x2E5D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D10u; }
        if (ctx->pc != 0x2E5D10u) { return; }
    }
    ctx->pc = 0x2E5D10u;
label_2e5d10:
    // 0x2e5d10: 0xc0b36b4  jal         func_2CDAD0
    ctx->pc = 0x2E5D10u;
    SET_GPR_U32(ctx, 31, 0x2E5D18u);
    ctx->pc = 0x2E5D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5D10u;
            // 0x2e5d14: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D18u; }
        if (ctx->pc != 0x2E5D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D18u; }
        if (ctx->pc != 0x2E5D18u) { return; }
    }
    ctx->pc = 0x2E5D18u;
label_2e5d18:
    // 0x2e5d18: 0xc0b9c64  jal         func_2E7190
    ctx->pc = 0x2E5D18u;
    SET_GPR_U32(ctx, 31, 0x2E5D20u);
    ctx->pc = 0x2E5D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5D18u;
            // 0x2e5d1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D20u; }
        if (ctx->pc != 0x2E5D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D20u; }
        if (ctx->pc != 0x2E5D20u) { return; }
    }
    ctx->pc = 0x2E5D20u;
label_2e5d20:
    // 0x2e5d20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e5d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5d24: 0xc076984  jal         func_1DA610
    ctx->pc = 0x2E5D24u;
    SET_GPR_U32(ctx, 31, 0x2E5D2Cu);
    ctx->pc = 0x2E5D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5D24u;
            // 0x2e5d28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D2Cu; }
        if (ctx->pc != 0x2E5D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D2Cu; }
        if (ctx->pc != 0x2E5D2Cu) { return; }
    }
    ctx->pc = 0x2E5D2Cu;
label_2e5d2c:
    // 0x2e5d2c: 0xc07697c  jal         func_1DA5F0
    ctx->pc = 0x2E5D2Cu;
    SET_GPR_U32(ctx, 31, 0x2E5D34u);
    ctx->pc = 0x2E5D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5D2Cu;
            // 0x2e5d30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D34u; }
        if (ctx->pc != 0x2E5D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D34u; }
        if (ctx->pc != 0x2E5D34u) { return; }
    }
    ctx->pc = 0x2E5D34u;
label_2e5d34:
    // 0x2e5d34: 0xc0b36b4  jal         func_2CDAD0
    ctx->pc = 0x2E5D34u;
    SET_GPR_U32(ctx, 31, 0x2E5D3Cu);
    ctx->pc = 0x2E5D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5D34u;
            // 0x2e5d38: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D3Cu; }
        if (ctx->pc != 0x2E5D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D3Cu; }
        if (ctx->pc != 0x2E5D3Cu) { return; }
    }
    ctx->pc = 0x2E5D3Cu;
label_2e5d3c:
    // 0x2e5d3c: 0xc0b9c64  jal         func_2E7190
    ctx->pc = 0x2E5D3Cu;
    SET_GPR_U32(ctx, 31, 0x2E5D44u);
    ctx->pc = 0x2E5D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5D3Cu;
            // 0x2e5d40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D44u; }
        if (ctx->pc != 0x2E5D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D44u; }
        if (ctx->pc != 0x2E5D44u) { return; }
    }
    ctx->pc = 0x2E5D44u;
label_2e5d44:
    // 0x2e5d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5d48: 0xc0b9c10  jal         func_2E7040
    ctx->pc = 0x2E5D48u;
    SET_GPR_U32(ctx, 31, 0x2E5D50u);
    ctx->pc = 0x2E5D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5D48u;
            // 0x2e5d4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7040u;
    if (runtime->hasFunction(0x2E7040u)) {
        auto targetFn = runtime->lookupFunction(0x2E7040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D50u; }
        if (ctx->pc != 0x2E5D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7040_0x2e7040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D50u; }
        if (ctx->pc != 0x2E5D50u) { return; }
    }
    ctx->pc = 0x2E5D50u;
label_2e5d50:
    // 0x2e5d50: 0x1440048d  bnez        $v0, . + 4 + (0x48D << 2)
    ctx->pc = 0x2E5D50u;
    {
        const bool branch_taken_0x2e5d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5d50) {
            ctx->pc = 0x2E6F88u;
            goto label_2e6f88;
        }
    }
    ctx->pc = 0x2E5D58u;
    // 0x2e5d58: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x2e5d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2e5d5c: 0x8e1400f0  lw          $s4, 0xF0($s0)
    ctx->pc = 0x2e5d5cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2e5d60: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x2e5d60u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2e5d64: 0x10600488  beqz        $v1, . + 4 + (0x488 << 2)
    ctx->pc = 0x2E5D64u;
    {
        const bool branch_taken_0x2e5d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5D64u;
            // 0x2e5d68: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5d64) {
            ctx->pc = 0x2E6F88u;
            goto label_2e6f88;
        }
    }
    ctx->pc = 0x2E5D6Cu;
label_2e5d6c:
    // 0x2e5d6c: 0x86830034  lh          $v1, 0x34($s4)
    ctx->pc = 0x2e5d6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x2e5d70: 0x18600039  blez        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x2E5D70u;
    {
        const bool branch_taken_0x2e5d70 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2e5d70) {
            ctx->pc = 0x2E5E58u;
            goto label_2e5e58;
        }
    }
    ctx->pc = 0x2E5D78u;
    // 0x2e5d78: 0x27a40640  addiu       $a0, $sp, 0x640
    ctx->pc = 0x2e5d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
    // 0x2e5d7c: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x2e5d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2e5d80: 0xc04ccc4  jal         func_133310
    ctx->pc = 0x2E5D80u;
    SET_GPR_U32(ctx, 31, 0x2E5D88u);
    ctx->pc = 0x2E5D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5D80u;
            // 0x2e5d84: 0x26860010  addiu       $a2, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D88u; }
        if (ctx->pc != 0x2E5D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5D88u; }
        if (ctx->pc != 0x2E5D88u) { return; }
    }
    ctx->pc = 0x2E5D88u;
label_2e5d88:
    // 0x2e5d88: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5D88u;
    {
        const bool branch_taken_0x2e5d88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5d88) {
            ctx->pc = 0x2E5DA0u;
            goto label_2e5da0;
        }
    }
    ctx->pc = 0x2E5D90u;
    // 0x2e5d90: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x2e5d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2e5d94: 0x27a40640  addiu       $a0, $sp, 0x640
    ctx->pc = 0x2e5d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
    // 0x2e5d98: 0xc04ccc4  jal         func_133310
    ctx->pc = 0x2E5D98u;
    SET_GPR_U32(ctx, 31, 0x2E5DA0u);
    ctx->pc = 0x2E5D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5D98u;
            // 0x2e5d9c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5DA0u; }
        if (ctx->pc != 0x2E5DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5DA0u; }
        if (ctx->pc != 0x2E5DA0u) { return; }
    }
    ctx->pc = 0x2E5DA0u;
label_2e5da0:
    // 0x2e5da0: 0x27a40650  addiu       $a0, $sp, 0x650
    ctx->pc = 0x2e5da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1616));
    // 0x2e5da4: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E5DA4u;
    SET_GPR_U32(ctx, 31, 0x2E5DACu);
    ctx->pc = 0x2E5DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5DA4u;
            // 0x2e5da8: 0x27a50640  addiu       $a1, $sp, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5DACu; }
        if (ctx->pc != 0x2E5DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5DACu; }
        if (ctx->pc != 0x2E5DACu) { return; }
    }
    ctx->pc = 0x2E5DACu;
label_2e5dac:
    // 0x2e5dac: 0xc68c003c  lwc1        $f12, 0x3C($s4)
    ctx->pc = 0x2e5dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5db0: 0x27a40640  addiu       $a0, $sp, 0x640
    ctx->pc = 0x2e5db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
    // 0x2e5db4: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x2E5DB4u;
    SET_GPR_U32(ctx, 31, 0x2E5DBCu);
    ctx->pc = 0x2E5DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5DB4u;
            // 0x2e5db8: 0x27a50650  addiu       $a1, $sp, 0x650 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5DBCu; }
        if (ctx->pc != 0x2E5DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5DBCu; }
        if (ctx->pc != 0x2E5DBCu) { return; }
    }
    ctx->pc = 0x2E5DBCu;
label_2e5dbc:
    // 0x2e5dbc: 0xc7a10644  lwc1        $f1, 0x644($sp)
    ctx->pc = 0x2e5dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5dc0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e5dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e5dc4: 0xc7a20640  lwc1        $f2, 0x640($sp)
    ctx->pc = 0x2e5dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e5dc8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e5dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2e5dcc: 0xc7a00648  lwc1        $f0, 0x648($sp)
    ctx->pc = 0x2e5dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5dd0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2e5dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2e5dd4: 0xe4410ef0  swc1        $f1, 0xEF0($v0)
    ctx->pc = 0x2e5dd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3824), bits); }
    // 0x2e5dd8: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x2e5dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
    // 0x2e5ddc: 0xe4620eec  swc1        $f2, 0xEEC($v1)
    ctx->pc = 0x2e5ddcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 3820), bits); }
    // 0x2e5de0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e5de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e5de4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2e5de4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2e5de8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e5de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2e5dec: 0xe4400ef4  swc1        $f0, 0xEF4($v0)
    ctx->pc = 0x2e5decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3828), bits); }
    // 0x2e5df0: 0x27a506a0  addiu       $a1, $sp, 0x6A0
    ctx->pc = 0x2e5df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
    // 0x2e5df4: 0xe4820ee0  swc1        $f2, 0xEE0($a0)
    ctx->pc = 0x2e5df4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3808), bits); }
    // 0x2e5df8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2e5df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5dfc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2e5dfcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2e5e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5e04: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e5e04u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e5e08: 0xe4e10ee4  swc1        $f1, 0xEE4($a3)
    ctx->pc = 0x2e5e08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 3812), bits); }
    // 0x2e5e0c: 0xc0b9bf0  jal         func_2E6FC0
    ctx->pc = 0x2E5E0Cu;
    SET_GPR_U32(ctx, 31, 0x2E5E14u);
    ctx->pc = 0x2E5E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5E0Cu;
            // 0x2e5e10: 0xe4600ee8  swc1        $f0, 0xEE8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 3816), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E6FC0u;
    if (runtime->hasFunction(0x2E6FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2E6FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5E14u; }
        if (ctx->pc != 0x2E5E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E6FC0_0x2e6fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5E14u; }
        if (ctx->pc != 0x2E5E14u) { return; }
    }
    ctx->pc = 0x2E5E14u;
label_2e5e14:
    // 0x2e5e14: 0x27a40660  addiu       $a0, $sp, 0x660
    ctx->pc = 0x2e5e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1632));
    // 0x2e5e18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e5e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5e1c: 0xc04cd60  jal         func_133580
    ctx->pc = 0x2E5E1Cu;
    SET_GPR_U32(ctx, 31, 0x2E5E24u);
    ctx->pc = 0x2E5E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5E1Cu;
            // 0x2e5e20: 0x27a606a0  addiu       $a2, $sp, 0x6A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5E24u; }
        if (ctx->pc != 0x2E5E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5E24u; }
        if (ctx->pc != 0x2E5E24u) { return; }
    }
    ctx->pc = 0x2E5E24u;
label_2e5e24:
    // 0x2e5e24: 0xc0508b0  jal         func_1422C0
    ctx->pc = 0x2E5E24u;
    SET_GPR_U32(ctx, 31, 0x2E5E2Cu);
    ctx->pc = 0x2E5E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5E24u;
            // 0x2e5e28: 0x27a40660  addiu       $a0, $sp, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5E2Cu; }
        if (ctx->pc != 0x2E5E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5E2Cu; }
        if (ctx->pc != 0x2E5E2Cu) { return; }
    }
    ctx->pc = 0x2E5E2Cu;
label_2e5e2c:
    // 0x2e5e2c: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x2e5e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x2e5e30: 0xc050dcc  jal         func_143730
    ctx->pc = 0x2E5E30u;
    SET_GPR_U32(ctx, 31, 0x2E5E38u);
    ctx->pc = 0x2E5E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5E30u;
            // 0x2e5e34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143730u;
    if (runtime->hasFunction(0x143730u)) {
        auto targetFn = runtime->lookupFunction(0x143730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5E38u; }
        if (ctx->pc != 0x2E5E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143730_0x143730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5E38u; }
        if (ctx->pc != 0x2E5E38u) { return; }
    }
    ctx->pc = 0x2E5E38u;
label_2e5e38:
    // 0x2e5e38: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x2e5e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x2e5e3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e5e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5e40: 0x24a50ee0  addiu       $a1, $a1, 0xEE0
    ctx->pc = 0x2e5e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3808));
    // 0x2e5e44: 0xc050e7c  jal         func_1439F0
    ctx->pc = 0x2E5E44u;
    SET_GPR_U32(ctx, 31, 0x2E5E4Cu);
    ctx->pc = 0x2E5E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5E44u;
            // 0x2e5e48: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1439F0u;
    if (runtime->hasFunction(0x1439F0u)) {
        auto targetFn = runtime->lookupFunction(0x1439F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5E4Cu; }
        if (ctx->pc != 0x2E5E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001439F0_0x1439f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5E4Cu; }
        if (ctx->pc != 0x2E5E4Cu) { return; }
    }
    ctx->pc = 0x2E5E4Cu;
label_2e5e4c:
    // 0x2e5e4c: 0xc050f6c  jal         func_143DB0
    ctx->pc = 0x2E5E4Cu;
    SET_GPR_U32(ctx, 31, 0x2E5E54u);
    ctx->pc = 0x143DB0u;
    if (runtime->hasFunction(0x143DB0u)) {
        auto targetFn = runtime->lookupFunction(0x143DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5E54u; }
        if (ctx->pc != 0x2E5E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143DB0_0x143db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5E54u; }
        if (ctx->pc != 0x2E5E54u) { return; }
    }
    ctx->pc = 0x2E5E54u;
label_2e5e54:
    // 0x2e5e54: 0x0  nop
    ctx->pc = 0x2e5e54u;
    // NOP
label_2e5e58:
    // 0x2e5e58: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x2e5e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2e5e5c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e5e5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e5e60: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x2e5e60u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2e5e64: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x2e5e64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e5e68: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x2E5E68u;
    {
        const bool branch_taken_0x2e5e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5E68u;
            // 0x2e5e6c: 0x26940060  addiu       $s4, $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e68) {
            ctx->pc = 0x2E5D6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e5d6c;
        }
    }
    ctx->pc = 0x2E5E70u;
    // 0x2e5e70: 0x10000445  b           . + 4 + (0x445 << 2)
    ctx->pc = 0x2E5E70u;
    {
        const bool branch_taken_0x2e5e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5e70) {
            ctx->pc = 0x2E6F88u;
            goto label_2e6f88;
        }
    }
    ctx->pc = 0x2E5E78u;
label_2e5e78:
    // 0x2e5e78: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2e5e78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e5e7c: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x2e5e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2e5e80: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2e5e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x2e5e84: 0x3b02a  slt         $s6, $zero, $v1
    ctx->pc = 0x2e5e84u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e5e88: 0xc0b36b4  jal         func_2CDAD0
    ctx->pc = 0x2E5E88u;
    SET_GPR_U32(ctx, 31, 0x2E5E90u);
    ctx->pc = 0x2E5E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5E88u;
            // 0x2e5e8c: 0x2b82a  slt         $s7, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5E90u; }
        if (ctx->pc != 0x2E5E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5E90u; }
        if (ctx->pc != 0x2E5E90u) { return; }
    }
    ctx->pc = 0x2E5E90u;
label_2e5e90:
    // 0x2e5e90: 0xc0b9c64  jal         func_2E7190
    ctx->pc = 0x2E5E90u;
    SET_GPR_U32(ctx, 31, 0x2E5E98u);
    ctx->pc = 0x2E5E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5E90u;
            // 0x2e5e94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5E98u; }
        if (ctx->pc != 0x2E5E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5E98u; }
        if (ctx->pc != 0x2E5E98u) { return; }
    }
    ctx->pc = 0x2E5E98u;
label_2e5e98:
    // 0x2e5e98: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x2E5E98u;
    SET_GPR_U32(ctx, 31, 0x2E5EA0u);
    ctx->pc = 0x2E5E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5E98u;
            // 0x2e5e9c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5EA0u; }
        if (ctx->pc != 0x2E5EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5EA0u; }
        if (ctx->pc != 0x2E5EA0u) { return; }
    }
    ctx->pc = 0x2E5EA0u;
label_2e5ea0:
    // 0x2e5ea0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e5ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5ea4: 0xc076984  jal         func_1DA610
    ctx->pc = 0x2E5EA4u;
    SET_GPR_U32(ctx, 31, 0x2E5EACu);
    ctx->pc = 0x2E5EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5EA4u;
            // 0x2e5ea8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5EACu; }
        if (ctx->pc != 0x2E5EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5EACu; }
        if (ctx->pc != 0x2E5EACu) { return; }
    }
    ctx->pc = 0x2E5EACu;
label_2e5eac:
    // 0x2e5eac: 0xc07697c  jal         func_1DA5F0
    ctx->pc = 0x2E5EACu;
    SET_GPR_U32(ctx, 31, 0x2E5EB4u);
    ctx->pc = 0x2E5EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5EACu;
            // 0x2e5eb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5EB4u; }
        if (ctx->pc != 0x2E5EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5EB4u; }
        if (ctx->pc != 0x2E5EB4u) { return; }
    }
    ctx->pc = 0x2E5EB4u;
label_2e5eb4:
    // 0x2e5eb4: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x2e5eb4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
    // 0x2e5eb8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e5eb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5ebc: 0xc0b36b4  jal         func_2CDAD0
    ctx->pc = 0x2E5EBCu;
    SET_GPR_U32(ctx, 31, 0x2E5EC4u);
    ctx->pc = 0x2E5EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5EBCu;
            // 0x2e5ec0: 0x26311d50  addiu       $s1, $s1, 0x1D50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5EC4u; }
        if (ctx->pc != 0x2E5EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5EC4u; }
        if (ctx->pc != 0x2E5EC4u) { return; }
    }
    ctx->pc = 0x2E5EC4u;
label_2e5ec4:
    // 0x2e5ec4: 0xc0b9c64  jal         func_2E7190
    ctx->pc = 0x2E5EC4u;
    SET_GPR_U32(ctx, 31, 0x2E5ECCu);
    ctx->pc = 0x2E5EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5EC4u;
            // 0x2e5ec8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5ECCu; }
        if (ctx->pc != 0x2E5ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5ECCu; }
        if (ctx->pc != 0x2E5ECCu) { return; }
    }
    ctx->pc = 0x2E5ECCu;
label_2e5ecc:
    // 0x2e5ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5ed0: 0xc0b9c10  jal         func_2E7040
    ctx->pc = 0x2E5ED0u;
    SET_GPR_U32(ctx, 31, 0x2E5ED8u);
    ctx->pc = 0x2E5ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5ED0u;
            // 0x2e5ed4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7040u;
    if (runtime->hasFunction(0x2E7040u)) {
        auto targetFn = runtime->lookupFunction(0x2E7040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5ED8u; }
        if (ctx->pc != 0x2E5ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7040_0x2e7040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5ED8u; }
        if (ctx->pc != 0x2E5ED8u) { return; }
    }
    ctx->pc = 0x2E5ED8u;
label_2e5ed8:
    // 0x2e5ed8: 0x1440042b  bnez        $v0, . + 4 + (0x42B << 2)
    ctx->pc = 0x2E5ED8u;
    {
        const bool branch_taken_0x2e5ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5ed8) {
            ctx->pc = 0x2E6F88u;
            goto label_2e6f88;
        }
    }
    ctx->pc = 0x2E5EE0u;
    // 0x2e5ee0: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x2e5ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2e5ee4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e5ee4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5ee8: 0x8e1500f0  lw          $s5, 0xF0($s0)
    ctx->pc = 0x2e5ee8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2e5eec: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x2e5eecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2e5ef0: 0x10600087  beqz        $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x2E5EF0u;
    {
        const bool branch_taken_0x2e5ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5EF0u;
            // 0x2e5ef4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ef0) {
            ctx->pc = 0x2E6110u;
            goto label_2e6110;
        }
    }
    ctx->pc = 0x2E5EF8u;
label_2e5ef8:
    // 0x2e5ef8: 0x86a30034  lh          $v1, 0x34($s5)
    ctx->pc = 0x2e5ef8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x2e5efc: 0x1860007e  blez        $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x2E5EFCu;
    {
        const bool branch_taken_0x2e5efc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2e5efc) {
            ctx->pc = 0x2E60F8u;
            goto label_2e60f8;
        }
    }
    ctx->pc = 0x2E5F04u;
    // 0x2e5f04: 0x16600008  bnez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E5F04u;
    {
        const bool branch_taken_0x2e5f04 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5f04) {
            ctx->pc = 0x2E5F28u;
            goto label_2e5f28;
        }
    }
    ctx->pc = 0x2E5F0Cu;
    // 0x2e5f0c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2e5f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e5f10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e5f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5f14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e5f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5f18: 0xc0508b4  jal         func_1422D0
    ctx->pc = 0x2E5F18u;
    SET_GPR_U32(ctx, 31, 0x2E5F20u);
    ctx->pc = 0x2E5F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5F18u;
            // 0x2e5f1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422D0u;
    if (runtime->hasFunction(0x1422D0u)) {
        auto targetFn = runtime->lookupFunction(0x1422D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5F20u; }
        if (ctx->pc != 0x2E5F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422D0_0x1422d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5F20u; }
        if (ctx->pc != 0x2E5F20u) { return; }
    }
    ctx->pc = 0x2E5F20u;
label_2e5f20:
    // 0x2e5f20: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x2e5f20u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2e5f24: 0x0  nop
    ctx->pc = 0x2e5f24u;
    // NOP
label_2e5f28:
    // 0x2e5f28: 0x8ea70030  lw          $a3, 0x30($s5)
    ctx->pc = 0x2e5f28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x2e5f2c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2e5f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x2e5f30: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e5f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e5f34: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e5f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e5f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5f3c: 0xaca7e5dc  sw          $a3, -0x1A24($a1)
    ctx->pc = 0x2e5f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960604), GPR_U32(ctx, 7));
    // 0x2e5f40: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e5f40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5f44: 0x27a50600  addiu       $a1, $sp, 0x600
    ctx->pc = 0x2e5f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
    // 0x2e5f48: 0x0  nop
    ctx->pc = 0x2e5f48u;
    // NOP
    // 0x2e5f4c: 0xc0b9bf0  jal         func_2E6FC0
    ctx->pc = 0x2E5F4Cu;
    SET_GPR_U32(ctx, 31, 0x2E5F54u);
    ctx->pc = 0x2E5F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5F4Cu;
            // 0x2e5f50: 0xac47e5ac  sw          $a3, -0x1A54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960556), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E6FC0u;
    if (runtime->hasFunction(0x2E6FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2E6FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5F54u; }
        if (ctx->pc != 0x2E5F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E6FC0_0x2e6fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5F54u; }
        if (ctx->pc != 0x2E5F54u) { return; }
    }
    ctx->pc = 0x2E5F54u;
label_2e5f54:
    // 0x2e5f54: 0xc6ad0040  lwc1        $f13, 0x40($s5)
    ctx->pc = 0x2e5f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e5f58: 0x27a40590  addiu       $a0, $sp, 0x590
    ctx->pc = 0x2e5f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
    // 0x2e5f5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e5f5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e5f60: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2E5F60u;
    SET_GPR_U32(ctx, 31, 0x2E5F68u);
    ctx->pc = 0x2E5F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5F60u;
            // 0x2e5f64: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5F68u; }
        if (ctx->pc != 0x2E5F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5F68u; }
        if (ctx->pc != 0x2E5F68u) { return; }
    }
    ctx->pc = 0x2E5F68u;
label_2e5f68:
    // 0x2e5f68: 0xc6a1003c  lwc1        $f1, 0x3C($s5)
    ctx->pc = 0x2e5f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5f6c: 0x27a405a0  addiu       $a0, $sp, 0x5A0
    ctx->pc = 0x2e5f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
    // 0x2e5f70: 0xc6a00040  lwc1        $f0, 0x40($s5)
    ctx->pc = 0x2e5f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5f74: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2e5f74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e5f78: 0x46000b07  neg.s       $f12, $f1
    ctx->pc = 0x2e5f78u;
    ctx->f[12] = FPU_NEG_S(ctx->f[1]);
    // 0x2e5f7c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2E5F7Cu;
    SET_GPR_U32(ctx, 31, 0x2E5F84u);
    ctx->pc = 0x2E5F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5F7Cu;
            // 0x2e5f80: 0x46000347  neg.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5F84u; }
        if (ctx->pc != 0x2E5F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5F84u; }
        if (ctx->pc != 0x2E5F84u) { return; }
    }
    ctx->pc = 0x2E5F84u;
label_2e5f84:
    // 0x2e5f84: 0xc6a00040  lwc1        $f0, 0x40($s5)
    ctx->pc = 0x2e5f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5f88: 0x27a405b0  addiu       $a0, $sp, 0x5B0
    ctx->pc = 0x2e5f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
    // 0x2e5f8c: 0xc6ac003c  lwc1        $f12, 0x3C($s5)
    ctx->pc = 0x2e5f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5f90: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2e5f90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e5f94: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2E5F94u;
    SET_GPR_U32(ctx, 31, 0x2E5F9Cu);
    ctx->pc = 0x2E5F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5F94u;
            // 0x2e5f98: 0x46000347  neg.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5F9Cu; }
        if (ctx->pc != 0x2E5F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5F9Cu; }
        if (ctx->pc != 0x2E5F9Cu) { return; }
    }
    ctx->pc = 0x2E5F9Cu;
label_2e5f9c:
    // 0x2e5f9c: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5F9Cu;
    {
        const bool branch_taken_0x2e5f9c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5f9c) {
            ctx->pc = 0x2E5FB0u;
            goto label_2e5fb0;
        }
    }
    ctx->pc = 0x2E5FA4u;
    // 0x2e5fa4: 0x12e0001e  beqz        $s7, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E5FA4u;
    {
        const bool branch_taken_0x2e5fa4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5fa4) {
            ctx->pc = 0x2E6020u;
            goto label_2e6020;
        }
    }
    ctx->pc = 0x2E5FACu;
    // 0x2e5fac: 0x0  nop
    ctx->pc = 0x2e5facu;
    // NOP
label_2e5fb0:
    // 0x2e5fb0: 0x27a405c0  addiu       $a0, $sp, 0x5C0
    ctx->pc = 0x2e5fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
    // 0x2e5fb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e5fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5fb8: 0xc04cd60  jal         func_133580
    ctx->pc = 0x2E5FB8u;
    SET_GPR_U32(ctx, 31, 0x2E5FC0u);
    ctx->pc = 0x2E5FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5FB8u;
            // 0x2e5fbc: 0x27a60600  addiu       $a2, $sp, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5FC0u; }
        if (ctx->pc != 0x2E5FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5FC0u; }
        if (ctx->pc != 0x2E5FC0u) { return; }
    }
    ctx->pc = 0x2E5FC0u;
label_2e5fc0:
    // 0x2e5fc0: 0x27a40600  addiu       $a0, $sp, 0x600
    ctx->pc = 0x2e5fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
    // 0x2e5fc4: 0x27a505c0  addiu       $a1, $sp, 0x5C0
    ctx->pc = 0x2e5fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
    // 0x2e5fc8: 0xc04cd60  jal         func_133580
    ctx->pc = 0x2E5FC8u;
    SET_GPR_U32(ctx, 31, 0x2E5FD0u);
    ctx->pc = 0x2E5FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5FC8u;
            // 0x2e5fcc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5FD0u; }
        if (ctx->pc != 0x2E5FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5FD0u; }
        if (ctx->pc != 0x2E5FD0u) { return; }
    }
    ctx->pc = 0x2E5FD0u;
label_2e5fd0:
    // 0x2e5fd0: 0x8ea60048  lw          $a2, 0x48($s5)
    ctx->pc = 0x2e5fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x2e5fd4: 0x27a405c0  addiu       $a0, $sp, 0x5C0
    ctx->pc = 0x2e5fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
    // 0x2e5fd8: 0x8ea7004c  lw          $a3, 0x4C($s5)
    ctx->pc = 0x2e5fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x2e5fdc: 0x8ea80050  lw          $t0, 0x50($s5)
    ctx->pc = 0x2e5fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x2e5fe0: 0xc04ce30  jal         func_1338C0
    ctx->pc = 0x2E5FE0u;
    SET_GPR_U32(ctx, 31, 0x2E5FE8u);
    ctx->pc = 0x2E5FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5FE0u;
            // 0x2e5fe4: 0x27a50600  addiu       $a1, $sp, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1338C0u;
    if (runtime->hasFunction(0x1338C0u)) {
        auto targetFn = runtime->lookupFunction(0x1338C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5FE8u; }
        if (ctx->pc != 0x2E5FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001338C0_0x1338c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5FE8u; }
        if (ctx->pc != 0x2E5FE8u) { return; }
    }
    ctx->pc = 0x2E5FE8u;
label_2e5fe8:
    // 0x2e5fe8: 0x27a40560  addiu       $a0, $sp, 0x560
    ctx->pc = 0x2e5fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
    // 0x2e5fec: 0x27a505c0  addiu       $a1, $sp, 0x5C0
    ctx->pc = 0x2e5fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
    // 0x2e5ff0: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E5FF0u;
    SET_GPR_U32(ctx, 31, 0x2E5FF8u);
    ctx->pc = 0x2E5FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5FF0u;
            // 0x2e5ff4: 0x27a60590  addiu       $a2, $sp, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5FF8u; }
        if (ctx->pc != 0x2E5FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5FF8u; }
        if (ctx->pc != 0x2E5FF8u) { return; }
    }
    ctx->pc = 0x2E5FF8u;
label_2e5ff8:
    // 0x2e5ff8: 0x27a40570  addiu       $a0, $sp, 0x570
    ctx->pc = 0x2e5ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
    // 0x2e5ffc: 0x27a505c0  addiu       $a1, $sp, 0x5C0
    ctx->pc = 0x2e5ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
    // 0x2e6000: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E6000u;
    SET_GPR_U32(ctx, 31, 0x2E6008u);
    ctx->pc = 0x2E6004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6000u;
            // 0x2e6004: 0x27a605a0  addiu       $a2, $sp, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6008u; }
        if (ctx->pc != 0x2E6008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6008u; }
        if (ctx->pc != 0x2E6008u) { return; }
    }
    ctx->pc = 0x2E6008u;
label_2e6008:
    // 0x2e6008: 0x27a40580  addiu       $a0, $sp, 0x580
    ctx->pc = 0x2e6008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
    // 0x2e600c: 0x27a505c0  addiu       $a1, $sp, 0x5C0
    ctx->pc = 0x2e600cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
    // 0x2e6010: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E6010u;
    SET_GPR_U32(ctx, 31, 0x2E6018u);
    ctx->pc = 0x2E6014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6010u;
            // 0x2e6014: 0x27a605b0  addiu       $a2, $sp, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6018u; }
        if (ctx->pc != 0x2E6018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6018u; }
        if (ctx->pc != 0x2E6018u) { return; }
    }
    ctx->pc = 0x2E6018u;
label_2e6018:
    // 0x2e6018: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E6018u;
    {
        const bool branch_taken_0x2e6018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6018) {
            ctx->pc = 0x2E6070u;
            goto label_2e6070;
        }
    }
    ctx->pc = 0x2E6020u;
label_2e6020:
    // 0x2e6020: 0x27a405c0  addiu       $a0, $sp, 0x5C0
    ctx->pc = 0x2e6020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
    // 0x2e6024: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e6024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6028: 0xc04cd60  jal         func_133580
    ctx->pc = 0x2E6028u;
    SET_GPR_U32(ctx, 31, 0x2E6030u);
    ctx->pc = 0x2E602Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6028u;
            // 0x2e602c: 0x27a60600  addiu       $a2, $sp, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6030u; }
        if (ctx->pc != 0x2E6030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6030u; }
        if (ctx->pc != 0x2E6030u) { return; }
    }
    ctx->pc = 0x2E6030u;
label_2e6030:
    // 0x2e6030: 0x27a40600  addiu       $a0, $sp, 0x600
    ctx->pc = 0x2e6030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
    // 0x2e6034: 0x27a505c0  addiu       $a1, $sp, 0x5C0
    ctx->pc = 0x2e6034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
    // 0x2e6038: 0xc04cd60  jal         func_133580
    ctx->pc = 0x2E6038u;
    SET_GPR_U32(ctx, 31, 0x2E6040u);
    ctx->pc = 0x2E603Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6038u;
            // 0x2e603c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6040u; }
        if (ctx->pc != 0x2E6040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6040u; }
        if (ctx->pc != 0x2E6040u) { return; }
    }
    ctx->pc = 0x2E6040u;
label_2e6040:
    // 0x2e6040: 0x27a40560  addiu       $a0, $sp, 0x560
    ctx->pc = 0x2e6040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
    // 0x2e6044: 0x27a50600  addiu       $a1, $sp, 0x600
    ctx->pc = 0x2e6044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
    // 0x2e6048: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E6048u;
    SET_GPR_U32(ctx, 31, 0x2E6050u);
    ctx->pc = 0x2E604Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6048u;
            // 0x2e604c: 0x27a60590  addiu       $a2, $sp, 0x590 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6050u; }
        if (ctx->pc != 0x2E6050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6050u; }
        if (ctx->pc != 0x2E6050u) { return; }
    }
    ctx->pc = 0x2E6050u;
label_2e6050:
    // 0x2e6050: 0x27a40570  addiu       $a0, $sp, 0x570
    ctx->pc = 0x2e6050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
    // 0x2e6054: 0x27a50600  addiu       $a1, $sp, 0x600
    ctx->pc = 0x2e6054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
    // 0x2e6058: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E6058u;
    SET_GPR_U32(ctx, 31, 0x2E6060u);
    ctx->pc = 0x2E605Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6058u;
            // 0x2e605c: 0x27a605a0  addiu       $a2, $sp, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6060u; }
        if (ctx->pc != 0x2E6060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6060u; }
        if (ctx->pc != 0x2E6060u) { return; }
    }
    ctx->pc = 0x2E6060u;
label_2e6060:
    // 0x2e6060: 0x27a40580  addiu       $a0, $sp, 0x580
    ctx->pc = 0x2e6060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
    // 0x2e6064: 0x27a50600  addiu       $a1, $sp, 0x600
    ctx->pc = 0x2e6064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
    // 0x2e6068: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E6068u;
    SET_GPR_U32(ctx, 31, 0x2E6070u);
    ctx->pc = 0x2E606Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6068u;
            // 0x2e606c: 0x27a605b0  addiu       $a2, $sp, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6070u; }
        if (ctx->pc != 0x2E6070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6070u; }
        if (ctx->pc != 0x2E6070u) { return; }
    }
    ctx->pc = 0x2E6070u;
label_2e6070:
    // 0x2e6070: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2e6070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x2e6074: 0xc7a20560  lwc1        $f2, 0x560($sp)
    ctx->pc = 0x2e6074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6078: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e6078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e607c: 0xc7a00564  lwc1        $f0, 0x564($sp)
    ctx->pc = 0x2e607cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6080: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e6080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e6084: 0xc7a10568  lwc1        $f1, 0x568($sp)
    ctx->pc = 0x2e6084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6088: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e6088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e608c: 0xe442e5a0  swc1        $f2, -0x1A60($v0)
    ctx->pc = 0x2e608cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294960544), bits); }
    // 0x2e6090: 0x24a5e5a0  addiu       $a1, $a1, -0x1A60
    ctx->pc = 0x2e6090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960544));
    // 0x2e6094: 0xe460e5a4  swc1        $f0, -0x1A5C($v1)
    ctx->pc = 0x2e6094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294960548), bits); }
    // 0x2e6098: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e6098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e609c: 0xe441e5a8  swc1        $f1, -0x1A58($v0)
    ctx->pc = 0x2e609cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294960552), bits); }
    // 0x2e60a0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e60a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e60a4: 0xc7a00570  lwc1        $f0, 0x570($sp)
    ctx->pc = 0x2e60a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e60a8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e60a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e60ac: 0xc7a20574  lwc1        $f2, 0x574($sp)
    ctx->pc = 0x2e60acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e60b0: 0xc7a10578  lwc1        $f1, 0x578($sp)
    ctx->pc = 0x2e60b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e60b4: 0xe460e5b8  swc1        $f0, -0x1A48($v1)
    ctx->pc = 0x2e60b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294960568), bits); }
    // 0x2e60b8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e60b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e60bc: 0xe461e5c0  swc1        $f1, -0x1A40($v1)
    ctx->pc = 0x2e60bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294960576), bits); }
    // 0x2e60c0: 0xe442e5bc  swc1        $f2, -0x1A44($v0)
    ctx->pc = 0x2e60c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294960572), bits); }
    // 0x2e60c4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e60c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e60c8: 0xc7a00580  lwc1        $f0, 0x580($sp)
    ctx->pc = 0x2e60c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e60cc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e60ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e60d0: 0xc7a10584  lwc1        $f1, 0x584($sp)
    ctx->pc = 0x2e60d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e60d4: 0xe440e5d0  swc1        $f0, -0x1A30($v0)
    ctx->pc = 0x2e60d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294960592), bits); }
    // 0x2e60d8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e60d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e60dc: 0xe441e5d4  swc1        $f1, -0x1A2C($v0)
    ctx->pc = 0x2e60dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294960596), bits); }
    // 0x2e60e0: 0xc7a00588  lwc1        $f0, 0x588($sp)
    ctx->pc = 0x2e60e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e60e4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e60e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e60e8: 0x8c46e5e8  lw          $a2, -0x1A18($v0)
    ctx->pc = 0x2e60e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960616)));
    // 0x2e60ec: 0xc050a08  jal         func_142820
    ctx->pc = 0x2E60ECu;
    SET_GPR_U32(ctx, 31, 0x2E60F4u);
    ctx->pc = 0x2E60F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E60ECu;
            // 0x2e60f0: 0xe460e5d8  swc1        $f0, -0x1A28($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294960600), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (runtime->hasFunction(0x142820u)) {
        auto targetFn = runtime->lookupFunction(0x142820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E60F4u; }
        if (ctx->pc != 0x2E60F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142820_0x142820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E60F4u; }
        if (ctx->pc != 0x2E60F4u) { return; }
    }
    ctx->pc = 0x2E60F4u;
label_2e60f4:
    // 0x2e60f4: 0x0  nop
    ctx->pc = 0x2e60f4u;
    // NOP
label_2e60f8:
    // 0x2e60f8: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x2e60f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2e60fc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2e60fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2e6100: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x2e6100u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2e6104: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x2e6104u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e6108: 0x1460ff7b  bnez        $v1, . + 4 + (-0x85 << 2)
    ctx->pc = 0x2E6108u;
    {
        const bool branch_taken_0x2e6108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E610Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6108u;
            // 0x2e610c: 0x26b50060  addiu       $s5, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6108) {
            ctx->pc = 0x2E5EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e5ef8;
        }
    }
    ctx->pc = 0x2E6110u;
label_2e6110:
    // 0x2e6110: 0x1260039d  beqz        $s3, . + 4 + (0x39D << 2)
    ctx->pc = 0x2E6110u;
    {
        const bool branch_taken_0x2e6110 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6110) {
            ctx->pc = 0x2E6F88u;
            goto label_2e6f88;
        }
    }
    ctx->pc = 0x2E6118u;
    // 0x2e6118: 0xc050a88  jal         func_142A20
    ctx->pc = 0x2E6118u;
    SET_GPR_U32(ctx, 31, 0x2E6120u);
    ctx->pc = 0x142A20u;
    if (runtime->hasFunction(0x142A20u)) {
        auto targetFn = runtime->lookupFunction(0x142A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6120u; }
        if (ctx->pc != 0x2E6120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142A20_0x142a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6120u; }
        if (ctx->pc != 0x2E6120u) { return; }
    }
    ctx->pc = 0x2E6120u;
label_2e6120:
    // 0x2e6120: 0x10000399  b           . + 4 + (0x399 << 2)
    ctx->pc = 0x2E6120u;
    {
        const bool branch_taken_0x2e6120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6120) {
            ctx->pc = 0x2E6F88u;
            goto label_2e6f88;
        }
    }
    ctx->pc = 0x2E6128u;
label_2e6128:
    // 0x2e6128: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2e6128u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e612c: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x2e612cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2e6130: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2e6130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x2e6134: 0x3b02a  slt         $s6, $zero, $v1
    ctx->pc = 0x2e6134u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e6138: 0xc0b36b4  jal         func_2CDAD0
    ctx->pc = 0x2E6138u;
    SET_GPR_U32(ctx, 31, 0x2E6140u);
    ctx->pc = 0x2E613Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6138u;
            // 0x2e613c: 0x2b82a  slt         $s7, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6140u; }
        if (ctx->pc != 0x2E6140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6140u; }
        if (ctx->pc != 0x2E6140u) { return; }
    }
    ctx->pc = 0x2E6140u;
label_2e6140:
    // 0x2e6140: 0xc0b9c64  jal         func_2E7190
    ctx->pc = 0x2E6140u;
    SET_GPR_U32(ctx, 31, 0x2E6148u);
    ctx->pc = 0x2E6144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6140u;
            // 0x2e6144: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6148u; }
        if (ctx->pc != 0x2E6148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6148u; }
        if (ctx->pc != 0x2E6148u) { return; }
    }
    ctx->pc = 0x2E6148u;
label_2e6148:
    // 0x2e6148: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x2E6148u;
    SET_GPR_U32(ctx, 31, 0x2E6150u);
    ctx->pc = 0x2E614Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6148u;
            // 0x2e614c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6150u; }
        if (ctx->pc != 0x2E6150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6150u; }
        if (ctx->pc != 0x2E6150u) { return; }
    }
    ctx->pc = 0x2E6150u;
label_2e6150:
    // 0x2e6150: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e6150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6154: 0xc076984  jal         func_1DA610
    ctx->pc = 0x2E6154u;
    SET_GPR_U32(ctx, 31, 0x2E615Cu);
    ctx->pc = 0x2E6158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6154u;
            // 0x2e6158: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E615Cu; }
        if (ctx->pc != 0x2E615Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E615Cu; }
        if (ctx->pc != 0x2E615Cu) { return; }
    }
    ctx->pc = 0x2E615Cu;
label_2e615c:
    // 0x2e615c: 0xc07697c  jal         func_1DA5F0
    ctx->pc = 0x2E615Cu;
    SET_GPR_U32(ctx, 31, 0x2E6164u);
    ctx->pc = 0x2E6160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E615Cu;
            // 0x2e6160: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6164u; }
        if (ctx->pc != 0x2E6164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6164u; }
        if (ctx->pc != 0x2E6164u) { return; }
    }
    ctx->pc = 0x2E6164u;
label_2e6164:
    // 0x2e6164: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x2e6164u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
    // 0x2e6168: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e6168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e616c: 0xc0b36b4  jal         func_2CDAD0
    ctx->pc = 0x2E616Cu;
    SET_GPR_U32(ctx, 31, 0x2E6174u);
    ctx->pc = 0x2E6170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E616Cu;
            // 0x2e6170: 0x26311d50  addiu       $s1, $s1, 0x1D50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6174u; }
        if (ctx->pc != 0x2E6174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6174u; }
        if (ctx->pc != 0x2E6174u) { return; }
    }
    ctx->pc = 0x2E6174u;
label_2e6174:
    // 0x2e6174: 0xc0b9c64  jal         func_2E7190
    ctx->pc = 0x2E6174u;
    SET_GPR_U32(ctx, 31, 0x2E617Cu);
    ctx->pc = 0x2E6178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6174u;
            // 0x2e6178: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E617Cu; }
        if (ctx->pc != 0x2E617Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E617Cu; }
        if (ctx->pc != 0x2E617Cu) { return; }
    }
    ctx->pc = 0x2E617Cu;
label_2e617c:
    // 0x2e617c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e617cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6180: 0xc0b9c10  jal         func_2E7040
    ctx->pc = 0x2E6180u;
    SET_GPR_U32(ctx, 31, 0x2E6188u);
    ctx->pc = 0x2E6184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6180u;
            // 0x2e6184: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7040u;
    if (runtime->hasFunction(0x2E7040u)) {
        auto targetFn = runtime->lookupFunction(0x2E7040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6188u; }
        if (ctx->pc != 0x2E6188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7040_0x2e7040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6188u; }
        if (ctx->pc != 0x2E6188u) { return; }
    }
    ctx->pc = 0x2E6188u;
label_2e6188:
    // 0x2e6188: 0x1440037f  bnez        $v0, . + 4 + (0x37F << 2)
    ctx->pc = 0x2E6188u;
    {
        const bool branch_taken_0x2e6188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6188) {
            ctx->pc = 0x2E6F88u;
            goto label_2e6f88;
        }
    }
    ctx->pc = 0x2E6190u;
    // 0x2e6190: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x2e6190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2e6194: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e6194u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6198: 0x8e1500f0  lw          $s5, 0xF0($s0)
    ctx->pc = 0x2e6198u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2e619c: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x2e619cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2e61a0: 0x1060009f  beqz        $v1, . + 4 + (0x9F << 2)
    ctx->pc = 0x2E61A0u;
    {
        const bool branch_taken_0x2e61a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E61A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E61A0u;
            // 0x2e61a4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e61a0) {
            ctx->pc = 0x2E6420u;
            goto label_2e6420;
        }
    }
    ctx->pc = 0x2E61A8u;
label_2e61a8:
    // 0x2e61a8: 0x86a30034  lh          $v1, 0x34($s5)
    ctx->pc = 0x2e61a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x2e61ac: 0x18600096  blez        $v1, . + 4 + (0x96 << 2)
    ctx->pc = 0x2E61ACu;
    {
        const bool branch_taken_0x2e61ac = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2e61ac) {
            ctx->pc = 0x2E6408u;
            goto label_2e6408;
        }
    }
    ctx->pc = 0x2E61B4u;
    // 0x2e61b4: 0x16600008  bnez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E61B4u;
    {
        const bool branch_taken_0x2e61b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e61b4) {
            ctx->pc = 0x2E61D8u;
            goto label_2e61d8;
        }
    }
    ctx->pc = 0x2E61BCu;
    // 0x2e61bc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2e61bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e61c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e61c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e61c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e61c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e61c8: 0xc0508b4  jal         func_1422D0
    ctx->pc = 0x2E61C8u;
    SET_GPR_U32(ctx, 31, 0x2E61D0u);
    ctx->pc = 0x2E61CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E61C8u;
            // 0x2e61cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422D0u;
    if (runtime->hasFunction(0x1422D0u)) {
        auto targetFn = runtime->lookupFunction(0x1422D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E61D0u; }
        if (ctx->pc != 0x2E61D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422D0_0x1422d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E61D0u; }
        if (ctx->pc != 0x2E61D0u) { return; }
    }
    ctx->pc = 0x2E61D0u;
label_2e61d0:
    // 0x2e61d0: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x2e61d0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2e61d4: 0x0  nop
    ctx->pc = 0x2e61d4u;
    // NOP
label_2e61d8:
    // 0x2e61d8: 0x8ea70030  lw          $a3, 0x30($s5)
    ctx->pc = 0x2e61d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x2e61dc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2e61dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2e61e0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2e61e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x2e61e4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e61e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e61e8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e61e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e61ec: 0xac87e644  sw          $a3, -0x19BC($a0)
    ctx->pc = 0x2e61ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960708), GPR_U32(ctx, 7));
    // 0x2e61f0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e61f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e61f4: 0xaca7e62c  sw          $a3, -0x19D4($a1)
    ctx->pc = 0x2e61f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960684), GPR_U32(ctx, 7));
    // 0x2e61f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e61f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e61fc: 0x27a50520  addiu       $a1, $sp, 0x520
    ctx->pc = 0x2e61fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    // 0x2e6200: 0x0  nop
    ctx->pc = 0x2e6200u;
    // NOP
    // 0x2e6204: 0xc0b9bf0  jal         func_2E6FC0
    ctx->pc = 0x2E6204u;
    SET_GPR_U32(ctx, 31, 0x2E620Cu);
    ctx->pc = 0x2E6208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6204u;
            // 0x2e6208: 0xac47e5fc  sw          $a3, -0x1A04($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960636), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E6FC0u;
    if (runtime->hasFunction(0x2E6FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2E6FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E620Cu; }
        if (ctx->pc != 0x2E620Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E6FC0_0x2e6fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E620Cu; }
        if (ctx->pc != 0x2E620Cu) { return; }
    }
    ctx->pc = 0x2E620Cu;
label_2e620c:
    // 0x2e620c: 0xc6a1003c  lwc1        $f1, 0x3C($s5)
    ctx->pc = 0x2e620cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6210: 0x27a404a0  addiu       $a0, $sp, 0x4A0
    ctx->pc = 0x2e6210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    // 0x2e6214: 0xc6a00040  lwc1        $f0, 0x40($s5)
    ctx->pc = 0x2e6214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6218: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2e6218u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e621c: 0x46000b07  neg.s       $f12, $f1
    ctx->pc = 0x2e621cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[1]);
    // 0x2e6220: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2E6220u;
    SET_GPR_U32(ctx, 31, 0x2E6228u);
    ctx->pc = 0x2E6224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6220u;
            // 0x2e6224: 0x46000347  neg.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6228u; }
        if (ctx->pc != 0x2E6228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6228u; }
        if (ctx->pc != 0x2E6228u) { return; }
    }
    ctx->pc = 0x2E6228u;
label_2e6228:
    // 0x2e6228: 0xc6a00040  lwc1        $f0, 0x40($s5)
    ctx->pc = 0x2e6228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e622c: 0x27a404b0  addiu       $a0, $sp, 0x4B0
    ctx->pc = 0x2e622cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
    // 0x2e6230: 0xc6ac003c  lwc1        $f12, 0x3C($s5)
    ctx->pc = 0x2e6230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e6234: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2e6234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e6238: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2E6238u;
    SET_GPR_U32(ctx, 31, 0x2E6240u);
    ctx->pc = 0x2E623Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6238u;
            // 0x2e623c: 0x46000347  neg.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6240u; }
        if (ctx->pc != 0x2E6240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6240u; }
        if (ctx->pc != 0x2E6240u) { return; }
    }
    ctx->pc = 0x2E6240u;
label_2e6240:
    // 0x2e6240: 0xc6a0003c  lwc1        $f0, 0x3C($s5)
    ctx->pc = 0x2e6240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6244: 0x27a404c0  addiu       $a0, $sp, 0x4C0
    ctx->pc = 0x2e6244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x2e6248: 0xc6ad0040  lwc1        $f13, 0x40($s5)
    ctx->pc = 0x2e6248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e624c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2e624cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e6250: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2E6250u;
    SET_GPR_U32(ctx, 31, 0x2E6258u);
    ctx->pc = 0x2E6254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6250u;
            // 0x2e6254: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6258u; }
        if (ctx->pc != 0x2E6258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6258u; }
        if (ctx->pc != 0x2E6258u) { return; }
    }
    ctx->pc = 0x2E6258u;
label_2e6258:
    // 0x2e6258: 0xc6ac003c  lwc1        $f12, 0x3C($s5)
    ctx->pc = 0x2e6258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e625c: 0xc6ad0040  lwc1        $f13, 0x40($s5)
    ctx->pc = 0x2e625cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e6260: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2e6260u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e6264: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2E6264u;
    SET_GPR_U32(ctx, 31, 0x2E626Cu);
    ctx->pc = 0x2E6268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6264u;
            // 0x2e6268: 0x27a404d0  addiu       $a0, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E626Cu; }
        if (ctx->pc != 0x2E626Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E626Cu; }
        if (ctx->pc != 0x2E626Cu) { return; }
    }
    ctx->pc = 0x2E626Cu;
label_2e626c:
    // 0x2e626c: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E626Cu;
    {
        const bool branch_taken_0x2e626c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e626c) {
            ctx->pc = 0x2E6280u;
            goto label_2e6280;
        }
    }
    ctx->pc = 0x2E6274u;
    // 0x2e6274: 0x12e00022  beqz        $s7, . + 4 + (0x22 << 2)
    ctx->pc = 0x2E6274u;
    {
        const bool branch_taken_0x2e6274 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6274) {
            ctx->pc = 0x2E6300u;
            goto label_2e6300;
        }
    }
    ctx->pc = 0x2E627Cu;
    // 0x2e627c: 0x0  nop
    ctx->pc = 0x2e627cu;
    // NOP
label_2e6280:
    // 0x2e6280: 0x27a404e0  addiu       $a0, $sp, 0x4E0
    ctx->pc = 0x2e6280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x2e6284: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e6284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6288: 0xc04cd60  jal         func_133580
    ctx->pc = 0x2E6288u;
    SET_GPR_U32(ctx, 31, 0x2E6290u);
    ctx->pc = 0x2E628Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6288u;
            // 0x2e628c: 0x27a60520  addiu       $a2, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6290u; }
        if (ctx->pc != 0x2E6290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6290u; }
        if (ctx->pc != 0x2E6290u) { return; }
    }
    ctx->pc = 0x2E6290u;
label_2e6290:
    // 0x2e6290: 0x27a40520  addiu       $a0, $sp, 0x520
    ctx->pc = 0x2e6290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    // 0x2e6294: 0x27a504e0  addiu       $a1, $sp, 0x4E0
    ctx->pc = 0x2e6294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x2e6298: 0xc04cd60  jal         func_133580
    ctx->pc = 0x2E6298u;
    SET_GPR_U32(ctx, 31, 0x2E62A0u);
    ctx->pc = 0x2E629Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6298u;
            // 0x2e629c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E62A0u; }
        if (ctx->pc != 0x2E62A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E62A0u; }
        if (ctx->pc != 0x2E62A0u) { return; }
    }
    ctx->pc = 0x2E62A0u;
label_2e62a0:
    // 0x2e62a0: 0x8ea60048  lw          $a2, 0x48($s5)
    ctx->pc = 0x2e62a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x2e62a4: 0x27a404e0  addiu       $a0, $sp, 0x4E0
    ctx->pc = 0x2e62a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x2e62a8: 0x8ea7004c  lw          $a3, 0x4C($s5)
    ctx->pc = 0x2e62a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x2e62ac: 0x8ea80050  lw          $t0, 0x50($s5)
    ctx->pc = 0x2e62acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x2e62b0: 0xc04ce30  jal         func_1338C0
    ctx->pc = 0x2E62B0u;
    SET_GPR_U32(ctx, 31, 0x2E62B8u);
    ctx->pc = 0x2E62B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E62B0u;
            // 0x2e62b4: 0x27a50520  addiu       $a1, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1338C0u;
    if (runtime->hasFunction(0x1338C0u)) {
        auto targetFn = runtime->lookupFunction(0x1338C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E62B8u; }
        if (ctx->pc != 0x2E62B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001338C0_0x1338c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E62B8u; }
        if (ctx->pc != 0x2E62B8u) { return; }
    }
    ctx->pc = 0x2E62B8u;
label_2e62b8:
    // 0x2e62b8: 0x27a40460  addiu       $a0, $sp, 0x460
    ctx->pc = 0x2e62b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    // 0x2e62bc: 0x27a504e0  addiu       $a1, $sp, 0x4E0
    ctx->pc = 0x2e62bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x2e62c0: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E62C0u;
    SET_GPR_U32(ctx, 31, 0x2E62C8u);
    ctx->pc = 0x2E62C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E62C0u;
            // 0x2e62c4: 0x27a604a0  addiu       $a2, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E62C8u; }
        if (ctx->pc != 0x2E62C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E62C8u; }
        if (ctx->pc != 0x2E62C8u) { return; }
    }
    ctx->pc = 0x2E62C8u;
label_2e62c8:
    // 0x2e62c8: 0x27a40470  addiu       $a0, $sp, 0x470
    ctx->pc = 0x2e62c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
    // 0x2e62cc: 0x27a504e0  addiu       $a1, $sp, 0x4E0
    ctx->pc = 0x2e62ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x2e62d0: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E62D0u;
    SET_GPR_U32(ctx, 31, 0x2E62D8u);
    ctx->pc = 0x2E62D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E62D0u;
            // 0x2e62d4: 0x27a604b0  addiu       $a2, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E62D8u; }
        if (ctx->pc != 0x2E62D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E62D8u; }
        if (ctx->pc != 0x2E62D8u) { return; }
    }
    ctx->pc = 0x2E62D8u;
label_2e62d8:
    // 0x2e62d8: 0x27a40480  addiu       $a0, $sp, 0x480
    ctx->pc = 0x2e62d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    // 0x2e62dc: 0x27a504e0  addiu       $a1, $sp, 0x4E0
    ctx->pc = 0x2e62dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x2e62e0: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E62E0u;
    SET_GPR_U32(ctx, 31, 0x2E62E8u);
    ctx->pc = 0x2E62E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E62E0u;
            // 0x2e62e4: 0x27a604c0  addiu       $a2, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E62E8u; }
        if (ctx->pc != 0x2E62E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E62E8u; }
        if (ctx->pc != 0x2E62E8u) { return; }
    }
    ctx->pc = 0x2E62E8u;
label_2e62e8:
    // 0x2e62e8: 0x27a40490  addiu       $a0, $sp, 0x490
    ctx->pc = 0x2e62e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    // 0x2e62ec: 0x27a504e0  addiu       $a1, $sp, 0x4E0
    ctx->pc = 0x2e62ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x2e62f0: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E62F0u;
    SET_GPR_U32(ctx, 31, 0x2E62F8u);
    ctx->pc = 0x2E62F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E62F0u;
            // 0x2e62f4: 0x27a604d0  addiu       $a2, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E62F8u; }
        if (ctx->pc != 0x2E62F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E62F8u; }
        if (ctx->pc != 0x2E62F8u) { return; }
    }
    ctx->pc = 0x2E62F8u;
label_2e62f8:
    // 0x2e62f8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2E62F8u;
    {
        const bool branch_taken_0x2e62f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e62f8) {
            ctx->pc = 0x2E6360u;
            goto label_2e6360;
        }
    }
    ctx->pc = 0x2E6300u;
label_2e6300:
    // 0x2e6300: 0x27a404e0  addiu       $a0, $sp, 0x4E0
    ctx->pc = 0x2e6300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x2e6304: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e6304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6308: 0xc04cd60  jal         func_133580
    ctx->pc = 0x2E6308u;
    SET_GPR_U32(ctx, 31, 0x2E6310u);
    ctx->pc = 0x2E630Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6308u;
            // 0x2e630c: 0x27a60520  addiu       $a2, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6310u; }
        if (ctx->pc != 0x2E6310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6310u; }
        if (ctx->pc != 0x2E6310u) { return; }
    }
    ctx->pc = 0x2E6310u;
label_2e6310:
    // 0x2e6310: 0x27a40520  addiu       $a0, $sp, 0x520
    ctx->pc = 0x2e6310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    // 0x2e6314: 0x27a504e0  addiu       $a1, $sp, 0x4E0
    ctx->pc = 0x2e6314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x2e6318: 0xc04cd60  jal         func_133580
    ctx->pc = 0x2E6318u;
    SET_GPR_U32(ctx, 31, 0x2E6320u);
    ctx->pc = 0x2E631Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6318u;
            // 0x2e631c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6320u; }
        if (ctx->pc != 0x2E6320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6320u; }
        if (ctx->pc != 0x2E6320u) { return; }
    }
    ctx->pc = 0x2E6320u;
label_2e6320:
    // 0x2e6320: 0x27a40460  addiu       $a0, $sp, 0x460
    ctx->pc = 0x2e6320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    // 0x2e6324: 0x27a50520  addiu       $a1, $sp, 0x520
    ctx->pc = 0x2e6324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    // 0x2e6328: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E6328u;
    SET_GPR_U32(ctx, 31, 0x2E6330u);
    ctx->pc = 0x2E632Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6328u;
            // 0x2e632c: 0x27a604a0  addiu       $a2, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6330u; }
        if (ctx->pc != 0x2E6330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6330u; }
        if (ctx->pc != 0x2E6330u) { return; }
    }
    ctx->pc = 0x2E6330u;
label_2e6330:
    // 0x2e6330: 0x27a40470  addiu       $a0, $sp, 0x470
    ctx->pc = 0x2e6330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
    // 0x2e6334: 0x27a50520  addiu       $a1, $sp, 0x520
    ctx->pc = 0x2e6334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    // 0x2e6338: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E6338u;
    SET_GPR_U32(ctx, 31, 0x2E6340u);
    ctx->pc = 0x2E633Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6338u;
            // 0x2e633c: 0x27a604b0  addiu       $a2, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6340u; }
        if (ctx->pc != 0x2E6340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6340u; }
        if (ctx->pc != 0x2E6340u) { return; }
    }
    ctx->pc = 0x2E6340u;
label_2e6340:
    // 0x2e6340: 0x27a40480  addiu       $a0, $sp, 0x480
    ctx->pc = 0x2e6340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    // 0x2e6344: 0x27a50520  addiu       $a1, $sp, 0x520
    ctx->pc = 0x2e6344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    // 0x2e6348: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E6348u;
    SET_GPR_U32(ctx, 31, 0x2E6350u);
    ctx->pc = 0x2E634Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6348u;
            // 0x2e634c: 0x27a604c0  addiu       $a2, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6350u; }
        if (ctx->pc != 0x2E6350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6350u; }
        if (ctx->pc != 0x2E6350u) { return; }
    }
    ctx->pc = 0x2E6350u;
label_2e6350:
    // 0x2e6350: 0x27a40490  addiu       $a0, $sp, 0x490
    ctx->pc = 0x2e6350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    // 0x2e6354: 0x27a50520  addiu       $a1, $sp, 0x520
    ctx->pc = 0x2e6354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    // 0x2e6358: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E6358u;
    SET_GPR_U32(ctx, 31, 0x2E6360u);
    ctx->pc = 0x2E635Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6358u;
            // 0x2e635c: 0x27a604d0  addiu       $a2, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6360u; }
        if (ctx->pc != 0x2E6360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6360u; }
        if (ctx->pc != 0x2E6360u) { return; }
    }
    ctx->pc = 0x2E6360u;
label_2e6360:
    // 0x2e6360: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2e6360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x2e6364: 0xc7a00464  lwc1        $f0, 0x464($sp)
    ctx->pc = 0x2e6364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6368: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e6368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e636c: 0xc7a20460  lwc1        $f2, 0x460($sp)
    ctx->pc = 0x2e636cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6370: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e6370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e6374: 0xc7a10468  lwc1        $f1, 0x468($sp)
    ctx->pc = 0x2e6374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6378: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e6378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e637c: 0xe460e5f4  swc1        $f0, -0x1A0C($v1)
    ctx->pc = 0x2e637cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294960628), bits); }
    // 0x2e6380: 0xc7a00470  lwc1        $f0, 0x470($sp)
    ctx->pc = 0x2e6380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6384: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e6384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e6388: 0xe442e5f0  swc1        $f2, -0x1A10($v0)
    ctx->pc = 0x2e6388u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294960624), bits); }
    // 0x2e638c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e638cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e6390: 0xe460e608  swc1        $f0, -0x19F8($v1)
    ctx->pc = 0x2e6390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294960648), bits); }
    // 0x2e6394: 0xc7a00478  lwc1        $f0, 0x478($sp)
    ctx->pc = 0x2e6394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6398: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e6398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e639c: 0xe441e5f8  swc1        $f1, -0x1A08($v0)
    ctx->pc = 0x2e639cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294960632), bits); }
    // 0x2e63a0: 0xc7a20474  lwc1        $f2, 0x474($sp)
    ctx->pc = 0x2e63a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e63a4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e63a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e63a8: 0xe460e610  swc1        $f0, -0x19F0($v1)
    ctx->pc = 0x2e63a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294960656), bits); }
    // 0x2e63ac: 0xc7a00484  lwc1        $f0, 0x484($sp)
    ctx->pc = 0x2e63acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e63b0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e63b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e63b4: 0xc7a10480  lwc1        $f1, 0x480($sp)
    ctx->pc = 0x2e63b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e63b8: 0xe442e60c  swc1        $f2, -0x19F4($v0)
    ctx->pc = 0x2e63b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294960652), bits); }
    // 0x2e63bc: 0xe460e624  swc1        $f0, -0x19DC($v1)
    ctx->pc = 0x2e63bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294960676), bits); }
    // 0x2e63c0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e63c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e63c4: 0xe441e620  swc1        $f1, -0x19E0($v0)
    ctx->pc = 0x2e63c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294960672), bits); }
    // 0x2e63c8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e63c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e63cc: 0xc7a00490  lwc1        $f0, 0x490($sp)
    ctx->pc = 0x2e63ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e63d0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e63d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e63d4: 0xc7a20488  lwc1        $f2, 0x488($sp)
    ctx->pc = 0x2e63d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e63d8: 0xc7a10494  lwc1        $f1, 0x494($sp)
    ctx->pc = 0x2e63d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e63dc: 0xe460e638  swc1        $f0, -0x19C8($v1)
    ctx->pc = 0x2e63dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294960696), bits); }
    // 0x2e63e0: 0xe442e628  swc1        $f2, -0x19D8($v0)
    ctx->pc = 0x2e63e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294960680), bits); }
    // 0x2e63e4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e63e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e63e8: 0xe441e63c  swc1        $f1, -0x19C4($v0)
    ctx->pc = 0x2e63e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294960700), bits); }
    // 0x2e63ec: 0xc7a00498  lwc1        $f0, 0x498($sp)
    ctx->pc = 0x2e63ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e63f0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e63f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e63f4: 0xe440e640  swc1        $f0, -0x19C0($v0)
    ctx->pc = 0x2e63f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294960704), bits); }
    // 0x2e63f8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e63f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e63fc: 0x8c46e650  lw          $a2, -0x19B0($v0)
    ctx->pc = 0x2e63fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960720)));
    // 0x2e6400: 0xc050a08  jal         func_142820
    ctx->pc = 0x2E6400u;
    SET_GPR_U32(ctx, 31, 0x2E6408u);
    ctx->pc = 0x2E6404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6400u;
            // 0x2e6404: 0x24a5e5f0  addiu       $a1, $a1, -0x1A10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (runtime->hasFunction(0x142820u)) {
        auto targetFn = runtime->lookupFunction(0x142820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6408u; }
        if (ctx->pc != 0x2E6408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142820_0x142820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6408u; }
        if (ctx->pc != 0x2E6408u) { return; }
    }
    ctx->pc = 0x2E6408u;
label_2e6408:
    // 0x2e6408: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x2e6408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2e640c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2e640cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2e6410: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x2e6410u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2e6414: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x2e6414u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e6418: 0x1460ff63  bnez        $v1, . + 4 + (-0x9D << 2)
    ctx->pc = 0x2E6418u;
    {
        const bool branch_taken_0x2e6418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E641Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6418u;
            // 0x2e641c: 0x26b50060  addiu       $s5, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6418) {
            ctx->pc = 0x2E61A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e61a8;
        }
    }
    ctx->pc = 0x2E6420u;
label_2e6420:
    // 0x2e6420: 0x126002d9  beqz        $s3, . + 4 + (0x2D9 << 2)
    ctx->pc = 0x2E6420u;
    {
        const bool branch_taken_0x2e6420 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6420) {
            ctx->pc = 0x2E6F88u;
            goto label_2e6f88;
        }
    }
    ctx->pc = 0x2E6428u;
    // 0x2e6428: 0xc050a88  jal         func_142A20
    ctx->pc = 0x2E6428u;
    SET_GPR_U32(ctx, 31, 0x2E6430u);
    ctx->pc = 0x142A20u;
    if (runtime->hasFunction(0x142A20u)) {
        auto targetFn = runtime->lookupFunction(0x142A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6430u; }
        if (ctx->pc != 0x2E6430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142A20_0x142a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6430u; }
        if (ctx->pc != 0x2E6430u) { return; }
    }
    ctx->pc = 0x2E6430u;
label_2e6430:
    // 0x2e6430: 0x100002d5  b           . + 4 + (0x2D5 << 2)
    ctx->pc = 0x2E6430u;
    {
        const bool branch_taken_0x2e6430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6430) {
            ctx->pc = 0x2E6F88u;
            goto label_2e6f88;
        }
    }
    ctx->pc = 0x2E6438u;
label_2e6438:
    // 0x2e6438: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x2e6438u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e643c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e643cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6440: 0xc0b96f0  jal         func_2E5BC0
    ctx->pc = 0x2E6440u;
    SET_GPR_U32(ctx, 31, 0x2E6448u);
    ctx->pc = 0x2E6444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6440u;
            // 0x2e6444: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5BC0u;
    if (runtime->hasFunction(0x2E5BC0u)) {
        auto targetFn = runtime->lookupFunction(0x2E5BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6448u; }
        if (ctx->pc != 0x2E6448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5BC0_0x2e5bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6448u; }
        if (ctx->pc != 0x2E6448u) { return; }
    }
    ctx->pc = 0x2E6448u;
label_2e6448:
    // 0x2e6448: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2e6448u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e644c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e644cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6450: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x2e6450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2e6454: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2e6454u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6458: 0xc0b96f0  jal         func_2E5BC0
    ctx->pc = 0x2E6458u;
    SET_GPR_U32(ctx, 31, 0x2E6460u);
    ctx->pc = 0x2E645Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6458u;
            // 0x2e645c: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5BC0u;
    if (runtime->hasFunction(0x2E5BC0u)) {
        auto targetFn = runtime->lookupFunction(0x2E5BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6460u; }
        if (ctx->pc != 0x2E6460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5BC0_0x2e5bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6460u; }
        if (ctx->pc != 0x2E6460u) { return; }
    }
    ctx->pc = 0x2E6460u;
label_2e6460:
    // 0x2e6460: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x2e6460u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e6464: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2e6464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2e6468: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E6468u;
    {
        const bool branch_taken_0x2e6468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6468) {
            ctx->pc = 0x2E6484u;
            goto label_2e6484;
        }
    }
    ctx->pc = 0x2E6470u;
    // 0x2e6470: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x2e6470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2e6474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6478: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2e6478u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e647c: 0xc0b96f0  jal         func_2E5BC0
    ctx->pc = 0x2E647Cu;
    SET_GPR_U32(ctx, 31, 0x2E6484u);
    ctx->pc = 0x2E6480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E647Cu;
            // 0x2e6480: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5BC0u;
    if (runtime->hasFunction(0x2E5BC0u)) {
        auto targetFn = runtime->lookupFunction(0x2E5BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6484u; }
        if (ctx->pc != 0x2E6484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5BC0_0x2e5bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6484u; }
        if (ctx->pc != 0x2E6484u) { return; }
    }
    ctx->pc = 0x2E6484u;
label_2e6484:
    // 0x2e6484: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x2E6484u;
    SET_GPR_U32(ctx, 31, 0x2E648Cu);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E648Cu; }
        if (ctx->pc != 0x2E648Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E648Cu; }
        if (ctx->pc != 0x2E648Cu) { return; }
    }
    ctx->pc = 0x2E648Cu;
label_2e648c:
    // 0x2e648c: 0xc0b36b4  jal         func_2CDAD0
    ctx->pc = 0x2E648Cu;
    SET_GPR_U32(ctx, 31, 0x2E6494u);
    ctx->pc = 0x2E6490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E648Cu;
            // 0x2e6490: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6494u; }
        if (ctx->pc != 0x2E6494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6494u; }
        if (ctx->pc != 0x2E6494u) { return; }
    }
    ctx->pc = 0x2E6494u;
label_2e6494:
    // 0x2e6494: 0xc0b9c64  jal         func_2E7190
    ctx->pc = 0x2E6494u;
    SET_GPR_U32(ctx, 31, 0x2E649Cu);
    ctx->pc = 0x2E6498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6494u;
            // 0x2e6498: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E649Cu; }
        if (ctx->pc != 0x2E649Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E649Cu; }
        if (ctx->pc != 0x2E649Cu) { return; }
    }
    ctx->pc = 0x2E649Cu;
label_2e649c:
    // 0x2e649c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e649cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e64a0: 0xc076984  jal         func_1DA610
    ctx->pc = 0x2E64A0u;
    SET_GPR_U32(ctx, 31, 0x2E64A8u);
    ctx->pc = 0x2E64A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E64A0u;
            // 0x2e64a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E64A8u; }
        if (ctx->pc != 0x2E64A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E64A8u; }
        if (ctx->pc != 0x2E64A8u) { return; }
    }
    ctx->pc = 0x2E64A8u;
label_2e64a8:
    // 0x2e64a8: 0xc07697c  jal         func_1DA5F0
    ctx->pc = 0x2E64A8u;
    SET_GPR_U32(ctx, 31, 0x2E64B0u);
    ctx->pc = 0x2E64ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E64A8u;
            // 0x2e64ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E64B0u; }
        if (ctx->pc != 0x2E64B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E64B0u; }
        if (ctx->pc != 0x2E64B0u) { return; }
    }
    ctx->pc = 0x2E64B0u;
label_2e64b0:
    // 0x2e64b0: 0xc0b36b4  jal         func_2CDAD0
    ctx->pc = 0x2E64B0u;
    SET_GPR_U32(ctx, 31, 0x2E64B8u);
    ctx->pc = 0x2E64B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E64B0u;
            // 0x2e64b4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E64B8u; }
        if (ctx->pc != 0x2E64B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E64B8u; }
        if (ctx->pc != 0x2E64B8u) { return; }
    }
    ctx->pc = 0x2E64B8u;
label_2e64b8:
    // 0x2e64b8: 0xc0b9c64  jal         func_2E7190
    ctx->pc = 0x2E64B8u;
    SET_GPR_U32(ctx, 31, 0x2E64C0u);
    ctx->pc = 0x2E64BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E64B8u;
            // 0x2e64bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E64C0u; }
        if (ctx->pc != 0x2E64C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E64C0u; }
        if (ctx->pc != 0x2E64C0u) { return; }
    }
    ctx->pc = 0x2E64C0u;
label_2e64c0:
    // 0x2e64c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e64c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e64c4: 0xc0b9c10  jal         func_2E7040
    ctx->pc = 0x2E64C4u;
    SET_GPR_U32(ctx, 31, 0x2E64CCu);
    ctx->pc = 0x2E64C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E64C4u;
            // 0x2e64c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7040u;
    if (runtime->hasFunction(0x2E7040u)) {
        auto targetFn = runtime->lookupFunction(0x2E7040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E64CCu; }
        if (ctx->pc != 0x2E64CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7040_0x2e7040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E64CCu; }
        if (ctx->pc != 0x2E64CCu) { return; }
    }
    ctx->pc = 0x2E64CCu;
label_2e64cc:
    // 0x2e64cc: 0x144002ae  bnez        $v0, . + 4 + (0x2AE << 2)
    ctx->pc = 0x2E64CCu;
    {
        const bool branch_taken_0x2e64cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e64cc) {
            ctx->pc = 0x2E6F88u;
            goto label_2e6f88;
        }
    }
    ctx->pc = 0x2E64D4u;
    // 0x2e64d4: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x2e64d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2e64d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e64d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e64dc: 0x8e1500f0  lw          $s5, 0xF0($s0)
    ctx->pc = 0x2e64dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2e64e0: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x2e64e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2e64e4: 0x10600094  beqz        $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x2E64E4u;
    {
        const bool branch_taken_0x2e64e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E64E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E64E4u;
            // 0x2e64e8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e64e4) {
            ctx->pc = 0x2E6738u;
            goto label_2e6738;
        }
    }
    ctx->pc = 0x2E64ECu;
label_2e64ec:
    // 0x2e64ec: 0x86a30034  lh          $v1, 0x34($s5)
    ctx->pc = 0x2e64ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x2e64f0: 0x1860008b  blez        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x2E64F0u;
    {
        const bool branch_taken_0x2e64f0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2e64f0) {
            ctx->pc = 0x2E6720u;
            goto label_2e6720;
        }
    }
    ctx->pc = 0x2E64F8u;
    // 0x2e64f8: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E64F8u;
    {
        const bool branch_taken_0x2e64f8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e64f8) {
            ctx->pc = 0x2E6518u;
            goto label_2e6518;
        }
    }
    ctx->pc = 0x2E6500u;
    // 0x2e6500: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2e6500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e6504: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e6504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6508: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e6508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e650c: 0xc0508b4  jal         func_1422D0
    ctx->pc = 0x2E650Cu;
    SET_GPR_U32(ctx, 31, 0x2E6514u);
    ctx->pc = 0x2E6510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E650Cu;
            // 0x2e6510: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422D0u;
    if (runtime->hasFunction(0x1422D0u)) {
        auto targetFn = runtime->lookupFunction(0x1422D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6514u; }
        if (ctx->pc != 0x2E6514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422D0_0x1422d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6514u; }
        if (ctx->pc != 0x2E6514u) { return; }
    }
    ctx->pc = 0x2E6514u;
label_2e6514:
    // 0x2e6514: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x2e6514u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2e6518:
    // 0x2e6518: 0x8ea70030  lw          $a3, 0x30($s5)
    ctx->pc = 0x2e6518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x2e651c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2e651cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2e6520: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2e6520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x2e6524: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e6524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e6528: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e6528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e652c: 0xac87e6b4  sw          $a3, -0x194C($a0)
    ctx->pc = 0x2e652cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960820), GPR_U32(ctx, 7));
    // 0x2e6530: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e6530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6534: 0xaca7e69c  sw          $a3, -0x1964($a1)
    ctx->pc = 0x2e6534u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960796), GPR_U32(ctx, 7));
    // 0x2e6538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e653c: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x2e653cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    // 0x2e6540: 0x0  nop
    ctx->pc = 0x2e6540u;
    // NOP
    // 0x2e6544: 0xc0b9bf0  jal         func_2E6FC0
    ctx->pc = 0x2E6544u;
    SET_GPR_U32(ctx, 31, 0x2E654Cu);
    ctx->pc = 0x2E6548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6544u;
            // 0x2e6548: 0xac47e66c  sw          $a3, -0x1994($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960748), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E6FC0u;
    if (runtime->hasFunction(0x2E6FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2E6FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E654Cu; }
        if (ctx->pc != 0x2E654Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E6FC0_0x2e6fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E654Cu; }
        if (ctx->pc != 0x2E654Cu) { return; }
    }
    ctx->pc = 0x2E654Cu;
label_2e654c:
    // 0x2e654c: 0xc6a3003c  lwc1        $f3, 0x3C($s5)
    ctx->pc = 0x2e654cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e6550: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e6550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e6554: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x2e6554u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x2e6558: 0xe7a003c0  swc1        $f0, 0x3C0($sp)
    ctx->pc = 0x2e6558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 960), bits); }
    // 0x2e655c: 0xe7a003a0  swc1        $f0, 0x3A0($sp)
    ctx->pc = 0x2e655cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 928), bits); }
    // 0x2e6560: 0xc6a20040  lwc1        $f2, 0x40($s5)
    ctx->pc = 0x2e6560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6564: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x2e6564u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x2e6568: 0xe7a003b4  swc1        $f0, 0x3B4($sp)
    ctx->pc = 0x2e6568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 948), bits); }
    // 0x2e656c: 0xe7a003a4  swc1        $f0, 0x3A4($sp)
    ctx->pc = 0x2e656cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 932), bits); }
    // 0x2e6570: 0xc6a10044  lwc1        $f1, 0x44($s5)
    ctx->pc = 0x2e6570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6574: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x2e6574u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x2e6578: 0xafa203ac  sw          $v0, 0x3AC($sp)
    ctx->pc = 0x2e6578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 940), GPR_U32(ctx, 2));
    // 0x2e657c: 0xe7a303d0  swc1        $f3, 0x3D0($sp)
    ctx->pc = 0x2e657cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 976), bits); }
    // 0x2e6580: 0xafa203bc  sw          $v0, 0x3BC($sp)
    ctx->pc = 0x2e6580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 956), GPR_U32(ctx, 2));
    // 0x2e6584: 0xe7a303b0  swc1        $f3, 0x3B0($sp)
    ctx->pc = 0x2e6584u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 944), bits); }
    // 0x2e6588: 0xafa203cc  sw          $v0, 0x3CC($sp)
    ctx->pc = 0x2e6588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 972), GPR_U32(ctx, 2));
    // 0x2e658c: 0xe7a003b8  swc1        $f0, 0x3B8($sp)
    ctx->pc = 0x2e658cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 952), bits); }
    // 0x2e6590: 0xafa203dc  sw          $v0, 0x3DC($sp)
    ctx->pc = 0x2e6590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 988), GPR_U32(ctx, 2));
    // 0x2e6594: 0xe7a003a8  swc1        $f0, 0x3A8($sp)
    ctx->pc = 0x2e6594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 936), bits); }
    // 0x2e6598: 0xe7a203d4  swc1        $f2, 0x3D4($sp)
    ctx->pc = 0x2e6598u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 980), bits); }
    // 0x2e659c: 0xe7a203c4  swc1        $f2, 0x3C4($sp)
    ctx->pc = 0x2e659cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 964), bits); }
    // 0x2e65a0: 0xe7a103d8  swc1        $f1, 0x3D8($sp)
    ctx->pc = 0x2e65a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 984), bits); }
    // 0x2e65a4: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E65A4u;
    {
        const bool branch_taken_0x2e65a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E65A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E65A4u;
            // 0x2e65a8: 0xe7a103c8  swc1        $f1, 0x3C8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 968), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e65a4) {
            ctx->pc = 0x2E65B8u;
            goto label_2e65b8;
        }
    }
    ctx->pc = 0x2E65ACu;
    // 0x2e65ac: 0x12c0001e  beqz        $s6, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E65ACu;
    {
        const bool branch_taken_0x2e65ac = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e65ac) {
            ctx->pc = 0x2E6628u;
            goto label_2e6628;
        }
    }
    ctx->pc = 0x2E65B4u;
    // 0x2e65b4: 0x0  nop
    ctx->pc = 0x2e65b4u;
    // NOP
label_2e65b8:
    // 0x2e65b8: 0x8ea60048  lw          $a2, 0x48($s5)
    ctx->pc = 0x2e65b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x2e65bc: 0x8ea7004c  lw          $a3, 0x4C($s5)
    ctx->pc = 0x2e65bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x2e65c0: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x2e65c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x2e65c4: 0x8ea80050  lw          $t0, 0x50($s5)
    ctx->pc = 0x2e65c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x2e65c8: 0xc04ce30  jal         func_1338C0
    ctx->pc = 0x2E65C8u;
    SET_GPR_U32(ctx, 31, 0x2E65D0u);
    ctx->pc = 0x2E65CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E65C8u;
            // 0x2e65cc: 0x27a50420  addiu       $a1, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1338C0u;
    if (runtime->hasFunction(0x1338C0u)) {
        auto targetFn = runtime->lookupFunction(0x1338C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E65D0u; }
        if (ctx->pc != 0x2E65D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001338C0_0x1338c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E65D0u; }
        if (ctx->pc != 0x2E65D0u) { return; }
    }
    ctx->pc = 0x2E65D0u;
label_2e65d0:
    // 0x2e65d0: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x2e65d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    // 0x2e65d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e65d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e65d8: 0xc04cd60  jal         func_133580
    ctx->pc = 0x2E65D8u;
    SET_GPR_U32(ctx, 31, 0x2E65E0u);
    ctx->pc = 0x2E65DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E65D8u;
            // 0x2e65dc: 0x27a603e0  addiu       $a2, $sp, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E65E0u; }
        if (ctx->pc != 0x2E65E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E65E0u; }
        if (ctx->pc != 0x2E65E0u) { return; }
    }
    ctx->pc = 0x2E65E0u;
label_2e65e0:
    // 0x2e65e0: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x2e65e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x2e65e4: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x2e65e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    // 0x2e65e8: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E65E8u;
    SET_GPR_U32(ctx, 31, 0x2E65F0u);
    ctx->pc = 0x2E65ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E65E8u;
            // 0x2e65ec: 0x27a603a0  addiu       $a2, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E65F0u; }
        if (ctx->pc != 0x2E65F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E65F0u; }
        if (ctx->pc != 0x2E65F0u) { return; }
    }
    ctx->pc = 0x2E65F0u;
label_2e65f0:
    // 0x2e65f0: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x2e65f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x2e65f4: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x2e65f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    // 0x2e65f8: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E65F8u;
    SET_GPR_U32(ctx, 31, 0x2E6600u);
    ctx->pc = 0x2E65FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E65F8u;
            // 0x2e65fc: 0x27a603b0  addiu       $a2, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6600u; }
        if (ctx->pc != 0x2E6600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6600u; }
        if (ctx->pc != 0x2E6600u) { return; }
    }
    ctx->pc = 0x2E6600u;
label_2e6600:
    // 0x2e6600: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x2e6600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x2e6604: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x2e6604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    // 0x2e6608: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E6608u;
    SET_GPR_U32(ctx, 31, 0x2E6610u);
    ctx->pc = 0x2E660Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6608u;
            // 0x2e660c: 0x27a603c0  addiu       $a2, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6610u; }
        if (ctx->pc != 0x2E6610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6610u; }
        if (ctx->pc != 0x2E6610u) { return; }
    }
    ctx->pc = 0x2E6610u;
label_2e6610:
    // 0x2e6610: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x2e6610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x2e6614: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x2e6614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    // 0x2e6618: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E6618u;
    SET_GPR_U32(ctx, 31, 0x2E6620u);
    ctx->pc = 0x2E661Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6618u;
            // 0x2e661c: 0x27a603d0  addiu       $a2, $sp, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6620u; }
        if (ctx->pc != 0x2E6620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6620u; }
        if (ctx->pc != 0x2E6620u) { return; }
    }
    ctx->pc = 0x2E6620u;
label_2e6620:
    // 0x2e6620: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E6620u;
    {
        const bool branch_taken_0x2e6620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6620) {
            ctx->pc = 0x2E6678u;
            goto label_2e6678;
        }
    }
    ctx->pc = 0x2E6628u;
label_2e6628:
    // 0x2e6628: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x2e6628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x2e662c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e662cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6630: 0xc04cd60  jal         func_133580
    ctx->pc = 0x2E6630u;
    SET_GPR_U32(ctx, 31, 0x2E6638u);
    ctx->pc = 0x2E6634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6630u;
            // 0x2e6634: 0x27a60420  addiu       $a2, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6638u; }
        if (ctx->pc != 0x2E6638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6638u; }
        if (ctx->pc != 0x2E6638u) { return; }
    }
    ctx->pc = 0x2E6638u;
label_2e6638:
    // 0x2e6638: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x2e6638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x2e663c: 0x27a503e0  addiu       $a1, $sp, 0x3E0
    ctx->pc = 0x2e663cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x2e6640: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E6640u;
    SET_GPR_U32(ctx, 31, 0x2E6648u);
    ctx->pc = 0x2E6644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6640u;
            // 0x2e6644: 0x27a603a0  addiu       $a2, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6648u; }
        if (ctx->pc != 0x2E6648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6648u; }
        if (ctx->pc != 0x2E6648u) { return; }
    }
    ctx->pc = 0x2E6648u;
label_2e6648:
    // 0x2e6648: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x2e6648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x2e664c: 0x27a503e0  addiu       $a1, $sp, 0x3E0
    ctx->pc = 0x2e664cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x2e6650: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E6650u;
    SET_GPR_U32(ctx, 31, 0x2E6658u);
    ctx->pc = 0x2E6654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6650u;
            // 0x2e6654: 0x27a603b0  addiu       $a2, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6658u; }
        if (ctx->pc != 0x2E6658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6658u; }
        if (ctx->pc != 0x2E6658u) { return; }
    }
    ctx->pc = 0x2E6658u;
label_2e6658:
    // 0x2e6658: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x2e6658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x2e665c: 0x27a503e0  addiu       $a1, $sp, 0x3E0
    ctx->pc = 0x2e665cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x2e6660: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E6660u;
    SET_GPR_U32(ctx, 31, 0x2E6668u);
    ctx->pc = 0x2E6664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6660u;
            // 0x2e6664: 0x27a603c0  addiu       $a2, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6668u; }
        if (ctx->pc != 0x2E6668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6668u; }
        if (ctx->pc != 0x2E6668u) { return; }
    }
    ctx->pc = 0x2E6668u;
label_2e6668:
    // 0x2e6668: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x2e6668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x2e666c: 0x27a503e0  addiu       $a1, $sp, 0x3E0
    ctx->pc = 0x2e666cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x2e6670: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E6670u;
    SET_GPR_U32(ctx, 31, 0x2E6678u);
    ctx->pc = 0x2E6674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6670u;
            // 0x2e6674: 0x27a603d0  addiu       $a2, $sp, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6678u; }
        if (ctx->pc != 0x2E6678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6678u; }
        if (ctx->pc != 0x2E6678u) { return; }
    }
    ctx->pc = 0x2E6678u;
label_2e6678:
    // 0x2e6678: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2e6678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x2e667c: 0xc7a00364  lwc1        $f0, 0x364($sp)
    ctx->pc = 0x2e667cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6680: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e6680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e6684: 0xc7a20360  lwc1        $f2, 0x360($sp)
    ctx->pc = 0x2e6684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6688: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e6688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e668c: 0xc7a10368  lwc1        $f1, 0x368($sp)
    ctx->pc = 0x2e668cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6690: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e6690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6694: 0xe460e664  swc1        $f0, -0x199C($v1)
    ctx->pc = 0x2e6694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294960740), bits); }
    // 0x2e6698: 0x24a5e660  addiu       $a1, $a1, -0x19A0
    ctx->pc = 0x2e6698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960736));
    // 0x2e669c: 0xc7a00370  lwc1        $f0, 0x370($sp)
    ctx->pc = 0x2e669cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e66a0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e66a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e66a4: 0xe442e660  swc1        $f2, -0x19A0($v0)
    ctx->pc = 0x2e66a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294960736), bits); }
    // 0x2e66a8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2e66a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e66ac: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e66acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e66b0: 0xe460e678  swc1        $f0, -0x1988($v1)
    ctx->pc = 0x2e66b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294960760), bits); }
    // 0x2e66b4: 0xc7a00378  lwc1        $f0, 0x378($sp)
    ctx->pc = 0x2e66b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e66b8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e66b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e66bc: 0xe441e668  swc1        $f1, -0x1998($v0)
    ctx->pc = 0x2e66bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294960744), bits); }
    // 0x2e66c0: 0xc7a20374  lwc1        $f2, 0x374($sp)
    ctx->pc = 0x2e66c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e66c4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e66c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e66c8: 0xe460e680  swc1        $f0, -0x1980($v1)
    ctx->pc = 0x2e66c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294960768), bits); }
    // 0x2e66cc: 0xc7a00384  lwc1        $f0, 0x384($sp)
    ctx->pc = 0x2e66ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e66d0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e66d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e66d4: 0xc7a10380  lwc1        $f1, 0x380($sp)
    ctx->pc = 0x2e66d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e66d8: 0xe442e67c  swc1        $f2, -0x1984($v0)
    ctx->pc = 0x2e66d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294960764), bits); }
    // 0x2e66dc: 0xe460e694  swc1        $f0, -0x196C($v1)
    ctx->pc = 0x2e66dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294960788), bits); }
    // 0x2e66e0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e66e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e66e4: 0xe441e690  swc1        $f1, -0x1970($v0)
    ctx->pc = 0x2e66e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294960784), bits); }
    // 0x2e66e8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e66e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e66ec: 0xc7a00390  lwc1        $f0, 0x390($sp)
    ctx->pc = 0x2e66ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e66f0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e66f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e66f4: 0xc7a20388  lwc1        $f2, 0x388($sp)
    ctx->pc = 0x2e66f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e66f8: 0xc7a10394  lwc1        $f1, 0x394($sp)
    ctx->pc = 0x2e66f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e66fc: 0xe460e6a8  swc1        $f0, -0x1958($v1)
    ctx->pc = 0x2e66fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294960808), bits); }
    // 0x2e6700: 0xe442e698  swc1        $f2, -0x1968($v0)
    ctx->pc = 0x2e6700u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294960792), bits); }
    // 0x2e6704: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e6704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e6708: 0xe441e6ac  swc1        $f1, -0x1954($v0)
    ctx->pc = 0x2e6708u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294960812), bits); }
    // 0x2e670c: 0xc7a00398  lwc1        $f0, 0x398($sp)
    ctx->pc = 0x2e670cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6710: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e6710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e6714: 0xc050a08  jal         func_142820
    ctx->pc = 0x2E6714u;
    SET_GPR_U32(ctx, 31, 0x2E671Cu);
    ctx->pc = 0x2E6718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6714u;
            // 0x2e6718: 0xe440e6b0  swc1        $f0, -0x1950($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294960816), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (runtime->hasFunction(0x142820u)) {
        auto targetFn = runtime->lookupFunction(0x142820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E671Cu; }
        if (ctx->pc != 0x2E671Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142820_0x142820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E671Cu; }
        if (ctx->pc != 0x2E671Cu) { return; }
    }
    ctx->pc = 0x2E671Cu;
label_2e671c:
    // 0x2e671c: 0x0  nop
    ctx->pc = 0x2e671cu;
    // NOP
label_2e6720:
    // 0x2e6720: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x2e6720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2e6724: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2e6724u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2e6728: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x2e6728u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2e672c: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x2e672cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e6730: 0x1460ff6e  bnez        $v1, . + 4 + (-0x92 << 2)
    ctx->pc = 0x2E6730u;
    {
        const bool branch_taken_0x2e6730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6730u;
            // 0x2e6734: 0x26b50060  addiu       $s5, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6730) {
            ctx->pc = 0x2E64ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e64ec;
        }
    }
    ctx->pc = 0x2E6738u;
label_2e6738:
    // 0x2e6738: 0x12600213  beqz        $s3, . + 4 + (0x213 << 2)
    ctx->pc = 0x2E6738u;
    {
        const bool branch_taken_0x2e6738 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6738) {
            ctx->pc = 0x2E6F88u;
            goto label_2e6f88;
        }
    }
    ctx->pc = 0x2E6740u;
    // 0x2e6740: 0xc050a88  jal         func_142A20
    ctx->pc = 0x2E6740u;
    SET_GPR_U32(ctx, 31, 0x2E6748u);
    ctx->pc = 0x142A20u;
    if (runtime->hasFunction(0x142A20u)) {
        auto targetFn = runtime->lookupFunction(0x142A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6748u; }
        if (ctx->pc != 0x2E6748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142A20_0x142a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6748u; }
        if (ctx->pc != 0x2E6748u) { return; }
    }
    ctx->pc = 0x2E6748u;
label_2e6748:
    // 0x2e6748: 0x1000020f  b           . + 4 + (0x20F << 2)
    ctx->pc = 0x2E6748u;
    {
        const bool branch_taken_0x2e6748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6748) {
            ctx->pc = 0x2E6F88u;
            goto label_2e6f88;
        }
    }
    ctx->pc = 0x2E6750u;
label_2e6750:
    // 0x2e6750: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x2e6750u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e6754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6758: 0xc0b96f0  jal         func_2E5BC0
    ctx->pc = 0x2E6758u;
    SET_GPR_U32(ctx, 31, 0x2E6760u);
    ctx->pc = 0x2E675Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6758u;
            // 0x2e675c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5BC0u;
    if (runtime->hasFunction(0x2E5BC0u)) {
        auto targetFn = runtime->lookupFunction(0x2E5BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6760u; }
        if (ctx->pc != 0x2E6760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5BC0_0x2e5bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6760u; }
        if (ctx->pc != 0x2E6760u) { return; }
    }
    ctx->pc = 0x2E6760u;
label_2e6760:
    // 0x2e6760: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x2e6760u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e6764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6768: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x2e6768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2e676c: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2e676cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6770: 0xc0b96f0  jal         func_2E5BC0
    ctx->pc = 0x2E6770u;
    SET_GPR_U32(ctx, 31, 0x2E6778u);
    ctx->pc = 0x2E6774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6770u;
            // 0x2e6774: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5BC0u;
    if (runtime->hasFunction(0x2E5BC0u)) {
        auto targetFn = runtime->lookupFunction(0x2E5BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6778u; }
        if (ctx->pc != 0x2E6778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5BC0_0x2e5bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6778u; }
        if (ctx->pc != 0x2E6778u) { return; }
    }
    ctx->pc = 0x2E6778u;
label_2e6778:
    // 0x2e6778: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x2e6778u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e677c: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2e677cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2e6780: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E6780u;
    {
        const bool branch_taken_0x2e6780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6780) {
            ctx->pc = 0x2E6784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6780u;
            // 0x2e6784: 0x27a402a0  addiu       $a0, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E67A0u;
            goto label_2e67a0;
        }
    }
    ctx->pc = 0x2E6788u;
    // 0x2e6788: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x2e6788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2e678c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e678cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6790: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2e6790u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6794: 0xc0b96f0  jal         func_2E5BC0
    ctx->pc = 0x2E6794u;
    SET_GPR_U32(ctx, 31, 0x2E679Cu);
    ctx->pc = 0x2E6798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6794u;
            // 0x2e6798: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5BC0u;
    if (runtime->hasFunction(0x2E5BC0u)) {
        auto targetFn = runtime->lookupFunction(0x2E5BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E679Cu; }
        if (ctx->pc != 0x2E679Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5BC0_0x2e5bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E679Cu; }
        if (ctx->pc != 0x2E679Cu) { return; }
    }
    ctx->pc = 0x2E679Cu;
label_2e679c:
    // 0x2e679c: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x2e679cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_2e67a0:
    // 0x2e67a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e67a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e67a4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2E67A4u;
    SET_GPR_U32(ctx, 31, 0x2E67ACu);
    ctx->pc = 0x2E67A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E67A4u;
            // 0x2e67a8: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E67ACu; }
        if (ctx->pc != 0x2E67ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E67ACu; }
        if (ctx->pc != 0x2E67ACu) { return; }
    }
    ctx->pc = 0x2E67ACu;
label_2e67ac:
    // 0x2e67ac: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x2E67ACu;
    SET_GPR_U32(ctx, 31, 0x2E67B4u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E67B4u; }
        if (ctx->pc != 0x2E67B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E67B4u; }
        if (ctx->pc != 0x2E67B4u) { return; }
    }
    ctx->pc = 0x2E67B4u;
label_2e67b4:
    // 0x2e67b4: 0xc0b36b4  jal         func_2CDAD0
    ctx->pc = 0x2E67B4u;
    SET_GPR_U32(ctx, 31, 0x2E67BCu);
    ctx->pc = 0x2E67B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E67B4u;
            // 0x2e67b8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E67BCu; }
        if (ctx->pc != 0x2E67BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E67BCu; }
        if (ctx->pc != 0x2E67BCu) { return; }
    }
    ctx->pc = 0x2E67BCu;
label_2e67bc:
    // 0x2e67bc: 0xc0b9c64  jal         func_2E7190
    ctx->pc = 0x2E67BCu;
    SET_GPR_U32(ctx, 31, 0x2E67C4u);
    ctx->pc = 0x2E67C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E67BCu;
            // 0x2e67c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E67C4u; }
        if (ctx->pc != 0x2E67C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E67C4u; }
        if (ctx->pc != 0x2E67C4u) { return; }
    }
    ctx->pc = 0x2E67C4u;
label_2e67c4:
    // 0x2e67c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e67c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e67c8: 0xc076984  jal         func_1DA610
    ctx->pc = 0x2E67C8u;
    SET_GPR_U32(ctx, 31, 0x2E67D0u);
    ctx->pc = 0x2E67CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E67C8u;
            // 0x2e67cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E67D0u; }
        if (ctx->pc != 0x2E67D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E67D0u; }
        if (ctx->pc != 0x2E67D0u) { return; }
    }
    ctx->pc = 0x2E67D0u;
label_2e67d0:
    // 0x2e67d0: 0xc07697c  jal         func_1DA5F0
    ctx->pc = 0x2E67D0u;
    SET_GPR_U32(ctx, 31, 0x2E67D8u);
    ctx->pc = 0x2E67D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E67D0u;
            // 0x2e67d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E67D8u; }
        if (ctx->pc != 0x2E67D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E67D8u; }
        if (ctx->pc != 0x2E67D8u) { return; }
    }
    ctx->pc = 0x2E67D8u;
label_2e67d8:
    // 0x2e67d8: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x2e67d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2e67dc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2e67dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e67e0: 0x8e1500f0  lw          $s5, 0xF0($s0)
    ctx->pc = 0x2e67e0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2e67e4: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x2e67e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2e67e8: 0x10600067  beqz        $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x2E67E8u;
    {
        const bool branch_taken_0x2e67e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E67ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E67E8u;
            // 0x2e67ec: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e67e8) {
            ctx->pc = 0x2E6988u;
            goto label_2e6988;
        }
    }
    ctx->pc = 0x2E67F0u;
label_2e67f0:
    // 0x2e67f0: 0x86a30034  lh          $v1, 0x34($s5)
    ctx->pc = 0x2e67f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x2e67f4: 0x1860005e  blez        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x2E67F4u;
    {
        const bool branch_taken_0x2e67f4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2e67f4) {
            ctx->pc = 0x2E6970u;
            goto label_2e6970;
        }
    }
    ctx->pc = 0x2E67FCu;
    // 0x2e67fc: 0x16c00006  bnez        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E67FCu;
    {
        const bool branch_taken_0x2e67fc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e67fc) {
            ctx->pc = 0x2E6818u;
            goto label_2e6818;
        }
    }
    ctx->pc = 0x2E6804u;
    // 0x2e6804: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e6804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e6808: 0xc0506cc  jal         func_141B30
    ctx->pc = 0x2E6808u;
    SET_GPR_U32(ctx, 31, 0x2E6810u);
    ctx->pc = 0x2E680Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6808u;
            // 0x2e680c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141B30u;
    if (runtime->hasFunction(0x141B30u)) {
        auto targetFn = runtime->lookupFunction(0x141B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6810u; }
        if (ctx->pc != 0x2E6810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141B30_0x141b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6810u; }
        if (ctx->pc != 0x2E6810u) { return; }
    }
    ctx->pc = 0x2E6810u;
label_2e6810:
    // 0x2e6810: 0x64160001  daddiu      $s6, $zero, 0x1
    ctx->pc = 0x2e6810u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2e6814: 0x0  nop
    ctx->pc = 0x2e6814u;
    // NOP
label_2e6818:
    // 0x2e6818: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6818u;
    {
        const bool branch_taken_0x2e6818 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6818) {
            ctx->pc = 0x2E6828u;
            goto label_2e6828;
        }
    }
    ctx->pc = 0x2E6820u;
    // 0x2e6820: 0x13c00029  beqz        $fp, . + 4 + (0x29 << 2)
    ctx->pc = 0x2E6820u;
    {
        const bool branch_taken_0x2e6820 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6820) {
            ctx->pc = 0x2E68C8u;
            goto label_2e68c8;
        }
    }
    ctx->pc = 0x2E6828u;
label_2e6828:
    // 0x2e6828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e682c: 0x27a50320  addiu       $a1, $sp, 0x320
    ctx->pc = 0x2e682cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x2e6830: 0xc0b9bf0  jal         func_2E6FC0
    ctx->pc = 0x2E6830u;
    SET_GPR_U32(ctx, 31, 0x2E6838u);
    ctx->pc = 0x2E6834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6830u;
            // 0x2e6834: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E6FC0u;
    if (runtime->hasFunction(0x2E6FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2E6FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6838u; }
        if (ctx->pc != 0x2E6838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E6FC0_0x2e6fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6838u; }
        if (ctx->pc != 0x2E6838u) { return; }
    }
    ctx->pc = 0x2E6838u;
label_2e6838:
    // 0x2e6838: 0x8ea60048  lw          $a2, 0x48($s5)
    ctx->pc = 0x2e6838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x2e683c: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x2e683cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x2e6840: 0x8ea7004c  lw          $a3, 0x4C($s5)
    ctx->pc = 0x2e6840u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x2e6844: 0x8ea80050  lw          $t0, 0x50($s5)
    ctx->pc = 0x2e6844u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x2e6848: 0xc04ce30  jal         func_1338C0
    ctx->pc = 0x2E6848u;
    SET_GPR_U32(ctx, 31, 0x2E6850u);
    ctx->pc = 0x2E684Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6848u;
            // 0x2e684c: 0x27a50320  addiu       $a1, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1338C0u;
    if (runtime->hasFunction(0x1338C0u)) {
        auto targetFn = runtime->lookupFunction(0x1338C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6850u; }
        if (ctx->pc != 0x2E6850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001338C0_0x1338c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6850u; }
        if (ctx->pc != 0x2E6850u) { return; }
    }
    ctx->pc = 0x2E6850u;
label_2e6850:
    // 0x2e6850: 0xafa002a0  sw          $zero, 0x2A0($sp)
    ctx->pc = 0x2e6850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 0));
    // 0x2e6854: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x2e6854u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x2e6858: 0xc6a0003c  lwc1        $f0, 0x3C($s5)
    ctx->pc = 0x2e6858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e685c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e685cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6860: 0x27b202a0  addiu       $s2, $sp, 0x2A0
    ctx->pc = 0x2e6860u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x2e6864: 0x2631e6c0  addiu       $s1, $s1, -0x1940
    ctx->pc = 0x2e6864u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294960832));
    // 0x2e6868: 0xe7a002c0  swc1        $f0, 0x2C0($sp)
    ctx->pc = 0x2e6868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
    // 0x2e686c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e686cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e6870: 0xe7a002b0  swc1        $f0, 0x2B0($sp)
    ctx->pc = 0x2e6870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
    // 0x2e6874: 0xc6a00040  lwc1        $f0, 0x40($s5)
    ctx->pc = 0x2e6874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6878: 0xe7a002a4  swc1        $f0, 0x2A4($sp)
    ctx->pc = 0x2e6878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
    // 0x2e687c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e687cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e6880: 0xe7a002c4  swc1        $f0, 0x2C4($sp)
    ctx->pc = 0x2e6880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 708), bits); }
    // 0x2e6884: 0xe7a002b4  swc1        $f0, 0x2B4($sp)
    ctx->pc = 0x2e6884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 692), bits); }
label_2e6888:
    // 0x2e6888: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x2e6888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2e688c: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x2e688cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x2e6890: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E6890u;
    SET_GPR_U32(ctx, 31, 0x2E6898u);
    ctx->pc = 0x2E6894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6890u;
            // 0x2e6894: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6898u; }
        if (ctx->pc != 0x2E6898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6898u; }
        if (ctx->pc != 0x2E6898u) { return; }
    }
    ctx->pc = 0x2E6898u;
label_2e6898:
    // 0x2e6898: 0xc7a10290  lwc1        $f1, 0x290($sp)
    ctx->pc = 0x2e6898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e689c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e689cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e68a0: 0xc7a00294  lwc1        $f0, 0x294($sp)
    ctx->pc = 0x2e68a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e68a4: 0x2e620003  sltiu       $v0, $s3, 0x3
    ctx->pc = 0x2e68a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e68a8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2e68a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2e68ac: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2e68acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2e68b0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2e68b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2e68b4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E68B4u;
    {
        const bool branch_taken_0x2e68b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E68B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E68B4u;
            // 0x2e68b8: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e68b4) {
            ctx->pc = 0x2E6888u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e6888;
        }
    }
    ctx->pc = 0x2E68BCu;
    // 0x2e68bc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E68BCu;
    {
        const bool branch_taken_0x2e68bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e68bc) {
            ctx->pc = 0x2E6928u;
            goto label_2e6928;
        }
    }
    ctx->pc = 0x2E68C4u;
    // 0x2e68c4: 0x0  nop
    ctx->pc = 0x2e68c4u;
    // NOP
label_2e68c8:
    // 0x2e68c8: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x2e68c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2e68cc: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x2e68ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2e68d0: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x2E68D0u;
    SET_GPR_U32(ctx, 31, 0x2E68D8u);
    ctx->pc = 0x2E68D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E68D0u;
            // 0x2e68d4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E68D8u; }
        if (ctx->pc != 0x2E68D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E68D8u; }
        if (ctx->pc != 0x2E68D8u) { return; }
    }
    ctx->pc = 0x2E68D8u;
label_2e68d8:
    // 0x2e68d8: 0xc7a30290  lwc1        $f3, 0x290($sp)
    ctx->pc = 0x2e68d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e68dc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e68dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e68e0: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x2e68e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x2e68e4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2e68e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x2e68e8: 0xc7a20294  lwc1        $f2, 0x294($sp)
    ctx->pc = 0x2e68e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e68ec: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2e68ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2e68f0: 0xe443e6c0  swc1        $f3, -0x1940($v0)
    ctx->pc = 0x2e68f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294960832), bits); }
    // 0x2e68f4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e68f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e68f8: 0xc6a1003c  lwc1        $f1, 0x3C($s5)
    ctx->pc = 0x2e68f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e68fc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e68fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e6900: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x2e6900u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2e6904: 0xe4c0e6d4  swc1        $f0, -0x192C($a2)
    ctx->pc = 0x2e6904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294960852), bits); }
    // 0x2e6908: 0x46011800  add.s       $f0, $f3, $f1
    ctx->pc = 0x2e6908u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2e690c: 0xe4a0e6e8  swc1        $f0, -0x1918($a1)
    ctx->pc = 0x2e690cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294960872), bits); }
    // 0x2e6910: 0xc6a10040  lwc1        $f1, 0x40($s5)
    ctx->pc = 0x2e6910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6914: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x2e6914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2e6918: 0xe480e6c4  swc1        $f0, -0x193C($a0)
    ctx->pc = 0x2e6918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294960836), bits); }
    // 0x2e691c: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x2e691cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2e6920: 0xe460e6ec  swc1        $f0, -0x1914($v1)
    ctx->pc = 0x2e6920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294960876), bits); }
    // 0x2e6924: 0xe440e6d8  swc1        $f0, -0x1928($v0)
    ctx->pc = 0x2e6924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294960856), bits); }
label_2e6928:
    // 0x2e6928: 0x8ea60030  lw          $a2, 0x30($s5)
    ctx->pc = 0x2e6928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x2e692c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2e692cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2e6930: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e6930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e6934: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e6934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e6938: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x2e6938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
    // 0x2e693c: 0xac86e6f0  sw          $a2, -0x1910($a0)
    ctx->pc = 0x2e693cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960880), GPR_U32(ctx, 6));
    // 0x2e6940: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2e6940u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6944: 0xac46e6c8  sw          $a2, -0x1938($v0)
    ctx->pc = 0x2e6944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960840), GPR_U32(ctx, 6));
    // 0x2e6948: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2e6948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x2e694c: 0xac66e6dc  sw          $a2, -0x1924($v1)
    ctx->pc = 0x2e694cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960860), GPR_U32(ctx, 6));
    // 0x2e6950: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e6950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e6954: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2e6954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6958: 0x8c46e700  lw          $a2, -0x1900($v0)
    ctx->pc = 0x2e6958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960896)));
    // 0x2e695c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e695cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6960: 0x24a5e6c0  addiu       $a1, $a1, -0x1940
    ctx->pc = 0x2e6960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960832));
    // 0x2e6964: 0xc050780  jal         func_141E00
    ctx->pc = 0x2E6964u;
    SET_GPR_U32(ctx, 31, 0x2E696Cu);
    ctx->pc = 0x2E6968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6964u;
            // 0x2e6968: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E00u;
    if (runtime->hasFunction(0x141E00u)) {
        auto targetFn = runtime->lookupFunction(0x141E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E696Cu; }
        if (ctx->pc != 0x2E696Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141E00_0x141e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E696Cu; }
        if (ctx->pc != 0x2E696Cu) { return; }
    }
    ctx->pc = 0x2E696Cu;
label_2e696c:
    // 0x2e696c: 0x0  nop
    ctx->pc = 0x2e696cu;
    // NOP
label_2e6970:
    // 0x2e6970: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x2e6970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2e6974: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2e6974u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2e6978: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x2e6978u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2e697c: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x2e697cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e6980: 0x1460ff9b  bnez        $v1, . + 4 + (-0x65 << 2)
    ctx->pc = 0x2E6980u;
    {
        const bool branch_taken_0x2e6980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6980u;
            // 0x2e6984: 0x26b50060  addiu       $s5, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6980) {
            ctx->pc = 0x2E67F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e67f0;
        }
    }
    ctx->pc = 0x2E6988u;
label_2e6988:
    // 0x2e6988: 0x12c0017f  beqz        $s6, . + 4 + (0x17F << 2)
    ctx->pc = 0x2E6988u;
    {
        const bool branch_taken_0x2e6988 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6988) {
            ctx->pc = 0x2E6F88u;
            goto label_2e6f88;
        }
    }
    ctx->pc = 0x2E6990u;
    // 0x2e6990: 0xc0508a4  jal         func_142290
    ctx->pc = 0x2E6990u;
    SET_GPR_U32(ctx, 31, 0x2E6998u);
    ctx->pc = 0x142290u;
    if (runtime->hasFunction(0x142290u)) {
        auto targetFn = runtime->lookupFunction(0x142290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6998u; }
        if (ctx->pc != 0x2E6998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142290_0x142290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6998u; }
        if (ctx->pc != 0x2E6998u) { return; }
    }
    ctx->pc = 0x2E6998u;
label_2e6998:
    // 0x2e6998: 0x1000017b  b           . + 4 + (0x17B << 2)
    ctx->pc = 0x2E6998u;
    {
        const bool branch_taken_0x2e6998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6998) {
            ctx->pc = 0x2E6F88u;
            goto label_2e6f88;
        }
    }
    ctx->pc = 0x2E69A0u;
label_2e69a0:
    // 0x2e69a0: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x2e69a0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e69a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e69a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e69a8: 0xc0b96f0  jal         func_2E5BC0
    ctx->pc = 0x2E69A8u;
    SET_GPR_U32(ctx, 31, 0x2E69B0u);
    ctx->pc = 0x2E69ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E69A8u;
            // 0x2e69ac: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5BC0u;
    if (runtime->hasFunction(0x2E5BC0u)) {
        auto targetFn = runtime->lookupFunction(0x2E5BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E69B0u; }
        if (ctx->pc != 0x2E69B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5BC0_0x2e5bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E69B0u; }
        if (ctx->pc != 0x2E69B0u) { return; }
    }
    ctx->pc = 0x2E69B0u;
label_2e69b0:
    // 0x2e69b0: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x2e69b0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e69b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e69b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e69b8: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x2e69b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2e69bc: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2e69bcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e69c0: 0xc0b96f0  jal         func_2E5BC0
    ctx->pc = 0x2E69C0u;
    SET_GPR_U32(ctx, 31, 0x2E69C8u);
    ctx->pc = 0x2E69C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E69C0u;
            // 0x2e69c4: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5BC0u;
    if (runtime->hasFunction(0x2E5BC0u)) {
        auto targetFn = runtime->lookupFunction(0x2E5BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E69C8u; }
        if (ctx->pc != 0x2E69C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5BC0_0x2e5bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E69C8u; }
        if (ctx->pc != 0x2E69C8u) { return; }
    }
    ctx->pc = 0x2E69C8u;
label_2e69c8:
    // 0x2e69c8: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x2e69c8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e69cc: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2e69ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2e69d0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E69D0u;
    {
        const bool branch_taken_0x2e69d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e69d0) {
            ctx->pc = 0x2E69D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E69D0u;
            // 0x2e69d4: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E69F0u;
            goto label_2e69f0;
        }
    }
    ctx->pc = 0x2E69D8u;
    // 0x2e69d8: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x2e69d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2e69dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e69dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e69e0: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2e69e0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e69e4: 0xc0b96f0  jal         func_2E5BC0
    ctx->pc = 0x2E69E4u;
    SET_GPR_U32(ctx, 31, 0x2E69ECu);
    ctx->pc = 0x2E69E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E69E4u;
            // 0x2e69e8: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5BC0u;
    if (runtime->hasFunction(0x2E5BC0u)) {
        auto targetFn = runtime->lookupFunction(0x2E5BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E69ECu; }
        if (ctx->pc != 0x2E69ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5BC0_0x2e5bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E69ECu; }
        if (ctx->pc != 0x2E69ECu) { return; }
    }
    ctx->pc = 0x2E69ECu;
label_2e69ec:
    // 0x2e69ec: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x2e69ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_2e69f0:
    // 0x2e69f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e69f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e69f4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2E69F4u;
    SET_GPR_U32(ctx, 31, 0x2E69FCu);
    ctx->pc = 0x2E69F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E69F4u;
            // 0x2e69f8: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E69FCu; }
        if (ctx->pc != 0x2E69FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E69FCu; }
        if (ctx->pc != 0x2E69FCu) { return; }
    }
    ctx->pc = 0x2E69FCu;
label_2e69fc:
    // 0x2e69fc: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x2E69FCu;
    SET_GPR_U32(ctx, 31, 0x2E6A04u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6A04u; }
        if (ctx->pc != 0x2E6A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6A04u; }
        if (ctx->pc != 0x2E6A04u) { return; }
    }
    ctx->pc = 0x2E6A04u;
label_2e6a04:
    // 0x2e6a04: 0xc0b36b4  jal         func_2CDAD0
    ctx->pc = 0x2E6A04u;
    SET_GPR_U32(ctx, 31, 0x2E6A0Cu);
    ctx->pc = 0x2E6A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6A04u;
            // 0x2e6a08: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6A0Cu; }
        if (ctx->pc != 0x2E6A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6A0Cu; }
        if (ctx->pc != 0x2E6A0Cu) { return; }
    }
    ctx->pc = 0x2E6A0Cu;
label_2e6a0c:
    // 0x2e6a0c: 0xc0b9c64  jal         func_2E7190
    ctx->pc = 0x2E6A0Cu;
    SET_GPR_U32(ctx, 31, 0x2E6A14u);
    ctx->pc = 0x2E6A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6A0Cu;
            // 0x2e6a10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6A14u; }
        if (ctx->pc != 0x2E6A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6A14u; }
        if (ctx->pc != 0x2E6A14u) { return; }
    }
    ctx->pc = 0x2E6A14u;
label_2e6a14:
    // 0x2e6a14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e6a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6a18: 0xc076984  jal         func_1DA610
    ctx->pc = 0x2E6A18u;
    SET_GPR_U32(ctx, 31, 0x2E6A20u);
    ctx->pc = 0x2E6A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6A18u;
            // 0x2e6a1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6A20u; }
        if (ctx->pc != 0x2E6A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6A20u; }
        if (ctx->pc != 0x2E6A20u) { return; }
    }
    ctx->pc = 0x2E6A20u;
label_2e6a20:
    // 0x2e6a20: 0xc07697c  jal         func_1DA5F0
    ctx->pc = 0x2E6A20u;
    SET_GPR_U32(ctx, 31, 0x2E6A28u);
    ctx->pc = 0x2E6A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6A20u;
            // 0x2e6a24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6A28u; }
        if (ctx->pc != 0x2E6A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6A28u; }
        if (ctx->pc != 0x2E6A28u) { return; }
    }
    ctx->pc = 0x2E6A28u;
label_2e6a28:
    // 0x2e6a28: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x2e6a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2e6a2c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2e6a2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6a30: 0x8e1500f0  lw          $s5, 0xF0($s0)
    ctx->pc = 0x2e6a30u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2e6a34: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x2e6a34u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2e6a38: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x2E6A38u;
    {
        const bool branch_taken_0x2e6a38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6A38u;
            // 0x2e6a3c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6a38) {
            ctx->pc = 0x2E6BF0u;
            goto label_2e6bf0;
        }
    }
    ctx->pc = 0x2E6A40u;
label_2e6a40:
    // 0x2e6a40: 0x86a30034  lh          $v1, 0x34($s5)
    ctx->pc = 0x2e6a40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x2e6a44: 0x18600064  blez        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x2E6A44u;
    {
        const bool branch_taken_0x2e6a44 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2e6a44) {
            ctx->pc = 0x2E6BD8u;
            goto label_2e6bd8;
        }
    }
    ctx->pc = 0x2E6A4Cu;
    // 0x2e6a4c: 0x16c00006  bnez        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E6A4Cu;
    {
        const bool branch_taken_0x2e6a4c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6a4c) {
            ctx->pc = 0x2E6A68u;
            goto label_2e6a68;
        }
    }
    ctx->pc = 0x2E6A54u;
    // 0x2e6a54: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e6a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e6a58: 0xc0506cc  jal         func_141B30
    ctx->pc = 0x2E6A58u;
    SET_GPR_U32(ctx, 31, 0x2E6A60u);
    ctx->pc = 0x2E6A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6A58u;
            // 0x2e6a5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141B30u;
    if (runtime->hasFunction(0x141B30u)) {
        auto targetFn = runtime->lookupFunction(0x141B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6A60u; }
        if (ctx->pc != 0x2E6A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141B30_0x141b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6A60u; }
        if (ctx->pc != 0x2E6A60u) { return; }
    }
    ctx->pc = 0x2E6A60u;
label_2e6a60:
    // 0x2e6a60: 0x64160001  daddiu      $s6, $zero, 0x1
    ctx->pc = 0x2e6a60u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2e6a64: 0x0  nop
    ctx->pc = 0x2e6a64u;
    // NOP
label_2e6a68:
    // 0x2e6a68: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6A68u;
    {
        const bool branch_taken_0x2e6a68 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6a68) {
            ctx->pc = 0x2E6A78u;
            goto label_2e6a78;
        }
    }
    ctx->pc = 0x2E6A70u;
    // 0x2e6a70: 0x13c0002b  beqz        $fp, . + 4 + (0x2B << 2)
    ctx->pc = 0x2E6A70u;
    {
        const bool branch_taken_0x2e6a70 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6a70) {
            ctx->pc = 0x2E6B20u;
            goto label_2e6b20;
        }
    }
    ctx->pc = 0x2E6A78u;
label_2e6a78:
    // 0x2e6a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6a7c: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x2e6a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x2e6a80: 0xc0b9bf0  jal         func_2E6FC0
    ctx->pc = 0x2E6A80u;
    SET_GPR_U32(ctx, 31, 0x2E6A88u);
    ctx->pc = 0x2E6A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6A80u;
            // 0x2e6a84: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E6FC0u;
    if (runtime->hasFunction(0x2E6FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2E6FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6A88u; }
        if (ctx->pc != 0x2E6A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E6FC0_0x2e6fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6A88u; }
        if (ctx->pc != 0x2E6A88u) { return; }
    }
    ctx->pc = 0x2E6A88u;
label_2e6a88:
    // 0x2e6a88: 0x8ea60048  lw          $a2, 0x48($s5)
    ctx->pc = 0x2e6a88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x2e6a8c: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x2e6a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x2e6a90: 0x8ea7004c  lw          $a3, 0x4C($s5)
    ctx->pc = 0x2e6a90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x2e6a94: 0x8ea80050  lw          $t0, 0x50($s5)
    ctx->pc = 0x2e6a94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x2e6a98: 0xc04ce30  jal         func_1338C0
    ctx->pc = 0x2E6A98u;
    SET_GPR_U32(ctx, 31, 0x2E6AA0u);
    ctx->pc = 0x2E6A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6A98u;
            // 0x2e6a9c: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1338C0u;
    if (runtime->hasFunction(0x1338C0u)) {
        auto targetFn = runtime->lookupFunction(0x1338C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6AA0u; }
        if (ctx->pc != 0x2E6AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001338C0_0x1338c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6AA0u; }
        if (ctx->pc != 0x2E6AA0u) { return; }
    }
    ctx->pc = 0x2E6AA0u;
label_2e6aa0:
    // 0x2e6aa0: 0xc6a1003c  lwc1        $f1, 0x3C($s5)
    ctx->pc = 0x2e6aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6aa4: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x2e6aa4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x2e6aa8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e6aa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6aac: 0x27b201d0  addiu       $s2, $sp, 0x1D0
    ctx->pc = 0x2e6aacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2e6ab0: 0x2631e710  addiu       $s1, $s1, -0x18F0
    ctx->pc = 0x2e6ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294960912));
    // 0x2e6ab4: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x2e6ab4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x2e6ab8: 0xe7a10200  swc1        $f1, 0x200($sp)
    ctx->pc = 0x2e6ab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x2e6abc: 0xe7a101e0  swc1        $f1, 0x1E0($sp)
    ctx->pc = 0x2e6abcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x2e6ac0: 0xe7a001f0  swc1        $f0, 0x1F0($sp)
    ctx->pc = 0x2e6ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x2e6ac4: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x2e6ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x2e6ac8: 0xc6a10040  lwc1        $f1, 0x40($s5)
    ctx->pc = 0x2e6ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6acc: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x2e6accu;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x2e6ad0: 0xe7a10204  swc1        $f1, 0x204($sp)
    ctx->pc = 0x2e6ad0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x2e6ad4: 0xe7a101f4  swc1        $f1, 0x1F4($sp)
    ctx->pc = 0x2e6ad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x2e6ad8: 0xe7a001e4  swc1        $f0, 0x1E4($sp)
    ctx->pc = 0x2e6ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
    // 0x2e6adc: 0xe7a001d4  swc1        $f0, 0x1D4($sp)
    ctx->pc = 0x2e6adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
label_2e6ae0:
    // 0x2e6ae0: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2e6ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2e6ae4: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x2e6ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x2e6ae8: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E6AE8u;
    SET_GPR_U32(ctx, 31, 0x2E6AF0u);
    ctx->pc = 0x2E6AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6AE8u;
            // 0x2e6aec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6AF0u; }
        if (ctx->pc != 0x2E6AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6AF0u; }
        if (ctx->pc != 0x2E6AF0u) { return; }
    }
    ctx->pc = 0x2E6AF0u;
label_2e6af0:
    // 0x2e6af0: 0xc7a101c0  lwc1        $f1, 0x1C0($sp)
    ctx->pc = 0x2e6af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6af4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e6af4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e6af8: 0xc7a001c4  lwc1        $f0, 0x1C4($sp)
    ctx->pc = 0x2e6af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6afc: 0x2e620004  sltiu       $v0, $s3, 0x4
    ctx->pc = 0x2e6afcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2e6b00: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2e6b00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2e6b04: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2e6b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2e6b08: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2e6b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2e6b0c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E6B0Cu;
    {
        const bool branch_taken_0x2e6b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6B0Cu;
            // 0x2e6b10: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6b0c) {
            ctx->pc = 0x2E6AE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e6ae0;
        }
    }
    ctx->pc = 0x2E6B14u;
    // 0x2e6b14: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2E6B14u;
    {
        const bool branch_taken_0x2e6b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6b14) {
            ctx->pc = 0x2E6B90u;
            goto label_2e6b90;
        }
    }
    ctx->pc = 0x2E6B1Cu;
    // 0x2e6b1c: 0x0  nop
    ctx->pc = 0x2e6b1cu;
    // NOP
label_2e6b20:
    // 0x2e6b20: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2e6b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2e6b24: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x2e6b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2e6b28: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x2E6B28u;
    SET_GPR_U32(ctx, 31, 0x2E6B30u);
    ctx->pc = 0x2E6B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6B28u;
            // 0x2e6b2c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6B30u; }
        if (ctx->pc != 0x2E6B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6B30u; }
        if (ctx->pc != 0x2E6B30u) { return; }
    }
    ctx->pc = 0x2E6B30u;
label_2e6b30:
    // 0x2e6b30: 0xc7a301c0  lwc1        $f3, 0x1C0($sp)
    ctx->pc = 0x2e6b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e6b34: 0x3c090060  lui         $t1, 0x60
    ctx->pc = 0x2e6b34u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)96 << 16));
    // 0x2e6b38: 0xc6a0003c  lwc1        $f0, 0x3C($s5)
    ctx->pc = 0x2e6b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6b3c: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x2e6b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
    // 0x2e6b40: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x2e6b40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
    // 0x2e6b44: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x2e6b44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x2e6b48: 0xc7a201c4  lwc1        $f2, 0x1C4($sp)
    ctx->pc = 0x2e6b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6b4c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2e6b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x2e6b50: 0x46001841  sub.s       $f1, $f3, $f0
    ctx->pc = 0x2e6b50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2e6b54: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2e6b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2e6b58: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e6b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e6b5c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e6b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e6b60: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2e6b60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2e6b64: 0xe521e738  swc1        $f1, -0x18C8($t1)
    ctx->pc = 0x2e6b64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294960952), bits); }
    // 0x2e6b68: 0xe501e710  swc1        $f1, -0x18F0($t0)
    ctx->pc = 0x2e6b68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294960912), bits); }
    // 0x2e6b6c: 0xe4e0e74c  swc1        $f0, -0x18B4($a3)
    ctx->pc = 0x2e6b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294960972), bits); }
    // 0x2e6b70: 0xe4c0e724  swc1        $f0, -0x18DC($a2)
    ctx->pc = 0x2e6b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294960932), bits); }
    // 0x2e6b74: 0xc6a00040  lwc1        $f0, 0x40($s5)
    ctx->pc = 0x2e6b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6b78: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x2e6b78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2e6b7c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2e6b7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2e6b80: 0xe4a1e728  swc1        $f1, -0x18D8($a1)
    ctx->pc = 0x2e6b80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294960936), bits); }
    // 0x2e6b84: 0xe481e714  swc1        $f1, -0x18EC($a0)
    ctx->pc = 0x2e6b84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294960916), bits); }
    // 0x2e6b88: 0xe460e750  swc1        $f0, -0x18B0($v1)
    ctx->pc = 0x2e6b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294960976), bits); }
    // 0x2e6b8c: 0xe440e73c  swc1        $f0, -0x18C4($v0)
    ctx->pc = 0x2e6b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294960956), bits); }
label_2e6b90:
    // 0x2e6b90: 0x8ea60030  lw          $a2, 0x30($s5)
    ctx->pc = 0x2e6b90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x2e6b94: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2e6b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x2e6b98: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2e6b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2e6b9c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e6b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e6ba0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e6ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e6ba4: 0xaca6e754  sw          $a2, -0x18AC($a1)
    ctx->pc = 0x2e6ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960980), GPR_U32(ctx, 6));
    // 0x2e6ba8: 0xac86e740  sw          $a2, -0x18C0($a0)
    ctx->pc = 0x2e6ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960960), GPR_U32(ctx, 6));
    // 0x2e6bac: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x2e6bacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
    // 0x2e6bb0: 0xac66e72c  sw          $a2, -0x18D4($v1)
    ctx->pc = 0x2e6bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960940), GPR_U32(ctx, 6));
    // 0x2e6bb4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2e6bb4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6bb8: 0xac46e718  sw          $a2, -0x18E8($v0)
    ctx->pc = 0x2e6bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960920), GPR_U32(ctx, 6));
    // 0x2e6bbc: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2e6bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x2e6bc0: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2e6bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6bc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e6bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6bc8: 0x24a5e710  addiu       $a1, $a1, -0x18F0
    ctx->pc = 0x2e6bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960912));
    // 0x2e6bcc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2e6bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e6bd0: 0xc050780  jal         func_141E00
    ctx->pc = 0x2E6BD0u;
    SET_GPR_U32(ctx, 31, 0x2E6BD8u);
    ctx->pc = 0x2E6BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6BD0u;
            // 0x2e6bd4: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E00u;
    if (runtime->hasFunction(0x141E00u)) {
        auto targetFn = runtime->lookupFunction(0x141E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6BD8u; }
        if (ctx->pc != 0x2E6BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141E00_0x141e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6BD8u; }
        if (ctx->pc != 0x2E6BD8u) { return; }
    }
    ctx->pc = 0x2E6BD8u;
label_2e6bd8:
    // 0x2e6bd8: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x2e6bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2e6bdc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2e6bdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2e6be0: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x2e6be0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2e6be4: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x2e6be4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e6be8: 0x1460ff95  bnez        $v1, . + 4 + (-0x6B << 2)
    ctx->pc = 0x2E6BE8u;
    {
        const bool branch_taken_0x2e6be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6BE8u;
            // 0x2e6bec: 0x26b50060  addiu       $s5, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6be8) {
            ctx->pc = 0x2E6A40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e6a40;
        }
    }
    ctx->pc = 0x2E6BF0u;
label_2e6bf0:
    // 0x2e6bf0: 0x12c000e5  beqz        $s6, . + 4 + (0xE5 << 2)
    ctx->pc = 0x2E6BF0u;
    {
        const bool branch_taken_0x2e6bf0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6bf0) {
            ctx->pc = 0x2E6F88u;
            goto label_2e6f88;
        }
    }
    ctx->pc = 0x2E6BF8u;
    // 0x2e6bf8: 0xc0508a4  jal         func_142290
    ctx->pc = 0x2E6BF8u;
    SET_GPR_U32(ctx, 31, 0x2E6C00u);
    ctx->pc = 0x142290u;
    if (runtime->hasFunction(0x142290u)) {
        auto targetFn = runtime->lookupFunction(0x142290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C00u; }
        if (ctx->pc != 0x2E6C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142290_0x142290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C00u; }
        if (ctx->pc != 0x2E6C00u) { return; }
    }
    ctx->pc = 0x2E6C00u;
label_2e6c00:
    // 0x2e6c00: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x2E6C00u;
    {
        const bool branch_taken_0x2e6c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6c00) {
            ctx->pc = 0x2E6F88u;
            goto label_2e6f88;
        }
    }
    ctx->pc = 0x2E6C08u;
label_2e6c08:
    // 0x2e6c08: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x2e6c08u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e6c0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6c10: 0xc0b96f0  jal         func_2E5BC0
    ctx->pc = 0x2E6C10u;
    SET_GPR_U32(ctx, 31, 0x2E6C18u);
    ctx->pc = 0x2E6C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C10u;
            // 0x2e6c14: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5BC0u;
    if (runtime->hasFunction(0x2E5BC0u)) {
        auto targetFn = runtime->lookupFunction(0x2E5BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C18u; }
        if (ctx->pc != 0x2E6C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5BC0_0x2e5bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C18u; }
        if (ctx->pc != 0x2E6C18u) { return; }
    }
    ctx->pc = 0x2E6C18u;
label_2e6c18:
    // 0x2e6c18: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x2e6c18u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e6c1c: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2e6c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2e6c20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E6C20u;
    {
        const bool branch_taken_0x2e6c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C20u;
            // 0x2e6c24: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c20) {
            ctx->pc = 0x2E6C40u;
            goto label_2e6c40;
        }
    }
    ctx->pc = 0x2E6C28u;
    // 0x2e6c28: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x2e6c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2e6c2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6c30: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2e6c30u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6c34: 0xc0b96f0  jal         func_2E5BC0
    ctx->pc = 0x2E6C34u;
    SET_GPR_U32(ctx, 31, 0x2E6C3Cu);
    ctx->pc = 0x2E6C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C34u;
            // 0x2e6c38: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5BC0u;
    if (runtime->hasFunction(0x2E5BC0u)) {
        auto targetFn = runtime->lookupFunction(0x2E5BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C3Cu; }
        if (ctx->pc != 0x2E6C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5BC0_0x2e5bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C3Cu; }
        if (ctx->pc != 0x2E6C3Cu) { return; }
    }
    ctx->pc = 0x2E6C3Cu;
label_2e6c3c:
    // 0x2e6c3c: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x2e6c3cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e6c40:
    // 0x2e6c40: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x2E6C40u;
    SET_GPR_U32(ctx, 31, 0x2E6C48u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C48u; }
        if (ctx->pc != 0x2E6C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C48u; }
        if (ctx->pc != 0x2E6C48u) { return; }
    }
    ctx->pc = 0x2E6C48u;
label_2e6c48:
    // 0x2e6c48: 0xc0b36b4  jal         func_2CDAD0
    ctx->pc = 0x2E6C48u;
    SET_GPR_U32(ctx, 31, 0x2E6C50u);
    ctx->pc = 0x2E6C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C48u;
            // 0x2e6c4c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C50u; }
        if (ctx->pc != 0x2E6C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C50u; }
        if (ctx->pc != 0x2E6C50u) { return; }
    }
    ctx->pc = 0x2E6C50u;
label_2e6c50:
    // 0x2e6c50: 0xc0b9c64  jal         func_2E7190
    ctx->pc = 0x2E6C50u;
    SET_GPR_U32(ctx, 31, 0x2E6C58u);
    ctx->pc = 0x2E6C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C50u;
            // 0x2e6c54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C58u; }
        if (ctx->pc != 0x2E6C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C58u; }
        if (ctx->pc != 0x2E6C58u) { return; }
    }
    ctx->pc = 0x2E6C58u;
label_2e6c58:
    // 0x2e6c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e6c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6c5c: 0xc076984  jal         func_1DA610
    ctx->pc = 0x2E6C5Cu;
    SET_GPR_U32(ctx, 31, 0x2E6C64u);
    ctx->pc = 0x2E6C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C5Cu;
            // 0x2e6c60: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C64u; }
        if (ctx->pc != 0x2E6C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C64u; }
        if (ctx->pc != 0x2E6C64u) { return; }
    }
    ctx->pc = 0x2E6C64u;
label_2e6c64:
    // 0x2e6c64: 0xc07697c  jal         func_1DA5F0
    ctx->pc = 0x2E6C64u;
    SET_GPR_U32(ctx, 31, 0x2E6C6Cu);
    ctx->pc = 0x2E6C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C64u;
            // 0x2e6c68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C6Cu; }
        if (ctx->pc != 0x2E6C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C6Cu; }
        if (ctx->pc != 0x2E6C6Cu) { return; }
    }
    ctx->pc = 0x2E6C6Cu;
label_2e6c6c:
    // 0x2e6c6c: 0xc0b36b4  jal         func_2CDAD0
    ctx->pc = 0x2E6C6Cu;
    SET_GPR_U32(ctx, 31, 0x2E6C74u);
    ctx->pc = 0x2E6C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C6Cu;
            // 0x2e6c70: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C74u; }
        if (ctx->pc != 0x2E6C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C74u; }
        if (ctx->pc != 0x2E6C74u) { return; }
    }
    ctx->pc = 0x2E6C74u;
label_2e6c74:
    // 0x2e6c74: 0xc0b9c64  jal         func_2E7190
    ctx->pc = 0x2E6C74u;
    SET_GPR_U32(ctx, 31, 0x2E6C7Cu);
    ctx->pc = 0x2E6C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C74u;
            // 0x2e6c78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C7Cu; }
        if (ctx->pc != 0x2E6C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C7Cu; }
        if (ctx->pc != 0x2E6C7Cu) { return; }
    }
    ctx->pc = 0x2E6C7Cu;
label_2e6c7c:
    // 0x2e6c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6c80: 0xc0b9c10  jal         func_2E7040
    ctx->pc = 0x2E6C80u;
    SET_GPR_U32(ctx, 31, 0x2E6C88u);
    ctx->pc = 0x2E6C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C80u;
            // 0x2e6c84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7040u;
    if (runtime->hasFunction(0x2E7040u)) {
        auto targetFn = runtime->lookupFunction(0x2E7040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C88u; }
        if (ctx->pc != 0x2E6C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7040_0x2e7040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C88u; }
        if (ctx->pc != 0x2E6C88u) { return; }
    }
    ctx->pc = 0x2E6C88u;
label_2e6c88:
    // 0x2e6c88: 0x144000bf  bnez        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x2E6C88u;
    {
        const bool branch_taken_0x2e6c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6c88) {
            ctx->pc = 0x2E6F88u;
            goto label_2e6f88;
        }
    }
    ctx->pc = 0x2E6C90u;
    // 0x2e6c90: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x2e6c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2e6c94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e6c94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6c98: 0x8e1500f0  lw          $s5, 0xF0($s0)
    ctx->pc = 0x2e6c98u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2e6c9c: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x2e6c9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2e6ca0: 0x106000b5  beqz        $v1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x2E6CA0u;
    {
        const bool branch_taken_0x2e6ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6CA0u;
            // 0x2e6ca4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ca0) {
            ctx->pc = 0x2E6F78u;
            goto label_2e6f78;
        }
    }
    ctx->pc = 0x2E6CA8u;
label_2e6ca8:
    // 0x2e6ca8: 0x86a30034  lh          $v1, 0x34($s5)
    ctx->pc = 0x2e6ca8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x2e6cac: 0x186000ac  blez        $v1, . + 4 + (0xAC << 2)
    ctx->pc = 0x2E6CACu;
    {
        const bool branch_taken_0x2e6cac = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2e6cac) {
            ctx->pc = 0x2E6F60u;
            goto label_2e6f60;
        }
    }
    ctx->pc = 0x2E6CB4u;
    // 0x2e6cb4: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E6CB4u;
    {
        const bool branch_taken_0x2e6cb4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6cb4) {
            ctx->pc = 0x2E6CD8u;
            goto label_2e6cd8;
        }
    }
    ctx->pc = 0x2E6CBCu;
    // 0x2e6cbc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e6cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e6cc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e6cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6cc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e6cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6cc8: 0xc0508b4  jal         func_1422D0
    ctx->pc = 0x2E6CC8u;
    SET_GPR_U32(ctx, 31, 0x2E6CD0u);
    ctx->pc = 0x2E6CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6CC8u;
            // 0x2e6ccc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422D0u;
    if (runtime->hasFunction(0x1422D0u)) {
        auto targetFn = runtime->lookupFunction(0x1422D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6CD0u; }
        if (ctx->pc != 0x2E6CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422D0_0x1422d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6CD0u; }
        if (ctx->pc != 0x2E6CD0u) { return; }
    }
    ctx->pc = 0x2E6CD0u;
label_2e6cd0:
    // 0x2e6cd0: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x2e6cd0u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2e6cd4: 0x0  nop
    ctx->pc = 0x2e6cd4u;
    // NOP
label_2e6cd8:
    // 0x2e6cd8: 0x8ea70030  lw          $a3, 0x30($s5)
    ctx->pc = 0x2e6cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x2e6cdc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2e6cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2e6ce0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2e6ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x2e6ce4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e6ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e6ce8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e6cec: 0xac87e79c  sw          $a3, -0x1864($a0)
    ctx->pc = 0x2e6cecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961052), GPR_U32(ctx, 7));
    // 0x2e6cf0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e6cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6cf4: 0xaca7e78c  sw          $a3, -0x1874($a1)
    ctx->pc = 0x2e6cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294961036), GPR_U32(ctx, 7));
    // 0x2e6cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6cfc: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x2e6cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2e6d00: 0x0  nop
    ctx->pc = 0x2e6d00u;
    // NOP
    // 0x2e6d04: 0xc0b9bf0  jal         func_2E6FC0
    ctx->pc = 0x2E6D04u;
    SET_GPR_U32(ctx, 31, 0x2E6D0Cu);
    ctx->pc = 0x2E6D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6D04u;
            // 0x2e6d08: 0xac47e76c  sw          $a3, -0x1894($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961004), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E6FC0u;
    if (runtime->hasFunction(0x2E6FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2E6FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D0Cu; }
        if (ctx->pc != 0x2E6D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E6FC0_0x2e6fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D0Cu; }
        if (ctx->pc != 0x2E6D0Cu) { return; }
    }
    ctx->pc = 0x2E6D0Cu;
label_2e6d0c:
    // 0x2e6d0c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2e6d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e6d10: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x2e6d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2e6d14: 0xc04ccc4  jal         func_133310
    ctx->pc = 0x2E6D14u;
    SET_GPR_U32(ctx, 31, 0x2E6D1Cu);
    ctx->pc = 0x2E6D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6D14u;
            // 0x2e6d18: 0x26a60010  addiu       $a2, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D1Cu; }
        if (ctx->pc != 0x2E6D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D1Cu; }
        if (ctx->pc != 0x2E6D1Cu) { return; }
    }
    ctx->pc = 0x2E6D1Cu;
label_2e6d1c:
    // 0x2e6d1c: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E6D1Cu;
    {
        const bool branch_taken_0x2e6d1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6d1c) {
            ctx->pc = 0x2E6D38u;
            goto label_2e6d38;
        }
    }
    ctx->pc = 0x2E6D24u;
    // 0x2e6d24: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x2e6d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2e6d28: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2e6d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e6d2c: 0xc04ccc4  jal         func_133310
    ctx->pc = 0x2E6D2Cu;
    SET_GPR_U32(ctx, 31, 0x2E6D34u);
    ctx->pc = 0x2E6D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6D2Cu;
            // 0x2e6d30: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D34u; }
        if (ctx->pc != 0x2E6D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D34u; }
        if (ctx->pc != 0x2E6D34u) { return; }
    }
    ctx->pc = 0x2E6D34u;
label_2e6d34:
    // 0x2e6d34: 0x0  nop
    ctx->pc = 0x2e6d34u;
    // NOP
label_2e6d38:
    // 0x2e6d38: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2e6d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2e6d3c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E6D3Cu;
    SET_GPR_U32(ctx, 31, 0x2E6D44u);
    ctx->pc = 0x2E6D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6D3Cu;
            // 0x2e6d40: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D44u; }
        if (ctx->pc != 0x2E6D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D44u; }
        if (ctx->pc != 0x2E6D44u) { return; }
    }
    ctx->pc = 0x2E6D44u;
label_2e6d44:
    // 0x2e6d44: 0xc6ac003c  lwc1        $f12, 0x3C($s5)
    ctx->pc = 0x2e6d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e6d48: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2e6d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e6d4c: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x2E6D4Cu;
    SET_GPR_U32(ctx, 31, 0x2E6D54u);
    ctx->pc = 0x2E6D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6D4Cu;
            // 0x2e6d50: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D54u; }
        if (ctx->pc != 0x2E6D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D54u; }
        if (ctx->pc != 0x2E6D54u) { return; }
    }
    ctx->pc = 0x2E6D54u;
label_2e6d54:
    // 0x2e6d54: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x2e6d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6d58: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2e6d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e6d5c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2e6d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6d60: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2e6d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6d64: 0x46001307  neg.s       $f12, $f2
    ctx->pc = 0x2e6d64u;
    ctx->f[12] = FPU_NEG_S(ctx->f[2]);
    // 0x2e6d68: 0x46000b47  neg.s       $f13, $f1
    ctx->pc = 0x2e6d68u;
    ctx->f[13] = FPU_NEG_S(ctx->f[1]);
    // 0x2e6d6c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2E6D6Cu;
    SET_GPR_U32(ctx, 31, 0x2E6D74u);
    ctx->pc = 0x2E6D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6D6Cu;
            // 0x2e6d70: 0x46000387  neg.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D74u; }
        if (ctx->pc != 0x2E6D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D74u; }
        if (ctx->pc != 0x2E6D74u) { return; }
    }
    ctx->pc = 0x2E6D74u;
label_2e6d74:
    // 0x2e6d74: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x2e6d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6d78: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2e6d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x2e6d7c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2e6d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6d80: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e6d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e6d84: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2e6d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6d88: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2e6d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2e6d8c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2e6d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e6d90: 0x0  nop
    ctx->pc = 0x2e6d90u;
    // NOP
    // 0x2e6d94: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2e6d94u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2e6d98: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e6d98u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e6d9c: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x2e6d9cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2e6da0: 0x46011b42  mul.s       $f13, $f3, $f1
    ctx->pc = 0x2e6da0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2e6da4: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2E6DA4u;
    SET_GPR_U32(ctx, 31, 0x2E6DACu);
    ctx->pc = 0x2E6DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6DA4u;
            // 0x2e6da8: 0x46001b82  mul.s       $f14, $f3, $f0 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6DACu; }
        if (ctx->pc != 0x2E6DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6DACu; }
        if (ctx->pc != 0x2E6DACu) { return; }
    }
    ctx->pc = 0x2E6DACu;
label_2e6dac:
    // 0x2e6dac: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2e6dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6db0: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2e6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x2e6db4: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x2e6db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6db8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e6db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e6dbc: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2e6dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6dc0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2e6dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2e6dc4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2e6dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e6dc8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2e6dc8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2e6dcc: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x2e6dccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2e6dd0: 0x46011b42  mul.s       $f13, $f3, $f1
    ctx->pc = 0x2e6dd0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2e6dd4: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2E6DD4u;
    SET_GPR_U32(ctx, 31, 0x2E6DDCu);
    ctx->pc = 0x2E6DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6DD4u;
            // 0x2e6dd8: 0x46001b82  mul.s       $f14, $f3, $f0 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6DDCu; }
        if (ctx->pc != 0x2E6DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6DDCu; }
        if (ctx->pc != 0x2E6DDCu) { return; }
    }
    ctx->pc = 0x2E6DDCu;
label_2e6ddc:
    // 0x2e6ddc: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x2e6ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e6de0: 0xc7ad00a4  lwc1        $f13, 0xA4($sp)
    ctx->pc = 0x2e6de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e6de4: 0xc7ae00a8  lwc1        $f14, 0xA8($sp)
    ctx->pc = 0x2e6de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e6de8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2E6DE8u;
    SET_GPR_U32(ctx, 31, 0x2E6DF0u);
    ctx->pc = 0x2E6DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6DE8u;
            // 0x2e6dec: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6DF0u; }
        if (ctx->pc != 0x2E6DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6DF0u; }
        if (ctx->pc != 0x2E6DF0u) { return; }
    }
    ctx->pc = 0x2E6DF0u;
label_2e6df0:
    // 0x2e6df0: 0x12c0001d  beqz        $s6, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E6DF0u;
    {
        const bool branch_taken_0x2e6df0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6df0) {
            ctx->pc = 0x2E6E68u;
            goto label_2e6e68;
        }
    }
    ctx->pc = 0x2E6DF8u;
    // 0x2e6df8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2e6df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2e6dfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e6dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6e00: 0xc04cd60  jal         func_133580
    ctx->pc = 0x2E6E00u;
    SET_GPR_U32(ctx, 31, 0x2E6E08u);
    ctx->pc = 0x2E6E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6E00u;
            // 0x2e6e04: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E08u; }
        if (ctx->pc != 0x2E6E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E08u; }
        if (ctx->pc != 0x2E6E08u) { return; }
    }
    ctx->pc = 0x2E6E08u;
label_2e6e08:
    // 0x2e6e08: 0x8ea60048  lw          $a2, 0x48($s5)
    ctx->pc = 0x2e6e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x2e6e0c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2e6e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2e6e10: 0x8ea7004c  lw          $a3, 0x4C($s5)
    ctx->pc = 0x2e6e10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x2e6e14: 0x8ea80050  lw          $t0, 0x50($s5)
    ctx->pc = 0x2e6e14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x2e6e18: 0xc04ce30  jal         func_1338C0
    ctx->pc = 0x2E6E18u;
    SET_GPR_U32(ctx, 31, 0x2E6E20u);
    ctx->pc = 0x2E6E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6E18u;
            // 0x2e6e1c: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1338C0u;
    if (runtime->hasFunction(0x1338C0u)) {
        auto targetFn = runtime->lookupFunction(0x1338C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E20u; }
        if (ctx->pc != 0x2E6E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001338C0_0x1338c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E20u; }
        if (ctx->pc != 0x2E6E20u) { return; }
    }
    ctx->pc = 0x2E6E20u;
label_2e6e20:
    // 0x2e6e20: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2e6e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2e6e24: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2e6e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2e6e28: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E6E28u;
    SET_GPR_U32(ctx, 31, 0x2E6E30u);
    ctx->pc = 0x2E6E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6E28u;
            // 0x2e6e2c: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E30u; }
        if (ctx->pc != 0x2E6E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E30u; }
        if (ctx->pc != 0x2E6E30u) { return; }
    }
    ctx->pc = 0x2E6E30u;
label_2e6e30:
    // 0x2e6e30: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2e6e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e6e34: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2e6e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2e6e38: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E6E38u;
    SET_GPR_U32(ctx, 31, 0x2E6E40u);
    ctx->pc = 0x2E6E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6E38u;
            // 0x2e6e3c: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E40u; }
        if (ctx->pc != 0x2E6E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E40u; }
        if (ctx->pc != 0x2E6E40u) { return; }
    }
    ctx->pc = 0x2E6E40u;
label_2e6e40:
    // 0x2e6e40: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e6e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e6e44: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2e6e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2e6e48: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E6E48u;
    SET_GPR_U32(ctx, 31, 0x2E6E50u);
    ctx->pc = 0x2E6E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6E48u;
            // 0x2e6e4c: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E50u; }
        if (ctx->pc != 0x2E6E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E50u; }
        if (ctx->pc != 0x2E6E50u) { return; }
    }
    ctx->pc = 0x2E6E50u;
label_2e6e50:
    // 0x2e6e50: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2e6e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2e6e54: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2e6e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2e6e58: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E6E58u;
    SET_GPR_U32(ctx, 31, 0x2E6E60u);
    ctx->pc = 0x2E6E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6E58u;
            // 0x2e6e5c: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E60u; }
        if (ctx->pc != 0x2E6E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E60u; }
        if (ctx->pc != 0x2E6E60u) { return; }
    }
    ctx->pc = 0x2E6E60u;
label_2e6e60:
    // 0x2e6e60: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E6E60u;
    {
        const bool branch_taken_0x2e6e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6e60) {
            ctx->pc = 0x2E6EB8u;
            goto label_2e6eb8;
        }
    }
    ctx->pc = 0x2E6E68u;
label_2e6e68:
    // 0x2e6e68: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2e6e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2e6e6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e6e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6e70: 0xc04cd60  jal         func_133580
    ctx->pc = 0x2E6E70u;
    SET_GPR_U32(ctx, 31, 0x2E6E78u);
    ctx->pc = 0x2E6E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6E70u;
            // 0x2e6e74: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E78u; }
        if (ctx->pc != 0x2E6E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E78u; }
        if (ctx->pc != 0x2E6E78u) { return; }
    }
    ctx->pc = 0x2E6E78u;
label_2e6e78:
    // 0x2e6e78: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2e6e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2e6e7c: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x2e6e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2e6e80: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E6E80u;
    SET_GPR_U32(ctx, 31, 0x2E6E88u);
    ctx->pc = 0x2E6E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6E80u;
            // 0x2e6e84: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E88u; }
        if (ctx->pc != 0x2E6E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E88u; }
        if (ctx->pc != 0x2E6E88u) { return; }
    }
    ctx->pc = 0x2E6E88u;
label_2e6e88:
    // 0x2e6e88: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2e6e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e6e8c: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x2e6e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2e6e90: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E6E90u;
    SET_GPR_U32(ctx, 31, 0x2E6E98u);
    ctx->pc = 0x2E6E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6E90u;
            // 0x2e6e94: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E98u; }
        if (ctx->pc != 0x2E6E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E98u; }
        if (ctx->pc != 0x2E6E98u) { return; }
    }
    ctx->pc = 0x2E6E98u;
label_2e6e98:
    // 0x2e6e98: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e6e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e6e9c: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x2e6e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2e6ea0: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E6EA0u;
    SET_GPR_U32(ctx, 31, 0x2E6EA8u);
    ctx->pc = 0x2E6EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6EA0u;
            // 0x2e6ea4: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6EA8u; }
        if (ctx->pc != 0x2E6EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6EA8u; }
        if (ctx->pc != 0x2E6EA8u) { return; }
    }
    ctx->pc = 0x2E6EA8u;
label_2e6ea8:
    // 0x2e6ea8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2e6ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2e6eac: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x2e6eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2e6eb0: 0xc04cca0  jal         func_133280
    ctx->pc = 0x2E6EB0u;
    SET_GPR_U32(ctx, 31, 0x2E6EB8u);
    ctx->pc = 0x2E6EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6EB0u;
            // 0x2e6eb4: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6EB8u; }
        if (ctx->pc != 0x2E6EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6EB8u; }
        if (ctx->pc != 0x2E6EB8u) { return; }
    }
    ctx->pc = 0x2E6EB8u;
label_2e6eb8:
    // 0x2e6eb8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2e6eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x2e6ebc: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2e6ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6ec0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e6ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e6ec4: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x2e6ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6ec8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e6ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e6ecc: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2e6eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6ed0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e6ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6ed4: 0xe460e764  swc1        $f0, -0x189C($v1)
    ctx->pc = 0x2e6ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294960996), bits); }
    // 0x2e6ed8: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2e6ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6edc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e6edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e6ee0: 0xe442e760  swc1        $f2, -0x18A0($v0)
    ctx->pc = 0x2e6ee0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294960992), bits); }
    // 0x2e6ee4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e6ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e6ee8: 0xe460e770  swc1        $f0, -0x1890($v1)
    ctx->pc = 0x2e6ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961008), bits); }
    // 0x2e6eec: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2e6eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6ef0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e6ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e6ef4: 0xe441e768  swc1        $f1, -0x1898($v0)
    ctx->pc = 0x2e6ef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294961000), bits); }
    // 0x2e6ef8: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x2e6ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6efc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e6efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e6f00: 0xe460e778  swc1        $f0, -0x1888($v1)
    ctx->pc = 0x2e6f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961016), bits); }
    // 0x2e6f04: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2e6f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6f08: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e6f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e6f0c: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x2e6f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6f10: 0xe442e774  swc1        $f2, -0x188C($v0)
    ctx->pc = 0x2e6f10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294961012), bits); }
    // 0x2e6f14: 0xe460e784  swc1        $f0, -0x187C($v1)
    ctx->pc = 0x2e6f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961028), bits); }
    // 0x2e6f18: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e6f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e6f1c: 0xe441e780  swc1        $f1, -0x1880($v0)
    ctx->pc = 0x2e6f1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294961024), bits); }
    // 0x2e6f20: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e6f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e6f24: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x2e6f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6f28: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e6f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e6f2c: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x2e6f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6f30: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x2e6f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6f34: 0xe460e790  swc1        $f0, -0x1870($v1)
    ctx->pc = 0x2e6f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961040), bits); }
    // 0x2e6f38: 0xe442e788  swc1        $f2, -0x1878($v0)
    ctx->pc = 0x2e6f38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294961032), bits); }
    // 0x2e6f3c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e6f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e6f40: 0xe441e794  swc1        $f1, -0x186C($v0)
    ctx->pc = 0x2e6f40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294961044), bits); }
    // 0x2e6f44: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x2e6f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6f48: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e6f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e6f4c: 0xe440e798  swc1        $f0, -0x1868($v0)
    ctx->pc = 0x2e6f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294961048), bits); }
    // 0x2e6f50: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e6f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e6f54: 0x8c46e7a0  lw          $a2, -0x1860($v0)
    ctx->pc = 0x2e6f54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961056)));
    // 0x2e6f58: 0xc050a08  jal         func_142820
    ctx->pc = 0x2E6F58u;
    SET_GPR_U32(ctx, 31, 0x2E6F60u);
    ctx->pc = 0x2E6F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6F58u;
            // 0x2e6f5c: 0x24a5e760  addiu       $a1, $a1, -0x18A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (runtime->hasFunction(0x142820u)) {
        auto targetFn = runtime->lookupFunction(0x142820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6F60u; }
        if (ctx->pc != 0x2E6F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142820_0x142820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6F60u; }
        if (ctx->pc != 0x2E6F60u) { return; }
    }
    ctx->pc = 0x2E6F60u;
label_2e6f60:
    // 0x2e6f60: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x2e6f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x2e6f64: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2e6f64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2e6f68: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x2e6f68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2e6f6c: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x2e6f6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e6f70: 0x1460ff4d  bnez        $v1, . + 4 + (-0xB3 << 2)
    ctx->pc = 0x2E6F70u;
    {
        const bool branch_taken_0x2e6f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6F70u;
            // 0x2e6f74: 0x26b50060  addiu       $s5, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f70) {
            ctx->pc = 0x2E6CA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e6ca8;
        }
    }
    ctx->pc = 0x2E6F78u;
label_2e6f78:
    // 0x2e6f78: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6F78u;
    {
        const bool branch_taken_0x2e6f78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6f78) {
            ctx->pc = 0x2E6F88u;
            goto label_2e6f88;
        }
    }
    ctx->pc = 0x2E6F80u;
    // 0x2e6f80: 0xc050a88  jal         func_142A20
    ctx->pc = 0x2E6F80u;
    SET_GPR_U32(ctx, 31, 0x2E6F88u);
    ctx->pc = 0x142A20u;
    if (runtime->hasFunction(0x142A20u)) {
        auto targetFn = runtime->lookupFunction(0x142A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6F88u; }
        if (ctx->pc != 0x2E6F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142A20_0x142a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6F88u; }
        if (ctx->pc != 0x2E6F88u) { return; }
    }
    ctx->pc = 0x2E6F88u;
label_2e6f88:
    // 0x2e6f88: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e6f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2e6f8c:
    // 0x2e6f8c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2e6f8cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e6f90: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2e6f90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e6f94: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e6f94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e6f98: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e6f98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e6f9c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e6f9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e6fa0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e6fa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6fa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e6fa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6fa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e6fa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6fac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e6facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6FB0u;
            // 0x2e6fb4: 0x27bd06e0  addiu       $sp, $sp, 0x6E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1760));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E6FB8u;
    // 0x2e6fb8: 0x0  nop
    ctx->pc = 0x2e6fb8u;
    // NOP
    // 0x2e6fbc: 0x0  nop
    ctx->pc = 0x2e6fbcu;
    // NOP
}
