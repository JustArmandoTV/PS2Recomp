#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00329F20
// Address: 0x329f20 - 0x32a060
void sub_00329F20_0x329f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329F20_0x329f20");
#endif

    switch (ctx->pc) {
        case 0x329f20u: goto label_329f20;
        case 0x329f24u: goto label_329f24;
        case 0x329f28u: goto label_329f28;
        case 0x329f2cu: goto label_329f2c;
        case 0x329f30u: goto label_329f30;
        case 0x329f34u: goto label_329f34;
        case 0x329f38u: goto label_329f38;
        case 0x329f3cu: goto label_329f3c;
        case 0x329f40u: goto label_329f40;
        case 0x329f44u: goto label_329f44;
        case 0x329f48u: goto label_329f48;
        case 0x329f4cu: goto label_329f4c;
        case 0x329f50u: goto label_329f50;
        case 0x329f54u: goto label_329f54;
        case 0x329f58u: goto label_329f58;
        case 0x329f5cu: goto label_329f5c;
        case 0x329f60u: goto label_329f60;
        case 0x329f64u: goto label_329f64;
        case 0x329f68u: goto label_329f68;
        case 0x329f6cu: goto label_329f6c;
        case 0x329f70u: goto label_329f70;
        case 0x329f74u: goto label_329f74;
        case 0x329f78u: goto label_329f78;
        case 0x329f7cu: goto label_329f7c;
        case 0x329f80u: goto label_329f80;
        case 0x329f84u: goto label_329f84;
        case 0x329f88u: goto label_329f88;
        case 0x329f8cu: goto label_329f8c;
        case 0x329f90u: goto label_329f90;
        case 0x329f94u: goto label_329f94;
        case 0x329f98u: goto label_329f98;
        case 0x329f9cu: goto label_329f9c;
        case 0x329fa0u: goto label_329fa0;
        case 0x329fa4u: goto label_329fa4;
        case 0x329fa8u: goto label_329fa8;
        case 0x329facu: goto label_329fac;
        case 0x329fb0u: goto label_329fb0;
        case 0x329fb4u: goto label_329fb4;
        case 0x329fb8u: goto label_329fb8;
        case 0x329fbcu: goto label_329fbc;
        case 0x329fc0u: goto label_329fc0;
        case 0x329fc4u: goto label_329fc4;
        case 0x329fc8u: goto label_329fc8;
        case 0x329fccu: goto label_329fcc;
        case 0x329fd0u: goto label_329fd0;
        case 0x329fd4u: goto label_329fd4;
        case 0x329fd8u: goto label_329fd8;
        case 0x329fdcu: goto label_329fdc;
        case 0x329fe0u: goto label_329fe0;
        case 0x329fe4u: goto label_329fe4;
        case 0x329fe8u: goto label_329fe8;
        case 0x329fecu: goto label_329fec;
        case 0x329ff0u: goto label_329ff0;
        case 0x329ff4u: goto label_329ff4;
        case 0x329ff8u: goto label_329ff8;
        case 0x329ffcu: goto label_329ffc;
        case 0x32a000u: goto label_32a000;
        case 0x32a004u: goto label_32a004;
        case 0x32a008u: goto label_32a008;
        case 0x32a00cu: goto label_32a00c;
        case 0x32a010u: goto label_32a010;
        case 0x32a014u: goto label_32a014;
        case 0x32a018u: goto label_32a018;
        case 0x32a01cu: goto label_32a01c;
        case 0x32a020u: goto label_32a020;
        case 0x32a024u: goto label_32a024;
        case 0x32a028u: goto label_32a028;
        case 0x32a02cu: goto label_32a02c;
        case 0x32a030u: goto label_32a030;
        case 0x32a034u: goto label_32a034;
        case 0x32a038u: goto label_32a038;
        case 0x32a03cu: goto label_32a03c;
        case 0x32a040u: goto label_32a040;
        case 0x32a044u: goto label_32a044;
        case 0x32a048u: goto label_32a048;
        case 0x32a04cu: goto label_32a04c;
        case 0x32a050u: goto label_32a050;
        case 0x32a054u: goto label_32a054;
        case 0x32a058u: goto label_32a058;
        case 0x32a05cu: goto label_32a05c;
        default: break;
    }

    ctx->pc = 0x329f20u;

label_329f20:
    // 0x329f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x329f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_329f24:
    // 0x329f24: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x329f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_329f28:
    // 0x329f28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x329f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_329f2c:
    // 0x329f2c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x329f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_329f30:
    // 0x329f30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x329f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_329f34:
    // 0x329f34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x329f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_329f38:
    // 0x329f38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x329f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_329f3c:
    // 0x329f3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x329f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_329f40:
    // 0x329f40: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x329f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_329f44:
    // 0x329f44: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x329f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_329f48:
    // 0x329f48: 0x8c50012c  lw          $s0, 0x12C($v0)
    ctx->pc = 0x329f48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_329f4c:
    // 0x329f4c: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x329f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
label_329f50:
    // 0x329f50: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x329f50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
label_329f54:
    // 0x329f54: 0x8c62078c  lw          $v0, 0x78C($v1)
    ctx->pc = 0x329f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1932)));
label_329f58:
    // 0x329f58: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x329f58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
label_329f5c:
    // 0x329f5c: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x329f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
label_329f60:
    // 0x329f60: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x329f60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
label_329f64:
    // 0x329f64: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x329f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_329f68:
    // 0x329f68: 0xc04a576  jal         func_1295D8
label_329f6c:
    if (ctx->pc == 0x329F6Cu) {
        ctx->pc = 0x329F6Cu;
            // 0x329f6c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x329F70u;
        goto label_329f70;
    }
    ctx->pc = 0x329F68u;
    SET_GPR_U32(ctx, 31, 0x329F70u);
    ctx->pc = 0x329F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329F68u;
            // 0x329f6c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329F70u; }
        if (ctx->pc != 0x329F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329F70u; }
        if (ctx->pc != 0x329F70u) { return; }
    }
    ctx->pc = 0x329F70u;
label_329f70:
    // 0x329f70: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x329f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_329f74:
    // 0x329f74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x329f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_329f78:
    // 0x329f78: 0xc04a576  jal         func_1295D8
label_329f7c:
    if (ctx->pc == 0x329F7Cu) {
        ctx->pc = 0x329F7Cu;
            // 0x329f7c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x329F80u;
        goto label_329f80;
    }
    ctx->pc = 0x329F78u;
    SET_GPR_U32(ctx, 31, 0x329F80u);
    ctx->pc = 0x329F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329F78u;
            // 0x329f7c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329F80u; }
        if (ctx->pc != 0x329F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329F80u; }
        if (ctx->pc != 0x329F80u) { return; }
    }
    ctx->pc = 0x329F80u;
label_329f80:
    // 0x329f80: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x329f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_329f84:
    // 0x329f84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x329f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_329f88:
    // 0x329f88: 0xc04a576  jal         func_1295D8
label_329f8c:
    if (ctx->pc == 0x329F8Cu) {
        ctx->pc = 0x329F8Cu;
            // 0x329f8c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x329F90u;
        goto label_329f90;
    }
    ctx->pc = 0x329F88u;
    SET_GPR_U32(ctx, 31, 0x329F90u);
    ctx->pc = 0x329F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329F88u;
            // 0x329f8c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329F90u; }
        if (ctx->pc != 0x329F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329F90u; }
        if (ctx->pc != 0x329F90u) { return; }
    }
    ctx->pc = 0x329F90u;
label_329f90:
    // 0x329f90: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x329f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_329f94:
    // 0x329f94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x329f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_329f98:
    // 0x329f98: 0xc04a576  jal         func_1295D8
label_329f9c:
    if (ctx->pc == 0x329F9Cu) {
        ctx->pc = 0x329F9Cu;
            // 0x329f9c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x329FA0u;
        goto label_329fa0;
    }
    ctx->pc = 0x329F98u;
    SET_GPR_U32(ctx, 31, 0x329FA0u);
    ctx->pc = 0x329F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x329F98u;
            // 0x329f9c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329FA0u; }
        if (ctx->pc != 0x329FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x329FA0u; }
        if (ctx->pc != 0x329FA0u) { return; }
    }
    ctx->pc = 0x329FA0u;
label_329fa0:
    // 0x329fa0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x329fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_329fa4:
    // 0x329fa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_329fa8:
    // 0x329fa8: 0x90840024  lbu         $a0, 0x24($a0)
    ctx->pc = 0x329fa8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
label_329fac:
    // 0x329fac: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
label_329fb0:
    if (ctx->pc == 0x329FB0u) {
        ctx->pc = 0x329FB0u;
            // 0x329fb0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x329FB4u;
        goto label_329fb4;
    }
    ctx->pc = 0x329FACu;
    {
        const bool branch_taken_0x329fac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x329fac) {
            ctx->pc = 0x329FB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329FACu;
            // 0x329fb0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x329FC4u;
            goto label_329fc4;
        }
    }
    ctx->pc = 0x329FB4u;
label_329fb4:
    // 0x329fb4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x329fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_329fb8:
    // 0x329fb8: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_329fbc:
    if (ctx->pc == 0x329FBCu) {
        ctx->pc = 0x329FBCu;
            // 0x329fbc: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
        ctx->pc = 0x329FC0u;
        goto label_329fc0;
    }
    ctx->pc = 0x329FB8u;
    {
        const bool branch_taken_0x329fb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x329fb8) {
            ctx->pc = 0x329FBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329FB8u;
            // 0x329fbc: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x329FDCu;
            goto label_329fdc;
        }
    }
    ctx->pc = 0x329FC0u;
label_329fc0:
    // 0x329fc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_329fc4:
    // 0x329fc4: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x329fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_329fc8:
    // 0x329fc8: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x329fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
label_329fcc:
    // 0x329fcc: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x329fccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
label_329fd0:
    // 0x329fd0: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x329fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
label_329fd4:
    // 0x329fd4: 0x10000005  b           . + 4 + (0x5 << 2)
label_329fd8:
    if (ctx->pc == 0x329FD8u) {
        ctx->pc = 0x329FD8u;
            // 0x329fd8: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->pc = 0x329FDCu;
        goto label_329fdc;
    }
    ctx->pc = 0x329FD4u;
    {
        const bool branch_taken_0x329fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x329FD4u;
            // 0x329fd8: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329fd4) {
            ctx->pc = 0x329FECu;
            goto label_329fec;
        }
    }
    ctx->pc = 0x329FDCu;
label_329fdc:
    // 0x329fdc: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x329fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_329fe0:
    // 0x329fe0: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x329fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_329fe4:
    // 0x329fe4: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x329fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_329fe8:
    // 0x329fe8: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x329fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_329fec:
    // 0x329fec: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x329fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_329ff0:
    // 0x329ff0: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
label_329ff4:
    if (ctx->pc == 0x329FF4u) {
        ctx->pc = 0x329FF4u;
            // 0x329ff4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x329FF8u;
        goto label_329ff8;
    }
    ctx->pc = 0x329FF0u;
    {
        const bool branch_taken_0x329ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x329ff0) {
            ctx->pc = 0x329FF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x329FF0u;
            // 0x329ff4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32A044u;
            goto label_32a044;
        }
    }
    ctx->pc = 0x329FF8u;
label_329ff8:
    // 0x329ff8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x329ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_329ffc:
    // 0x329ffc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x329ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32a000:
    // 0x32a000: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x32a000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_32a004:
    // 0x32a004: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x32a004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_32a008:
    // 0x32a008: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x32a008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_32a00c:
    // 0x32a00c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_32a010:
    // 0x32a010: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32a010u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_32a014:
    // 0x32a014: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x32a014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32a018:
    // 0x32a018: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x32a018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_32a01c:
    // 0x32a01c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_32a020:
    if (ctx->pc == 0x32A020u) {
        ctx->pc = 0x32A020u;
            // 0x32a020: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x32A024u;
        goto label_32a024;
    }
    ctx->pc = 0x32A01Cu;
    {
        const bool branch_taken_0x32a01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A01Cu;
            // 0x32a020: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a01c) {
            ctx->pc = 0x32A004u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32a004;
        }
    }
    ctx->pc = 0x32A024u;
label_32a024:
    // 0x32a024: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x32a024u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32a028:
    // 0x32a028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32a028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32a02c:
    // 0x32a02c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x32a02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_32a030:
    // 0x32a030: 0x8e260034  lw          $a2, 0x34($s1)
    ctx->pc = 0x32a030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_32a034:
    // 0x32a034: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x32a034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_32a038:
    // 0x32a038: 0x320f809  jalr        $t9
label_32a03c:
    if (ctx->pc == 0x32A03Cu) {
        ctx->pc = 0x32A03Cu;
            // 0x32a03c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32A040u;
        goto label_32a040;
    }
    ctx->pc = 0x32A038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32A040u);
        ctx->pc = 0x32A03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A038u;
            // 0x32a03c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32A040u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32A040u; }
            if (ctx->pc != 0x32A040u) { return; }
        }
        }
    }
    ctx->pc = 0x32A040u;
label_32a040:
    // 0x32a040: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32a040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32a044:
    // 0x32a044: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32a044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32a048:
    // 0x32a048: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32a048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32a04c:
    // 0x32a04c: 0x3e00008  jr          $ra
label_32a050:
    if (ctx->pc == 0x32A050u) {
        ctx->pc = 0x32A050u;
            // 0x32a050: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x32A054u;
        goto label_32a054;
    }
    ctx->pc = 0x32A04Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32A04Cu;
            // 0x32a050: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32A054u;
label_32a054:
    // 0x32a054: 0x0  nop
    ctx->pc = 0x32a054u;
    // NOP
label_32a058:
    // 0x32a058: 0x0  nop
    ctx->pc = 0x32a058u;
    // NOP
label_32a05c:
    // 0x32a05c: 0x0  nop
    ctx->pc = 0x32a05cu;
    // NOP
}
