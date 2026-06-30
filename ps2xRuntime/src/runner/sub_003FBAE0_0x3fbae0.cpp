#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003FBAE0
// Address: 0x3fbae0 - 0x3fbd70
void sub_003FBAE0_0x3fbae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FBAE0_0x3fbae0");
#endif

    switch (ctx->pc) {
        case 0x3fbae0u: goto label_3fbae0;
        case 0x3fbae4u: goto label_3fbae4;
        case 0x3fbae8u: goto label_3fbae8;
        case 0x3fbaecu: goto label_3fbaec;
        case 0x3fbaf0u: goto label_3fbaf0;
        case 0x3fbaf4u: goto label_3fbaf4;
        case 0x3fbaf8u: goto label_3fbaf8;
        case 0x3fbafcu: goto label_3fbafc;
        case 0x3fbb00u: goto label_3fbb00;
        case 0x3fbb04u: goto label_3fbb04;
        case 0x3fbb08u: goto label_3fbb08;
        case 0x3fbb0cu: goto label_3fbb0c;
        case 0x3fbb10u: goto label_3fbb10;
        case 0x3fbb14u: goto label_3fbb14;
        case 0x3fbb18u: goto label_3fbb18;
        case 0x3fbb1cu: goto label_3fbb1c;
        case 0x3fbb20u: goto label_3fbb20;
        case 0x3fbb24u: goto label_3fbb24;
        case 0x3fbb28u: goto label_3fbb28;
        case 0x3fbb2cu: goto label_3fbb2c;
        case 0x3fbb30u: goto label_3fbb30;
        case 0x3fbb34u: goto label_3fbb34;
        case 0x3fbb38u: goto label_3fbb38;
        case 0x3fbb3cu: goto label_3fbb3c;
        case 0x3fbb40u: goto label_3fbb40;
        case 0x3fbb44u: goto label_3fbb44;
        case 0x3fbb48u: goto label_3fbb48;
        case 0x3fbb4cu: goto label_3fbb4c;
        case 0x3fbb50u: goto label_3fbb50;
        case 0x3fbb54u: goto label_3fbb54;
        case 0x3fbb58u: goto label_3fbb58;
        case 0x3fbb5cu: goto label_3fbb5c;
        case 0x3fbb60u: goto label_3fbb60;
        case 0x3fbb64u: goto label_3fbb64;
        case 0x3fbb68u: goto label_3fbb68;
        case 0x3fbb6cu: goto label_3fbb6c;
        case 0x3fbb70u: goto label_3fbb70;
        case 0x3fbb74u: goto label_3fbb74;
        case 0x3fbb78u: goto label_3fbb78;
        case 0x3fbb7cu: goto label_3fbb7c;
        case 0x3fbb80u: goto label_3fbb80;
        case 0x3fbb84u: goto label_3fbb84;
        case 0x3fbb88u: goto label_3fbb88;
        case 0x3fbb8cu: goto label_3fbb8c;
        case 0x3fbb90u: goto label_3fbb90;
        case 0x3fbb94u: goto label_3fbb94;
        case 0x3fbb98u: goto label_3fbb98;
        case 0x3fbb9cu: goto label_3fbb9c;
        case 0x3fbba0u: goto label_3fbba0;
        case 0x3fbba4u: goto label_3fbba4;
        case 0x3fbba8u: goto label_3fbba8;
        case 0x3fbbacu: goto label_3fbbac;
        case 0x3fbbb0u: goto label_3fbbb0;
        case 0x3fbbb4u: goto label_3fbbb4;
        case 0x3fbbb8u: goto label_3fbbb8;
        case 0x3fbbbcu: goto label_3fbbbc;
        case 0x3fbbc0u: goto label_3fbbc0;
        case 0x3fbbc4u: goto label_3fbbc4;
        case 0x3fbbc8u: goto label_3fbbc8;
        case 0x3fbbccu: goto label_3fbbcc;
        case 0x3fbbd0u: goto label_3fbbd0;
        case 0x3fbbd4u: goto label_3fbbd4;
        case 0x3fbbd8u: goto label_3fbbd8;
        case 0x3fbbdcu: goto label_3fbbdc;
        case 0x3fbbe0u: goto label_3fbbe0;
        case 0x3fbbe4u: goto label_3fbbe4;
        case 0x3fbbe8u: goto label_3fbbe8;
        case 0x3fbbecu: goto label_3fbbec;
        case 0x3fbbf0u: goto label_3fbbf0;
        case 0x3fbbf4u: goto label_3fbbf4;
        case 0x3fbbf8u: goto label_3fbbf8;
        case 0x3fbbfcu: goto label_3fbbfc;
        case 0x3fbc00u: goto label_3fbc00;
        case 0x3fbc04u: goto label_3fbc04;
        case 0x3fbc08u: goto label_3fbc08;
        case 0x3fbc0cu: goto label_3fbc0c;
        case 0x3fbc10u: goto label_3fbc10;
        case 0x3fbc14u: goto label_3fbc14;
        case 0x3fbc18u: goto label_3fbc18;
        case 0x3fbc1cu: goto label_3fbc1c;
        case 0x3fbc20u: goto label_3fbc20;
        case 0x3fbc24u: goto label_3fbc24;
        case 0x3fbc28u: goto label_3fbc28;
        case 0x3fbc2cu: goto label_3fbc2c;
        case 0x3fbc30u: goto label_3fbc30;
        case 0x3fbc34u: goto label_3fbc34;
        case 0x3fbc38u: goto label_3fbc38;
        case 0x3fbc3cu: goto label_3fbc3c;
        case 0x3fbc40u: goto label_3fbc40;
        case 0x3fbc44u: goto label_3fbc44;
        case 0x3fbc48u: goto label_3fbc48;
        case 0x3fbc4cu: goto label_3fbc4c;
        case 0x3fbc50u: goto label_3fbc50;
        case 0x3fbc54u: goto label_3fbc54;
        case 0x3fbc58u: goto label_3fbc58;
        case 0x3fbc5cu: goto label_3fbc5c;
        case 0x3fbc60u: goto label_3fbc60;
        case 0x3fbc64u: goto label_3fbc64;
        case 0x3fbc68u: goto label_3fbc68;
        case 0x3fbc6cu: goto label_3fbc6c;
        case 0x3fbc70u: goto label_3fbc70;
        case 0x3fbc74u: goto label_3fbc74;
        case 0x3fbc78u: goto label_3fbc78;
        case 0x3fbc7cu: goto label_3fbc7c;
        case 0x3fbc80u: goto label_3fbc80;
        case 0x3fbc84u: goto label_3fbc84;
        case 0x3fbc88u: goto label_3fbc88;
        case 0x3fbc8cu: goto label_3fbc8c;
        case 0x3fbc90u: goto label_3fbc90;
        case 0x3fbc94u: goto label_3fbc94;
        case 0x3fbc98u: goto label_3fbc98;
        case 0x3fbc9cu: goto label_3fbc9c;
        case 0x3fbca0u: goto label_3fbca0;
        case 0x3fbca4u: goto label_3fbca4;
        case 0x3fbca8u: goto label_3fbca8;
        case 0x3fbcacu: goto label_3fbcac;
        case 0x3fbcb0u: goto label_3fbcb0;
        case 0x3fbcb4u: goto label_3fbcb4;
        case 0x3fbcb8u: goto label_3fbcb8;
        case 0x3fbcbcu: goto label_3fbcbc;
        case 0x3fbcc0u: goto label_3fbcc0;
        case 0x3fbcc4u: goto label_3fbcc4;
        case 0x3fbcc8u: goto label_3fbcc8;
        case 0x3fbcccu: goto label_3fbccc;
        case 0x3fbcd0u: goto label_3fbcd0;
        case 0x3fbcd4u: goto label_3fbcd4;
        case 0x3fbcd8u: goto label_3fbcd8;
        case 0x3fbcdcu: goto label_3fbcdc;
        case 0x3fbce0u: goto label_3fbce0;
        case 0x3fbce4u: goto label_3fbce4;
        case 0x3fbce8u: goto label_3fbce8;
        case 0x3fbcecu: goto label_3fbcec;
        case 0x3fbcf0u: goto label_3fbcf0;
        case 0x3fbcf4u: goto label_3fbcf4;
        case 0x3fbcf8u: goto label_3fbcf8;
        case 0x3fbcfcu: goto label_3fbcfc;
        case 0x3fbd00u: goto label_3fbd00;
        case 0x3fbd04u: goto label_3fbd04;
        case 0x3fbd08u: goto label_3fbd08;
        case 0x3fbd0cu: goto label_3fbd0c;
        case 0x3fbd10u: goto label_3fbd10;
        case 0x3fbd14u: goto label_3fbd14;
        case 0x3fbd18u: goto label_3fbd18;
        case 0x3fbd1cu: goto label_3fbd1c;
        case 0x3fbd20u: goto label_3fbd20;
        case 0x3fbd24u: goto label_3fbd24;
        case 0x3fbd28u: goto label_3fbd28;
        case 0x3fbd2cu: goto label_3fbd2c;
        case 0x3fbd30u: goto label_3fbd30;
        case 0x3fbd34u: goto label_3fbd34;
        case 0x3fbd38u: goto label_3fbd38;
        case 0x3fbd3cu: goto label_3fbd3c;
        case 0x3fbd40u: goto label_3fbd40;
        case 0x3fbd44u: goto label_3fbd44;
        case 0x3fbd48u: goto label_3fbd48;
        case 0x3fbd4cu: goto label_3fbd4c;
        case 0x3fbd50u: goto label_3fbd50;
        case 0x3fbd54u: goto label_3fbd54;
        case 0x3fbd58u: goto label_3fbd58;
        case 0x3fbd5cu: goto label_3fbd5c;
        case 0x3fbd60u: goto label_3fbd60;
        case 0x3fbd64u: goto label_3fbd64;
        case 0x3fbd68u: goto label_3fbd68;
        case 0x3fbd6cu: goto label_3fbd6c;
        default: break;
    }

    ctx->pc = 0x3fbae0u;

label_3fbae0:
    // 0x3fbae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3fbae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3fbae4:
    // 0x3fbae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3fbae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3fbae8:
    // 0x3fbae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3fbae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3fbaec:
    // 0x3fbaec: 0xc0aeebc  jal         func_2BBAF0
label_3fbaf0:
    if (ctx->pc == 0x3FBAF0u) {
        ctx->pc = 0x3FBAF0u;
            // 0x3fbaf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FBAF4u;
        goto label_3fbaf4;
    }
    ctx->pc = 0x3FBAECu;
    SET_GPR_U32(ctx, 31, 0x3FBAF4u);
    ctx->pc = 0x3FBAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBAECu;
            // 0x3fbaf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBAF4u; }
        if (ctx->pc != 0x3FBAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBAF4u; }
        if (ctx->pc != 0x3FBAF4u) { return; }
    }
    ctx->pc = 0x3FBAF4u;
label_3fbaf4:
    // 0x3fbaf4: 0xc0aeeb4  jal         func_2BBAD0
label_3fbaf8:
    if (ctx->pc == 0x3FBAF8u) {
        ctx->pc = 0x3FBAF8u;
            // 0x3fbaf8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x3FBAFCu;
        goto label_3fbafc;
    }
    ctx->pc = 0x3FBAF4u;
    SET_GPR_U32(ctx, 31, 0x3FBAFCu);
    ctx->pc = 0x3FBAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBAF4u;
            // 0x3fbaf8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBAFCu; }
        if (ctx->pc != 0x3FBAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBAFCu; }
        if (ctx->pc != 0x3FBAFCu) { return; }
    }
    ctx->pc = 0x3FBAFCu;
label_3fbafc:
    // 0x3fbafc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3fbafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3fbb00:
    // 0x3fbb00: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3fbb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3fbb04:
    // 0x3fbb04: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x3fbb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_3fbb08:
    // 0x3fbb08: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x3fbb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_3fbb0c:
    // 0x3fbb0c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3fbb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3fbb10:
    // 0x3fbb10: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x3fbb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_3fbb14:
    // 0x3fbb14: 0xc0aeea4  jal         func_2BBA90
label_3fbb18:
    if (ctx->pc == 0x3FBB18u) {
        ctx->pc = 0x3FBB18u;
            // 0x3fbb18: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x3FBB1Cu;
        goto label_3fbb1c;
    }
    ctx->pc = 0x3FBB14u;
    SET_GPR_U32(ctx, 31, 0x3FBB1Cu);
    ctx->pc = 0x3FBB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBB14u;
            // 0x3fbb18: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBB1Cu; }
        if (ctx->pc != 0x3FBB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBB1Cu; }
        if (ctx->pc != 0x3FBB1Cu) { return; }
    }
    ctx->pc = 0x3FBB1Cu;
label_3fbb1c:
    // 0x3fbb1c: 0xc0aee8c  jal         func_2BBA30
label_3fbb20:
    if (ctx->pc == 0x3FBB20u) {
        ctx->pc = 0x3FBB20u;
            // 0x3fbb20: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x3FBB24u;
        goto label_3fbb24;
    }
    ctx->pc = 0x3FBB1Cu;
    SET_GPR_U32(ctx, 31, 0x3FBB24u);
    ctx->pc = 0x3FBB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBB1Cu;
            // 0x3fbb20: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBB24u; }
        if (ctx->pc != 0x3FBB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBB24u; }
        if (ctx->pc != 0x3FBB24u) { return; }
    }
    ctx->pc = 0x3FBB24u;
label_3fbb24:
    // 0x3fbb24: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x3fbb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_3fbb28:
    // 0x3fbb28: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x3fbb28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_3fbb2c:
    // 0x3fbb2c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x3fbb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_3fbb30:
    // 0x3fbb30: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x3fbb30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_3fbb34:
    // 0x3fbb34: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x3fbb34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_3fbb38:
    // 0x3fbb38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3fbb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fbb3c:
    // 0x3fbb3c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x3fbb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_3fbb40:
    // 0x3fbb40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3fbb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3fbb44:
    // 0x3fbb44: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x3fbb44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_3fbb48:
    // 0x3fbb48: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x3fbb48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_3fbb4c:
    // 0x3fbb4c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x3fbb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_3fbb50:
    // 0x3fbb50: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x3fbb50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_3fbb54:
    // 0x3fbb54: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x3fbb54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_3fbb58:
    // 0x3fbb58: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x3fbb58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_3fbb5c:
    // 0x3fbb5c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x3fbb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_3fbb60:
    // 0x3fbb60: 0xc0775b8  jal         func_1DD6E0
label_3fbb64:
    if (ctx->pc == 0x3FBB64u) {
        ctx->pc = 0x3FBB64u;
            // 0x3fbb64: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3FBB68u;
        goto label_3fbb68;
    }
    ctx->pc = 0x3FBB60u;
    SET_GPR_U32(ctx, 31, 0x3FBB68u);
    ctx->pc = 0x3FBB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBB60u;
            // 0x3fbb64: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBB68u; }
        if (ctx->pc != 0x3FBB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBB68u; }
        if (ctx->pc != 0x3FBB68u) { return; }
    }
    ctx->pc = 0x3FBB68u;
label_3fbb68:
    // 0x3fbb68: 0xc077314  jal         func_1DCC50
label_3fbb6c:
    if (ctx->pc == 0x3FBB6Cu) {
        ctx->pc = 0x3FBB6Cu;
            // 0x3fbb6c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3FBB70u;
        goto label_3fbb70;
    }
    ctx->pc = 0x3FBB68u;
    SET_GPR_U32(ctx, 31, 0x3FBB70u);
    ctx->pc = 0x3FBB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBB68u;
            // 0x3fbb6c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBB70u; }
        if (ctx->pc != 0x3FBB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBB70u; }
        if (ctx->pc != 0x3FBB70u) { return; }
    }
    ctx->pc = 0x3FBB70u;
label_3fbb70:
    // 0x3fbb70: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3fbb70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_3fbb74:
    // 0x3fbb74: 0x8e0700c8  lw          $a3, 0xC8($s0)
    ctx->pc = 0x3fbb74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_3fbb78:
    // 0x3fbb78: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x3fbb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_3fbb7c:
    // 0x3fbb7c: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x3fbb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_3fbb80:
    // 0x3fbb80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3fbb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fbb84:
    // 0x3fbb84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3fbb84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fbb88:
    // 0x3fbb88: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x3fbb88u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3fbb8c:
    // 0x3fbb8c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3fbb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3fbb90:
    // 0x3fbb90: 0x2463a3d0  addiu       $v1, $v1, -0x5C30
    ctx->pc = 0x3fbb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943696));
label_3fbb94:
    // 0x3fbb94: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3fbb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3fbb98:
    // 0x3fbb98: 0xe83818  mult        $a3, $a3, $t0
    ctx->pc = 0x3fbb98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_3fbb9c:
    // 0x3fbb9c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3fbb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3fbba0:
    // 0x3fbba0: 0x2442a410  addiu       $v0, $v0, -0x5BF0
    ctx->pc = 0x3fbba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943760));
label_3fbba4:
    // 0x3fbba4: 0xae0700c8  sw          $a3, 0xC8($s0)
    ctx->pc = 0x3fbba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 7));
label_3fbba8:
    // 0x3fbba8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3fbba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3fbbac:
    // 0x3fbbac: 0xc04a576  jal         func_1295D8
label_3fbbb0:
    if (ctx->pc == 0x3FBBB0u) {
        ctx->pc = 0x3FBBB0u;
            // 0x3fbbb0: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x3FBBB4u;
        goto label_3fbbb4;
    }
    ctx->pc = 0x3FBBACu;
    SET_GPR_U32(ctx, 31, 0x3FBBB4u);
    ctx->pc = 0x3FBBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBBACu;
            // 0x3fbbb0: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBBB4u; }
        if (ctx->pc != 0x3FBBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBBB4u; }
        if (ctx->pc != 0x3FBBB4u) { return; }
    }
    ctx->pc = 0x3FBBB4u;
label_3fbbb4:
    // 0x3fbbb4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3fbbb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fbbb8:
    // 0x3fbbb8: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x3fbbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_3fbbbc:
    // 0x3fbbbc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3fbbbcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3fbbc0:
    // 0x3fbbc0: 0xc04cbd8  jal         func_132F60
label_3fbbc4:
    if (ctx->pc == 0x3FBBC4u) {
        ctx->pc = 0x3FBBC4u;
            // 0x3fbbc4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3FBBC8u;
        goto label_3fbbc8;
    }
    ctx->pc = 0x3FBBC0u;
    SET_GPR_U32(ctx, 31, 0x3FBBC8u);
    ctx->pc = 0x3FBBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBBC0u;
            // 0x3fbbc4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBBC8u; }
        if (ctx->pc != 0x3FBBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBBC8u; }
        if (ctx->pc != 0x3FBBC8u) { return; }
    }
    ctx->pc = 0x3FBBC8u;
label_3fbbc8:
    // 0x3fbbc8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3fbbc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fbbcc:
    // 0x3fbbcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3fbbccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3fbbd0:
    // 0x3fbbd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3fbbd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fbbd4:
    // 0x3fbbd4: 0x3e00008  jr          $ra
label_3fbbd8:
    if (ctx->pc == 0x3FBBD8u) {
        ctx->pc = 0x3FBBD8u;
            // 0x3fbbd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3FBBDCu;
        goto label_3fbbdc;
    }
    ctx->pc = 0x3FBBD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FBBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBBD4u;
            // 0x3fbbd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FBBDCu;
label_3fbbdc:
    // 0x3fbbdc: 0x0  nop
    ctx->pc = 0x3fbbdcu;
    // NOP
label_3fbbe0:
    // 0x3fbbe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3fbbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3fbbe4:
    // 0x3fbbe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3fbbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3fbbe8:
    // 0x3fbbe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3fbbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3fbbec:
    // 0x3fbbec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3fbbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3fbbf0:
    // 0x3fbbf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3fbbf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fbbf4:
    // 0x3fbbf4: 0x12200040  beqz        $s1, . + 4 + (0x40 << 2)
label_3fbbf8:
    if (ctx->pc == 0x3FBBF8u) {
        ctx->pc = 0x3FBBF8u;
            // 0x3fbbf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FBBFCu;
        goto label_3fbbfc;
    }
    ctx->pc = 0x3FBBF4u;
    {
        const bool branch_taken_0x3fbbf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBBF4u;
            // 0x3fbbf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbbf4) {
            ctx->pc = 0x3FBCF8u;
            goto label_3fbcf8;
        }
    }
    ctx->pc = 0x3FBBFCu;
label_3fbbfc:
    // 0x3fbbfc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3fbbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3fbc00:
    // 0x3fbc00: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3fbc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3fbc04:
    // 0x3fbc04: 0x2463a470  addiu       $v1, $v1, -0x5B90
    ctx->pc = 0x3fbc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943856));
label_3fbc08:
    // 0x3fbc08: 0x2442a4b0  addiu       $v0, $v0, -0x5B50
    ctx->pc = 0x3fbc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943920));
label_3fbc0c:
    // 0x3fbc0c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3fbc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3fbc10:
    // 0x3fbc10: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3fbc10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3fbc14:
    // 0x3fbc14: 0x8e2400e4  lw          $a0, 0xE4($s1)
    ctx->pc = 0x3fbc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_3fbc18:
    // 0x3fbc18: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3fbc1c:
    if (ctx->pc == 0x3FBC1Cu) {
        ctx->pc = 0x3FBC1Cu;
            // 0x3fbc1c: 0x8e24010c  lw          $a0, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->pc = 0x3FBC20u;
        goto label_3fbc20;
    }
    ctx->pc = 0x3FBC18u;
    {
        const bool branch_taken_0x3fbc18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fbc18) {
            ctx->pc = 0x3FBC1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBC18u;
            // 0x3fbc1c: 0x8e24010c  lw          $a0, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FBC2Cu;
            goto label_3fbc2c;
        }
    }
    ctx->pc = 0x3FBC20u;
label_3fbc20:
    // 0x3fbc20: 0xc04008c  jal         func_100230
label_3fbc24:
    if (ctx->pc == 0x3FBC24u) {
        ctx->pc = 0x3FBC28u;
        goto label_3fbc28;
    }
    ctx->pc = 0x3FBC20u;
    SET_GPR_U32(ctx, 31, 0x3FBC28u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBC28u; }
        if (ctx->pc != 0x3FBC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBC28u; }
        if (ctx->pc != 0x3FBC28u) { return; }
    }
    ctx->pc = 0x3FBC28u;
label_3fbc28:
    // 0x3fbc28: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x3fbc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_3fbc2c:
    // 0x3fbc2c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3fbc30:
    if (ctx->pc == 0x3FBC30u) {
        ctx->pc = 0x3FBC30u;
            // 0x3fbc30: 0x8e240110  lw          $a0, 0x110($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
        ctx->pc = 0x3FBC34u;
        goto label_3fbc34;
    }
    ctx->pc = 0x3FBC2Cu;
    {
        const bool branch_taken_0x3fbc2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fbc2c) {
            ctx->pc = 0x3FBC30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBC2Cu;
            // 0x3fbc30: 0x8e240110  lw          $a0, 0x110($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FBC48u;
            goto label_3fbc48;
        }
    }
    ctx->pc = 0x3FBC34u;
label_3fbc34:
    // 0x3fbc34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3fbc34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3fbc38:
    // 0x3fbc38: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3fbc38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3fbc3c:
    // 0x3fbc3c: 0x320f809  jalr        $t9
label_3fbc40:
    if (ctx->pc == 0x3FBC40u) {
        ctx->pc = 0x3FBC40u;
            // 0x3fbc40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FBC44u;
        goto label_3fbc44;
    }
    ctx->pc = 0x3FBC3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FBC44u);
        ctx->pc = 0x3FBC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBC3Cu;
            // 0x3fbc40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FBC44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FBC44u; }
            if (ctx->pc != 0x3FBC44u) { return; }
        }
        }
    }
    ctx->pc = 0x3FBC44u;
label_3fbc44:
    // 0x3fbc44: 0x8e240110  lw          $a0, 0x110($s1)
    ctx->pc = 0x3fbc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_3fbc48:
    // 0x3fbc48: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3fbc4c:
    if (ctx->pc == 0x3FBC4Cu) {
        ctx->pc = 0x3FBC50u;
        goto label_3fbc50;
    }
    ctx->pc = 0x3FBC48u;
    {
        const bool branch_taken_0x3fbc48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fbc48) {
            ctx->pc = 0x3FBC60u;
            goto label_3fbc60;
        }
    }
    ctx->pc = 0x3FBC50u;
label_3fbc50:
    // 0x3fbc50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3fbc50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3fbc54:
    // 0x3fbc54: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3fbc54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3fbc58:
    // 0x3fbc58: 0x320f809  jalr        $t9
label_3fbc5c:
    if (ctx->pc == 0x3FBC5Cu) {
        ctx->pc = 0x3FBC5Cu;
            // 0x3fbc5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FBC60u;
        goto label_3fbc60;
    }
    ctx->pc = 0x3FBC58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FBC60u);
        ctx->pc = 0x3FBC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBC58u;
            // 0x3fbc5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FBC60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FBC60u; }
            if (ctx->pc != 0x3FBC60u) { return; }
        }
        }
    }
    ctx->pc = 0x3FBC60u;
label_3fbc60:
    // 0x3fbc60: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_3fbc64:
    if (ctx->pc == 0x3FBC64u) {
        ctx->pc = 0x3FBC64u;
            // 0x3fbc64: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3FBC68u;
        goto label_3fbc68;
    }
    ctx->pc = 0x3FBC60u;
    {
        const bool branch_taken_0x3fbc60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fbc60) {
            ctx->pc = 0x3FBC64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBC60u;
            // 0x3fbc64: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FBCE4u;
            goto label_3fbce4;
        }
    }
    ctx->pc = 0x3FBC68u;
label_3fbc68:
    // 0x3fbc68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3fbc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3fbc6c:
    // 0x3fbc6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3fbc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3fbc70:
    // 0x3fbc70: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x3fbc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_3fbc74:
    // 0x3fbc74: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x3fbc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_3fbc78:
    // 0x3fbc78: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3fbc78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3fbc7c:
    // 0x3fbc7c: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x3fbc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_3fbc80:
    // 0x3fbc80: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3fbc84:
    if (ctx->pc == 0x3FBC84u) {
        ctx->pc = 0x3FBC84u;
            // 0x3fbc84: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x3FBC88u;
        goto label_3fbc88;
    }
    ctx->pc = 0x3FBC80u;
    {
        const bool branch_taken_0x3fbc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBC80u;
            // 0x3fbc84: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbc80) {
            ctx->pc = 0x3FBCBCu;
            goto label_3fbcbc;
        }
    }
    ctx->pc = 0x3FBC88u;
label_3fbc88:
    // 0x3fbc88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3fbc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3fbc8c:
    // 0x3fbc8c: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x3fbc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_3fbc90:
    // 0x3fbc90: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3fbc90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3fbc94:
    // 0x3fbc94: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x3fbc94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3fbc98:
    // 0x3fbc98: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_3fbc9c:
    if (ctx->pc == 0x3FBC9Cu) {
        ctx->pc = 0x3FBCA0u;
        goto label_3fbca0;
    }
    ctx->pc = 0x3FBC98u;
    {
        const bool branch_taken_0x3fbc98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fbc98) {
            ctx->pc = 0x3FBCBCu;
            goto label_3fbcbc;
        }
    }
    ctx->pc = 0x3FBCA0u;
label_3fbca0:
    // 0x3fbca0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3fbca4:
    if (ctx->pc == 0x3FBCA4u) {
        ctx->pc = 0x3FBCA4u;
            // 0x3fbca4: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x3FBCA8u;
        goto label_3fbca8;
    }
    ctx->pc = 0x3FBCA0u;
    {
        const bool branch_taken_0x3fbca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fbca0) {
            ctx->pc = 0x3FBCA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBCA0u;
            // 0x3fbca4: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FBCBCu;
            goto label_3fbcbc;
        }
    }
    ctx->pc = 0x3FBCA8u;
label_3fbca8:
    // 0x3fbca8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3fbca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3fbcac:
    // 0x3fbcac: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3fbcacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3fbcb0:
    // 0x3fbcb0: 0x320f809  jalr        $t9
label_3fbcb4:
    if (ctx->pc == 0x3FBCB4u) {
        ctx->pc = 0x3FBCB4u;
            // 0x3fbcb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FBCB8u;
        goto label_3fbcb8;
    }
    ctx->pc = 0x3FBCB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FBCB8u);
        ctx->pc = 0x3FBCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBCB0u;
            // 0x3fbcb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FBCB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FBCB8u; }
            if (ctx->pc != 0x3FBCB8u) { return; }
        }
        }
    }
    ctx->pc = 0x3FBCB8u;
label_3fbcb8:
    // 0x3fbcb8: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x3fbcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_3fbcbc:
    // 0x3fbcbc: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_3fbcc0:
    if (ctx->pc == 0x3FBCC0u) {
        ctx->pc = 0x3FBCC4u;
        goto label_3fbcc4;
    }
    ctx->pc = 0x3FBCBCu;
    {
        const bool branch_taken_0x3fbcbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fbcbc) {
            ctx->pc = 0x3FBCE0u;
            goto label_3fbce0;
        }
    }
    ctx->pc = 0x3FBCC4u;
label_3fbcc4:
    // 0x3fbcc4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3fbcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3fbcc8:
    // 0x3fbcc8: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x3fbcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_3fbccc:
    // 0x3fbccc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_3fbcd0:
    if (ctx->pc == 0x3FBCD0u) {
        ctx->pc = 0x3FBCD0u;
            // 0x3fbcd0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3FBCD4u;
        goto label_3fbcd4;
    }
    ctx->pc = 0x3FBCCCu;
    {
        const bool branch_taken_0x3fbccc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBCCCu;
            // 0x3fbcd0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbccc) {
            ctx->pc = 0x3FBCE0u;
            goto label_3fbce0;
        }
    }
    ctx->pc = 0x3FBCD4u;
label_3fbcd4:
    // 0x3fbcd4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3fbcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3fbcd8:
    // 0x3fbcd8: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x3fbcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_3fbcdc:
    // 0x3fbcdc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3fbcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3fbce0:
    // 0x3fbce0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3fbce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3fbce4:
    // 0x3fbce4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3fbce4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3fbce8:
    // 0x3fbce8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3fbcec:
    if (ctx->pc == 0x3FBCECu) {
        ctx->pc = 0x3FBCECu;
            // 0x3fbcec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FBCF0u;
        goto label_3fbcf0;
    }
    ctx->pc = 0x3FBCE8u;
    {
        const bool branch_taken_0x3fbce8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3fbce8) {
            ctx->pc = 0x3FBCECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBCE8u;
            // 0x3fbcec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FBCFCu;
            goto label_3fbcfc;
        }
    }
    ctx->pc = 0x3FBCF0u;
label_3fbcf0:
    // 0x3fbcf0: 0xc0400a8  jal         func_1002A0
label_3fbcf4:
    if (ctx->pc == 0x3FBCF4u) {
        ctx->pc = 0x3FBCF4u;
            // 0x3fbcf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FBCF8u;
        goto label_3fbcf8;
    }
    ctx->pc = 0x3FBCF0u;
    SET_GPR_U32(ctx, 31, 0x3FBCF8u);
    ctx->pc = 0x3FBCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBCF0u;
            // 0x3fbcf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBCF8u; }
        if (ctx->pc != 0x3FBCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBCF8u; }
        if (ctx->pc != 0x3FBCF8u) { return; }
    }
    ctx->pc = 0x3FBCF8u;
label_3fbcf8:
    // 0x3fbcf8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3fbcf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fbcfc:
    // 0x3fbcfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3fbcfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3fbd00:
    // 0x3fbd00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3fbd00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fbd04:
    // 0x3fbd04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3fbd04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fbd08:
    // 0x3fbd08: 0x3e00008  jr          $ra
label_3fbd0c:
    if (ctx->pc == 0x3FBD0Cu) {
        ctx->pc = 0x3FBD0Cu;
            // 0x3fbd0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3FBD10u;
        goto label_3fbd10;
    }
    ctx->pc = 0x3FBD08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FBD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBD08u;
            // 0x3fbd0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FBD10u;
label_3fbd10:
    // 0x3fbd10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3fbd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3fbd14:
    // 0x3fbd14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3fbd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3fbd18:
    // 0x3fbd18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3fbd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3fbd1c:
    // 0x3fbd1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3fbd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3fbd20:
    // 0x3fbd20: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x3fbd20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3fbd24:
    // 0x3fbd24: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_3fbd28:
    if (ctx->pc == 0x3FBD28u) {
        ctx->pc = 0x3FBD28u;
            // 0x3fbd28: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FBD2Cu;
        goto label_3fbd2c;
    }
    ctx->pc = 0x3FBD24u;
    {
        const bool branch_taken_0x3fbd24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBD24u;
            // 0x3fbd28: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbd24) {
            ctx->pc = 0x3FBD50u;
            goto label_3fbd50;
        }
    }
    ctx->pc = 0x3FBD2Cu;
label_3fbd2c:
    // 0x3fbd2c: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x3fbd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3fbd30:
    // 0x3fbd30: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3fbd30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3fbd34:
    // 0x3fbd34: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3fbd34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3fbd38:
    // 0x3fbd38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3fbd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3fbd3c:
    // 0x3fbd3c: 0xc0fef5c  jal         func_3FBD70
label_3fbd40:
    if (ctx->pc == 0x3FBD40u) {
        ctx->pc = 0x3FBD40u;
            // 0x3fbd40: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3FBD44u;
        goto label_3fbd44;
    }
    ctx->pc = 0x3FBD3Cu;
    SET_GPR_U32(ctx, 31, 0x3FBD44u);
    ctx->pc = 0x3FBD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBD3Cu;
            // 0x3fbd40: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FBD70u;
    if (runtime->hasFunction(0x3FBD70u)) {
        auto targetFn = runtime->lookupFunction(0x3FBD70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBD44u; }
        if (ctx->pc != 0x3FBD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FBD70_0x3fbd70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FBD44u; }
        if (ctx->pc != 0x3FBD44u) { return; }
    }
    ctx->pc = 0x3FBD44u;
label_3fbd44:
    // 0x3fbd44: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
label_3fbd48:
    if (ctx->pc == 0x3FBD48u) {
        ctx->pc = 0x3FBD48u;
            // 0x3fbd48: 0x8e220074  lw          $v0, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->pc = 0x3FBD4Cu;
        goto label_3fbd4c;
    }
    ctx->pc = 0x3FBD44u;
    {
        const bool branch_taken_0x3fbd44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fbd44) {
            ctx->pc = 0x3FBD48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBD44u;
            // 0x3fbd48: 0x8e220074  lw          $v0, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FBD30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3fbd30;
        }
    }
    ctx->pc = 0x3FBD4Cu;
label_3fbd4c:
    // 0x3fbd4c: 0x0  nop
    ctx->pc = 0x3fbd4cu;
    // NOP
label_3fbd50:
    // 0x3fbd50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3fbd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3fbd54:
    // 0x3fbd54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3fbd54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3fbd58:
    // 0x3fbd58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3fbd58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fbd5c:
    // 0x3fbd5c: 0x3e00008  jr          $ra
label_3fbd60:
    if (ctx->pc == 0x3FBD60u) {
        ctx->pc = 0x3FBD60u;
            // 0x3fbd60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3FBD64u;
        goto label_3fbd64;
    }
    ctx->pc = 0x3FBD5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FBD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FBD5Cu;
            // 0x3fbd60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FBD64u;
label_3fbd64:
    // 0x3fbd64: 0x0  nop
    ctx->pc = 0x3fbd64u;
    // NOP
label_3fbd68:
    // 0x3fbd68: 0x0  nop
    ctx->pc = 0x3fbd68u;
    // NOP
label_3fbd6c:
    // 0x3fbd6c: 0x0  nop
    ctx->pc = 0x3fbd6cu;
    // NOP
}
