#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0052FB70
// Address: 0x52fb70 - 0x52fc70
void sub_0052FB70_0x52fb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0052FB70_0x52fb70");
#endif

    switch (ctx->pc) {
        case 0x52fb70u: goto label_52fb70;
        case 0x52fb74u: goto label_52fb74;
        case 0x52fb78u: goto label_52fb78;
        case 0x52fb7cu: goto label_52fb7c;
        case 0x52fb80u: goto label_52fb80;
        case 0x52fb84u: goto label_52fb84;
        case 0x52fb88u: goto label_52fb88;
        case 0x52fb8cu: goto label_52fb8c;
        case 0x52fb90u: goto label_52fb90;
        case 0x52fb94u: goto label_52fb94;
        case 0x52fb98u: goto label_52fb98;
        case 0x52fb9cu: goto label_52fb9c;
        case 0x52fba0u: goto label_52fba0;
        case 0x52fba4u: goto label_52fba4;
        case 0x52fba8u: goto label_52fba8;
        case 0x52fbacu: goto label_52fbac;
        case 0x52fbb0u: goto label_52fbb0;
        case 0x52fbb4u: goto label_52fbb4;
        case 0x52fbb8u: goto label_52fbb8;
        case 0x52fbbcu: goto label_52fbbc;
        case 0x52fbc0u: goto label_52fbc0;
        case 0x52fbc4u: goto label_52fbc4;
        case 0x52fbc8u: goto label_52fbc8;
        case 0x52fbccu: goto label_52fbcc;
        case 0x52fbd0u: goto label_52fbd0;
        case 0x52fbd4u: goto label_52fbd4;
        case 0x52fbd8u: goto label_52fbd8;
        case 0x52fbdcu: goto label_52fbdc;
        case 0x52fbe0u: goto label_52fbe0;
        case 0x52fbe4u: goto label_52fbe4;
        case 0x52fbe8u: goto label_52fbe8;
        case 0x52fbecu: goto label_52fbec;
        case 0x52fbf0u: goto label_52fbf0;
        case 0x52fbf4u: goto label_52fbf4;
        case 0x52fbf8u: goto label_52fbf8;
        case 0x52fbfcu: goto label_52fbfc;
        case 0x52fc00u: goto label_52fc00;
        case 0x52fc04u: goto label_52fc04;
        case 0x52fc08u: goto label_52fc08;
        case 0x52fc0cu: goto label_52fc0c;
        case 0x52fc10u: goto label_52fc10;
        case 0x52fc14u: goto label_52fc14;
        case 0x52fc18u: goto label_52fc18;
        case 0x52fc1cu: goto label_52fc1c;
        case 0x52fc20u: goto label_52fc20;
        case 0x52fc24u: goto label_52fc24;
        case 0x52fc28u: goto label_52fc28;
        case 0x52fc2cu: goto label_52fc2c;
        case 0x52fc30u: goto label_52fc30;
        case 0x52fc34u: goto label_52fc34;
        case 0x52fc38u: goto label_52fc38;
        case 0x52fc3cu: goto label_52fc3c;
        case 0x52fc40u: goto label_52fc40;
        case 0x52fc44u: goto label_52fc44;
        case 0x52fc48u: goto label_52fc48;
        case 0x52fc4cu: goto label_52fc4c;
        case 0x52fc50u: goto label_52fc50;
        case 0x52fc54u: goto label_52fc54;
        case 0x52fc58u: goto label_52fc58;
        case 0x52fc5cu: goto label_52fc5c;
        case 0x52fc60u: goto label_52fc60;
        case 0x52fc64u: goto label_52fc64;
        case 0x52fc68u: goto label_52fc68;
        case 0x52fc6cu: goto label_52fc6c;
        default: break;
    }

    ctx->pc = 0x52fb70u;

label_52fb70:
    // 0x52fb70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x52fb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_52fb74:
    // 0x52fb74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x52fb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_52fb78:
    // 0x52fb78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52fb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52fb7c:
    // 0x52fb7c: 0x8ca300ac  lw          $v1, 0xAC($a1)
    ctx->pc = 0x52fb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 172)));
label_52fb80:
    // 0x52fb80: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
label_52fb84:
    if (ctx->pc == 0x52FB84u) {
        ctx->pc = 0x52FB84u;
            // 0x52fb84: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52FB88u;
        goto label_52fb88;
    }
    ctx->pc = 0x52FB80u;
    {
        const bool branch_taken_0x52fb80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x52FB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52FB80u;
            // 0x52fb84: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52fb80) {
            ctx->pc = 0x52FC54u;
            goto label_52fc54;
        }
    }
    ctx->pc = 0x52FB88u;
label_52fb88:
    // 0x52fb88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x52fb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52fb8c:
    // 0x52fb8c: 0xc0e32a4  jal         func_38CA90
label_52fb90:
    if (ctx->pc == 0x52FB90u) {
        ctx->pc = 0x52FB90u;
            // 0x52fb90: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x52FB94u;
        goto label_52fb94;
    }
    ctx->pc = 0x52FB8Cu;
    SET_GPR_U32(ctx, 31, 0x52FB94u);
    ctx->pc = 0x52FB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52FB8Cu;
            // 0x52fb90: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FB94u; }
        if (ctx->pc != 0x52FB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FB94u; }
        if (ctx->pc != 0x52FB94u) { return; }
    }
    ctx->pc = 0x52FB94u;
label_52fb94:
    // 0x52fb94: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x52fb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_52fb98:
    // 0x52fb98: 0xc0e082c  jal         func_3820B0
label_52fb9c:
    if (ctx->pc == 0x52FB9Cu) {
        ctx->pc = 0x52FB9Cu;
            // 0x52fb9c: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
        ctx->pc = 0x52FBA0u;
        goto label_52fba0;
    }
    ctx->pc = 0x52FB98u;
    SET_GPR_U32(ctx, 31, 0x52FBA0u);
    ctx->pc = 0x52FB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52FB98u;
            // 0x52fb9c: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820B0u;
    if (runtime->hasFunction(0x3820B0u)) {
        auto targetFn = runtime->lookupFunction(0x3820B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FBA0u; }
        if (ctx->pc != 0x52FBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820B0_0x3820b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FBA0u; }
        if (ctx->pc != 0x52FBA0u) { return; }
    }
    ctx->pc = 0x52FBA0u;
label_52fba0:
    // 0x52fba0: 0xc0e0828  jal         func_3820A0
label_52fba4:
    if (ctx->pc == 0x52FBA4u) {
        ctx->pc = 0x52FBA4u;
            // 0x52fba4: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x52FBA8u;
        goto label_52fba8;
    }
    ctx->pc = 0x52FBA0u;
    SET_GPR_U32(ctx, 31, 0x52FBA8u);
    ctx->pc = 0x52FBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52FBA0u;
            // 0x52fba4: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820A0u;
    if (runtime->hasFunction(0x3820A0u)) {
        auto targetFn = runtime->lookupFunction(0x3820A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FBA8u; }
        if (ctx->pc != 0x52FBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820A0_0x3820a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FBA8u; }
        if (ctx->pc != 0x52FBA8u) { return; }
    }
    ctx->pc = 0x52FBA8u;
label_52fba8:
    // 0x52fba8: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x52fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_52fbac:
    // 0x52fbac: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_52fbb0:
    if (ctx->pc == 0x52FBB0u) {
        ctx->pc = 0x52FBB0u;
            // 0x52fbb0: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x52FBB4u;
        goto label_52fbb4;
    }
    ctx->pc = 0x52FBACu;
    {
        const bool branch_taken_0x52fbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52fbac) {
            ctx->pc = 0x52FBB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52FBACu;
            // 0x52fbb0: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52FBE4u;
            goto label_52fbe4;
        }
    }
    ctx->pc = 0x52FBB4u;
label_52fbb4:
    // 0x52fbb4: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x52fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_52fbb8:
    // 0x52fbb8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x52fbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_52fbbc:
    // 0x52fbbc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_52fbc0:
    if (ctx->pc == 0x52FBC0u) {
        ctx->pc = 0x52FBC4u;
        goto label_52fbc4;
    }
    ctx->pc = 0x52FBBCu;
    {
        const bool branch_taken_0x52fbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52fbbc) {
            ctx->pc = 0x52FBE0u;
            goto label_52fbe0;
        }
    }
    ctx->pc = 0x52FBC4u;
label_52fbc4:
    // 0x52fbc4: 0xc0dc408  jal         func_371020
label_52fbc8:
    if (ctx->pc == 0x52FBC8u) {
        ctx->pc = 0x52FBC8u;
            // 0x52fbc8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x52FBCCu;
        goto label_52fbcc;
    }
    ctx->pc = 0x52FBC4u;
    SET_GPR_U32(ctx, 31, 0x52FBCCu);
    ctx->pc = 0x52FBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52FBC4u;
            // 0x52fbc8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FBCCu; }
        if (ctx->pc != 0x52FBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FBCCu; }
        if (ctx->pc != 0x52FBCCu) { return; }
    }
    ctx->pc = 0x52FBCCu;
label_52fbcc:
    // 0x52fbcc: 0xc0e0824  jal         func_382090
label_52fbd0:
    if (ctx->pc == 0x52FBD0u) {
        ctx->pc = 0x52FBD0u;
            // 0x52fbd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52FBD4u;
        goto label_52fbd4;
    }
    ctx->pc = 0x52FBCCu;
    SET_GPR_U32(ctx, 31, 0x52FBD4u);
    ctx->pc = 0x52FBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52FBCCu;
            // 0x52fbd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382090u;
    if (runtime->hasFunction(0x382090u)) {
        auto targetFn = runtime->lookupFunction(0x382090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FBD4u; }
        if (ctx->pc != 0x52FBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382090_0x382090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FBD4u; }
        if (ctx->pc != 0x52FBD4u) { return; }
    }
    ctx->pc = 0x52FBD4u;
label_52fbd4:
    // 0x52fbd4: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x52fbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_52fbd8:
    // 0x52fbd8: 0xc0e081c  jal         func_382070
label_52fbdc:
    if (ctx->pc == 0x52FBDCu) {
        ctx->pc = 0x52FBDCu;
            // 0x52fbdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52FBE0u;
        goto label_52fbe0;
    }
    ctx->pc = 0x52FBD8u;
    SET_GPR_U32(ctx, 31, 0x52FBE0u);
    ctx->pc = 0x52FBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52FBD8u;
            // 0x52fbdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382070u;
    if (runtime->hasFunction(0x382070u)) {
        auto targetFn = runtime->lookupFunction(0x382070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FBE0u; }
        if (ctx->pc != 0x52FBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382070_0x382070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FBE0u; }
        if (ctx->pc != 0x52FBE0u) { return; }
    }
    ctx->pc = 0x52FBE0u;
label_52fbe0:
    // 0x52fbe0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x52fbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_52fbe4:
    // 0x52fbe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x52fbe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52fbe8:
    // 0x52fbe8: 0xc0e080c  jal         func_382030
label_52fbec:
    if (ctx->pc == 0x52FBECu) {
        ctx->pc = 0x52FBECu;
            // 0x52fbec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x52FBF0u;
        goto label_52fbf0;
    }
    ctx->pc = 0x52FBE8u;
    SET_GPR_U32(ctx, 31, 0x52FBF0u);
    ctx->pc = 0x52FBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52FBE8u;
            // 0x52fbec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FBF0u; }
        if (ctx->pc != 0x52FBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FBF0u; }
        if (ctx->pc != 0x52FBF0u) { return; }
    }
    ctx->pc = 0x52FBF0u;
label_52fbf0:
    // 0x52fbf0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x52fbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_52fbf4:
    // 0x52fbf4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x52fbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_52fbf8:
    // 0x52fbf8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x52fbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52fbfc:
    // 0x52fbfc: 0xc08914c  jal         func_224530
label_52fc00:
    if (ctx->pc == 0x52FC00u) {
        ctx->pc = 0x52FC00u;
            // 0x52fc00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52FC04u;
        goto label_52fc04;
    }
    ctx->pc = 0x52FBFCu;
    SET_GPR_U32(ctx, 31, 0x52FC04u);
    ctx->pc = 0x52FC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52FBFCu;
            // 0x52fc00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FC04u; }
        if (ctx->pc != 0x52FC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FC04u; }
        if (ctx->pc != 0x52FC04u) { return; }
    }
    ctx->pc = 0x52FC04u;
label_52fc04:
    // 0x52fc04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x52fc04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_52fc08:
    // 0x52fc08: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x52fc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_52fc0c:
    // 0x52fc0c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x52fc0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_52fc10:
    // 0x52fc10: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x52fc10u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_52fc14:
    // 0x52fc14: 0xc0b6df0  jal         func_2DB7C0
label_52fc18:
    if (ctx->pc == 0x52FC18u) {
        ctx->pc = 0x52FC18u;
            // 0x52fc18: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x52FC1Cu;
        goto label_52fc1c;
    }
    ctx->pc = 0x52FC14u;
    SET_GPR_U32(ctx, 31, 0x52FC1Cu);
    ctx->pc = 0x52FC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52FC14u;
            // 0x52fc18: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FC1Cu; }
        if (ctx->pc != 0x52FC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FC1Cu; }
        if (ctx->pc != 0x52FC1Cu) { return; }
    }
    ctx->pc = 0x52FC1Cu;
label_52fc1c:
    // 0x52fc1c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x52fc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_52fc20:
    // 0x52fc20: 0xc0e07f8  jal         func_381FE0
label_52fc24:
    if (ctx->pc == 0x52FC24u) {
        ctx->pc = 0x52FC24u;
            // 0x52fc24: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x52FC28u;
        goto label_52fc28;
    }
    ctx->pc = 0x52FC20u;
    SET_GPR_U32(ctx, 31, 0x52FC28u);
    ctx->pc = 0x52FC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52FC20u;
            // 0x52fc24: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FC28u; }
        if (ctx->pc != 0x52FC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FC28u; }
        if (ctx->pc != 0x52FC28u) { return; }
    }
    ctx->pc = 0x52FC28u;
label_52fc28:
    // 0x52fc28: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x52fc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_52fc2c:
    // 0x52fc2c: 0xc0dc3f4  jal         func_370FD0
label_52fc30:
    if (ctx->pc == 0x52FC30u) {
        ctx->pc = 0x52FC30u;
            // 0x52fc30: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x52FC34u;
        goto label_52fc34;
    }
    ctx->pc = 0x52FC2Cu;
    SET_GPR_U32(ctx, 31, 0x52FC34u);
    ctx->pc = 0x52FC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52FC2Cu;
            // 0x52fc30: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FC34u; }
        if (ctx->pc != 0x52FC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52FC34u; }
        if (ctx->pc != 0x52FC34u) { return; }
    }
    ctx->pc = 0x52FC34u;
label_52fc34:
    // 0x52fc34: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x52fc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_52fc38:
    // 0x52fc38: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x52fc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_52fc3c:
    // 0x52fc3c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_52fc40:
    if (ctx->pc == 0x52FC40u) {
        ctx->pc = 0x52FC40u;
            // 0x52fc40: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x52FC44u;
        goto label_52fc44;
    }
    ctx->pc = 0x52FC3Cu;
    {
        const bool branch_taken_0x52fc3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x52fc3c) {
            ctx->pc = 0x52FC40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52FC3Cu;
            // 0x52fc40: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52FC58u;
            goto label_52fc58;
        }
    }
    ctx->pc = 0x52FC44u;
label_52fc44:
    // 0x52fc44: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x52fc44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_52fc48:
    // 0x52fc48: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x52fc48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_52fc4c:
    // 0x52fc4c: 0x320f809  jalr        $t9
label_52fc50:
    if (ctx->pc == 0x52FC50u) {
        ctx->pc = 0x52FC50u;
            // 0x52fc50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52FC54u;
        goto label_52fc54;
    }
    ctx->pc = 0x52FC4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52FC54u);
        ctx->pc = 0x52FC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52FC4Cu;
            // 0x52fc50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52FC54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52FC54u; }
            if (ctx->pc != 0x52FC54u) { return; }
        }
        }
    }
    ctx->pc = 0x52FC54u;
label_52fc54:
    // 0x52fc54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52fc54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_52fc58:
    // 0x52fc58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52fc58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52fc5c:
    // 0x52fc5c: 0x3e00008  jr          $ra
label_52fc60:
    if (ctx->pc == 0x52FC60u) {
        ctx->pc = 0x52FC60u;
            // 0x52fc60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x52FC64u;
        goto label_52fc64;
    }
    ctx->pc = 0x52FC5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52FC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52FC5Cu;
            // 0x52fc60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52FC64u;
label_52fc64:
    // 0x52fc64: 0x0  nop
    ctx->pc = 0x52fc64u;
    // NOP
label_52fc68:
    // 0x52fc68: 0x0  nop
    ctx->pc = 0x52fc68u;
    // NOP
label_52fc6c:
    // 0x52fc6c: 0x0  nop
    ctx->pc = 0x52fc6cu;
    // NOP
}
