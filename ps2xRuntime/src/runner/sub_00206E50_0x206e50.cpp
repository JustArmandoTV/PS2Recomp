#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00206E50
// Address: 0x206e50 - 0x206f90
void sub_00206E50_0x206e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206E50_0x206e50");
#endif

    switch (ctx->pc) {
        case 0x206e6cu: goto label_206e6c;
        case 0x206e7cu: goto label_206e7c;
        case 0x206e8cu: goto label_206e8c;
        case 0x206e9cu: goto label_206e9c;
        case 0x206eacu: goto label_206eac;
        case 0x206ebcu: goto label_206ebc;
        case 0x206eccu: goto label_206ecc;
        case 0x206edcu: goto label_206edc;
        case 0x206eecu: goto label_206eec;
        case 0x206efcu: goto label_206efc;
        case 0x206f0cu: goto label_206f0c;
        case 0x206f1cu: goto label_206f1c;
        case 0x206f2cu: goto label_206f2c;
        case 0x206f3cu: goto label_206f3c;
        case 0x206f4cu: goto label_206f4c;
        case 0x206f5cu: goto label_206f5c;
        case 0x206f6cu: goto label_206f6c;
        case 0x206f7cu: goto label_206f7c;
        default: break;
    }

    ctx->pc = 0x206e50u;

    // 0x206e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x206e54: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x206e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x206e58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x206e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x206e5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x206e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206e60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x206e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x206e64: 0xc080154  jal         func_200550
    ctx->pc = 0x206E64u;
    SET_GPR_U32(ctx, 31, 0x206E6Cu);
    ctx->pc = 0x206E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206E64u;
            // 0x206e68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200550u;
    if (runtime->hasFunction(0x200550u)) {
        auto targetFn = runtime->lookupFunction(0x200550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206E6Cu; }
        if (ctx->pc != 0x206E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200550_0x200550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206E6Cu; }
        if (ctx->pc != 0x206E6Cu) { return; }
    }
    ctx->pc = 0x206E6Cu;
label_206e6c:
    // 0x206e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206e70: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x206e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x206e74: 0xc080154  jal         func_200550
    ctx->pc = 0x206E74u;
    SET_GPR_U32(ctx, 31, 0x206E7Cu);
    ctx->pc = 0x206E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206E74u;
            // 0x206e78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200550u;
    if (runtime->hasFunction(0x200550u)) {
        auto targetFn = runtime->lookupFunction(0x200550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206E7Cu; }
        if (ctx->pc != 0x206E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200550_0x200550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206E7Cu; }
        if (ctx->pc != 0x206E7Cu) { return; }
    }
    ctx->pc = 0x206E7Cu;
label_206e7c:
    // 0x206e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206e80: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x206e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x206e84: 0xc080154  jal         func_200550
    ctx->pc = 0x206E84u;
    SET_GPR_U32(ctx, 31, 0x206E8Cu);
    ctx->pc = 0x206E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206E84u;
            // 0x206e88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200550u;
    if (runtime->hasFunction(0x200550u)) {
        auto targetFn = runtime->lookupFunction(0x200550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206E8Cu; }
        if (ctx->pc != 0x206E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200550_0x200550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206E8Cu; }
        if (ctx->pc != 0x206E8Cu) { return; }
    }
    ctx->pc = 0x206E8Cu;
label_206e8c:
    // 0x206e8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206e90: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x206e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x206e94: 0xc080154  jal         func_200550
    ctx->pc = 0x206E94u;
    SET_GPR_U32(ctx, 31, 0x206E9Cu);
    ctx->pc = 0x206E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206E94u;
            // 0x206e98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200550u;
    if (runtime->hasFunction(0x200550u)) {
        auto targetFn = runtime->lookupFunction(0x200550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206E9Cu; }
        if (ctx->pc != 0x206E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200550_0x200550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206E9Cu; }
        if (ctx->pc != 0x206E9Cu) { return; }
    }
    ctx->pc = 0x206E9Cu;
label_206e9c:
    // 0x206e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ea0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x206ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x206ea4: 0xc080154  jal         func_200550
    ctx->pc = 0x206EA4u;
    SET_GPR_U32(ctx, 31, 0x206EACu);
    ctx->pc = 0x206EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206EA4u;
            // 0x206ea8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200550u;
    if (runtime->hasFunction(0x200550u)) {
        auto targetFn = runtime->lookupFunction(0x200550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206EACu; }
        if (ctx->pc != 0x206EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200550_0x200550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206EACu; }
        if (ctx->pc != 0x206EACu) { return; }
    }
    ctx->pc = 0x206EACu;
label_206eac:
    // 0x206eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206eb0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x206eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x206eb4: 0xc080154  jal         func_200550
    ctx->pc = 0x206EB4u;
    SET_GPR_U32(ctx, 31, 0x206EBCu);
    ctx->pc = 0x206EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206EB4u;
            // 0x206eb8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200550u;
    if (runtime->hasFunction(0x200550u)) {
        auto targetFn = runtime->lookupFunction(0x200550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206EBCu; }
        if (ctx->pc != 0x206EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200550_0x200550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206EBCu; }
        if (ctx->pc != 0x206EBCu) { return; }
    }
    ctx->pc = 0x206EBCu;
label_206ebc:
    // 0x206ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ec0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x206ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x206ec4: 0xc080154  jal         func_200550
    ctx->pc = 0x206EC4u;
    SET_GPR_U32(ctx, 31, 0x206ECCu);
    ctx->pc = 0x206EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206EC4u;
            // 0x206ec8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200550u;
    if (runtime->hasFunction(0x200550u)) {
        auto targetFn = runtime->lookupFunction(0x200550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206ECCu; }
        if (ctx->pc != 0x206ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200550_0x200550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206ECCu; }
        if (ctx->pc != 0x206ECCu) { return; }
    }
    ctx->pc = 0x206ECCu;
label_206ecc:
    // 0x206ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ed0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x206ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x206ed4: 0xc080154  jal         func_200550
    ctx->pc = 0x206ED4u;
    SET_GPR_U32(ctx, 31, 0x206EDCu);
    ctx->pc = 0x206ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206ED4u;
            // 0x206ed8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200550u;
    if (runtime->hasFunction(0x200550u)) {
        auto targetFn = runtime->lookupFunction(0x200550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206EDCu; }
        if (ctx->pc != 0x206EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200550_0x200550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206EDCu; }
        if (ctx->pc != 0x206EDCu) { return; }
    }
    ctx->pc = 0x206EDCu;
label_206edc:
    // 0x206edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ee0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x206ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x206ee4: 0xc080154  jal         func_200550
    ctx->pc = 0x206EE4u;
    SET_GPR_U32(ctx, 31, 0x206EECu);
    ctx->pc = 0x206EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206EE4u;
            // 0x206ee8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200550u;
    if (runtime->hasFunction(0x200550u)) {
        auto targetFn = runtime->lookupFunction(0x200550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206EECu; }
        if (ctx->pc != 0x206EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200550_0x200550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206EECu; }
        if (ctx->pc != 0x206EECu) { return; }
    }
    ctx->pc = 0x206EECu;
label_206eec:
    // 0x206eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ef0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x206ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x206ef4: 0xc080154  jal         func_200550
    ctx->pc = 0x206EF4u;
    SET_GPR_U32(ctx, 31, 0x206EFCu);
    ctx->pc = 0x206EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206EF4u;
            // 0x206ef8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200550u;
    if (runtime->hasFunction(0x200550u)) {
        auto targetFn = runtime->lookupFunction(0x200550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206EFCu; }
        if (ctx->pc != 0x206EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200550_0x200550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206EFCu; }
        if (ctx->pc != 0x206EFCu) { return; }
    }
    ctx->pc = 0x206EFCu;
label_206efc:
    // 0x206efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f00: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x206f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x206f04: 0xc080154  jal         func_200550
    ctx->pc = 0x206F04u;
    SET_GPR_U32(ctx, 31, 0x206F0Cu);
    ctx->pc = 0x206F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206F04u;
            // 0x206f08: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200550u;
    if (runtime->hasFunction(0x200550u)) {
        auto targetFn = runtime->lookupFunction(0x200550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F0Cu; }
        if (ctx->pc != 0x206F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200550_0x200550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F0Cu; }
        if (ctx->pc != 0x206F0Cu) { return; }
    }
    ctx->pc = 0x206F0Cu;
label_206f0c:
    // 0x206f0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f10: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x206f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x206f14: 0xc080154  jal         func_200550
    ctx->pc = 0x206F14u;
    SET_GPR_U32(ctx, 31, 0x206F1Cu);
    ctx->pc = 0x206F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206F14u;
            // 0x206f18: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200550u;
    if (runtime->hasFunction(0x200550u)) {
        auto targetFn = runtime->lookupFunction(0x200550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F1Cu; }
        if (ctx->pc != 0x206F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200550_0x200550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F1Cu; }
        if (ctx->pc != 0x206F1Cu) { return; }
    }
    ctx->pc = 0x206F1Cu;
label_206f1c:
    // 0x206f1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f20: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x206f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x206f24: 0xc080154  jal         func_200550
    ctx->pc = 0x206F24u;
    SET_GPR_U32(ctx, 31, 0x206F2Cu);
    ctx->pc = 0x206F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206F24u;
            // 0x206f28: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200550u;
    if (runtime->hasFunction(0x200550u)) {
        auto targetFn = runtime->lookupFunction(0x200550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F2Cu; }
        if (ctx->pc != 0x206F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200550_0x200550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F2Cu; }
        if (ctx->pc != 0x206F2Cu) { return; }
    }
    ctx->pc = 0x206F2Cu;
label_206f2c:
    // 0x206f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f30: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x206f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x206f34: 0xc080154  jal         func_200550
    ctx->pc = 0x206F34u;
    SET_GPR_U32(ctx, 31, 0x206F3Cu);
    ctx->pc = 0x206F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206F34u;
            // 0x206f38: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200550u;
    if (runtime->hasFunction(0x200550u)) {
        auto targetFn = runtime->lookupFunction(0x200550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F3Cu; }
        if (ctx->pc != 0x206F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200550_0x200550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F3Cu; }
        if (ctx->pc != 0x206F3Cu) { return; }
    }
    ctx->pc = 0x206F3Cu;
label_206f3c:
    // 0x206f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f40: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x206f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x206f44: 0xc080154  jal         func_200550
    ctx->pc = 0x206F44u;
    SET_GPR_U32(ctx, 31, 0x206F4Cu);
    ctx->pc = 0x206F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206F44u;
            // 0x206f48: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200550u;
    if (runtime->hasFunction(0x200550u)) {
        auto targetFn = runtime->lookupFunction(0x200550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F4Cu; }
        if (ctx->pc != 0x206F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200550_0x200550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F4Cu; }
        if (ctx->pc != 0x206F4Cu) { return; }
    }
    ctx->pc = 0x206F4Cu;
label_206f4c:
    // 0x206f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x206f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206f54: 0xc080154  jal         func_200550
    ctx->pc = 0x206F54u;
    SET_GPR_U32(ctx, 31, 0x206F5Cu);
    ctx->pc = 0x206F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206F54u;
            // 0x206f58: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200550u;
    if (runtime->hasFunction(0x200550u)) {
        auto targetFn = runtime->lookupFunction(0x200550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F5Cu; }
        if (ctx->pc != 0x206F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200550_0x200550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F5Cu; }
        if (ctx->pc != 0x206F5Cu) { return; }
    }
    ctx->pc = 0x206F5Cu;
label_206f5c:
    // 0x206f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f60: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x206f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x206f64: 0xc080154  jal         func_200550
    ctx->pc = 0x206F64u;
    SET_GPR_U32(ctx, 31, 0x206F6Cu);
    ctx->pc = 0x206F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206F64u;
            // 0x206f68: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200550u;
    if (runtime->hasFunction(0x200550u)) {
        auto targetFn = runtime->lookupFunction(0x200550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F6Cu; }
        if (ctx->pc != 0x206F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200550_0x200550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F6Cu; }
        if (ctx->pc != 0x206F6Cu) { return; }
    }
    ctx->pc = 0x206F6Cu;
label_206f6c:
    // 0x206f6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f70: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x206f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x206f74: 0xc080154  jal         func_200550
    ctx->pc = 0x206F74u;
    SET_GPR_U32(ctx, 31, 0x206F7Cu);
    ctx->pc = 0x206F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206F74u;
            // 0x206f78: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200550u;
    if (runtime->hasFunction(0x200550u)) {
        auto targetFn = runtime->lookupFunction(0x200550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F7Cu; }
        if (ctx->pc != 0x206F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200550_0x200550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206F7Cu; }
        if (ctx->pc != 0x206F7Cu) { return; }
    }
    ctx->pc = 0x206F7Cu;
label_206f7c:
    // 0x206f7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x206f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206f80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x206f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206f84: 0x3e00008  jr          $ra
    ctx->pc = 0x206F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206F84u;
            // 0x206f88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x206F8Cu;
    // 0x206f8c: 0x0  nop
    ctx->pc = 0x206f8cu;
    // NOP
}
