#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00481E40
// Address: 0x481e40 - 0x481fd0
void sub_00481E40_0x481e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481E40_0x481e40");
#endif

    switch (ctx->pc) {
        case 0x481e60u: goto label_481e60;
        case 0x481e70u: goto label_481e70;
        case 0x481e80u: goto label_481e80;
        case 0x481e90u: goto label_481e90;
        case 0x481ea0u: goto label_481ea0;
        case 0x481eb0u: goto label_481eb0;
        case 0x481ec0u: goto label_481ec0;
        case 0x481ed0u: goto label_481ed0;
        case 0x481ee4u: goto label_481ee4;
        case 0x481f00u: goto label_481f00;
        case 0x481fb4u: goto label_481fb4;
        default: break;
    }

    ctx->pc = 0x481e40u;

    // 0x481e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x481e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x481e44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x481e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481e48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x481e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x481e4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x481e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481e50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x481e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x481e54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x481e54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481e58: 0xc1207f4  jal         func_481FD0
    ctx->pc = 0x481E58u;
    SET_GPR_U32(ctx, 31, 0x481E60u);
    ctx->pc = 0x481E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481E58u;
            // 0x481e5c: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481FD0u;
    if (runtime->hasFunction(0x481FD0u)) {
        auto targetFn = runtime->lookupFunction(0x481FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481E60u; }
        if (ctx->pc != 0x481E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481FD0_0x481fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481E60u; }
        if (ctx->pc != 0x481E60u) { return; }
    }
    ctx->pc = 0x481E60u;
label_481e60:
    // 0x481e60: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x481e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x481e64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x481e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481e68: 0xc1207f4  jal         func_481FD0
    ctx->pc = 0x481E68u;
    SET_GPR_U32(ctx, 31, 0x481E70u);
    ctx->pc = 0x481E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481E68u;
            // 0x481e6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481FD0u;
    if (runtime->hasFunction(0x481FD0u)) {
        auto targetFn = runtime->lookupFunction(0x481FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481E70u; }
        if (ctx->pc != 0x481E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481FD0_0x481fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481E70u; }
        if (ctx->pc != 0x481E70u) { return; }
    }
    ctx->pc = 0x481E70u;
label_481e70:
    // 0x481e70: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x481e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x481e74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x481e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481e78: 0xc1207f4  jal         func_481FD0
    ctx->pc = 0x481E78u;
    SET_GPR_U32(ctx, 31, 0x481E80u);
    ctx->pc = 0x481E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481E78u;
            // 0x481e7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481FD0u;
    if (runtime->hasFunction(0x481FD0u)) {
        auto targetFn = runtime->lookupFunction(0x481FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481E80u; }
        if (ctx->pc != 0x481E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481FD0_0x481fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481E80u; }
        if (ctx->pc != 0x481E80u) { return; }
    }
    ctx->pc = 0x481E80u;
label_481e80:
    // 0x481e80: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x481e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x481e84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x481e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481e88: 0xc1207f4  jal         func_481FD0
    ctx->pc = 0x481E88u;
    SET_GPR_U32(ctx, 31, 0x481E90u);
    ctx->pc = 0x481E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481E88u;
            // 0x481e8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481FD0u;
    if (runtime->hasFunction(0x481FD0u)) {
        auto targetFn = runtime->lookupFunction(0x481FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481E90u; }
        if (ctx->pc != 0x481E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481FD0_0x481fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481E90u; }
        if (ctx->pc != 0x481E90u) { return; }
    }
    ctx->pc = 0x481E90u;
label_481e90:
    // 0x481e90: 0x2604003c  addiu       $a0, $s0, 0x3C
    ctx->pc = 0x481e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x481e94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x481e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481e98: 0xc1207f4  jal         func_481FD0
    ctx->pc = 0x481E98u;
    SET_GPR_U32(ctx, 31, 0x481EA0u);
    ctx->pc = 0x481E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481E98u;
            // 0x481e9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481FD0u;
    if (runtime->hasFunction(0x481FD0u)) {
        auto targetFn = runtime->lookupFunction(0x481FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481EA0u; }
        if (ctx->pc != 0x481EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481FD0_0x481fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481EA0u; }
        if (ctx->pc != 0x481EA0u) { return; }
    }
    ctx->pc = 0x481EA0u;
label_481ea0:
    // 0x481ea0: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x481ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x481ea4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x481ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481ea8: 0xc1207f4  jal         func_481FD0
    ctx->pc = 0x481EA8u;
    SET_GPR_U32(ctx, 31, 0x481EB0u);
    ctx->pc = 0x481EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481EA8u;
            // 0x481eac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481FD0u;
    if (runtime->hasFunction(0x481FD0u)) {
        auto targetFn = runtime->lookupFunction(0x481FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481EB0u; }
        if (ctx->pc != 0x481EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481FD0_0x481fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481EB0u; }
        if (ctx->pc != 0x481EB0u) { return; }
    }
    ctx->pc = 0x481EB0u;
label_481eb0:
    // 0x481eb0: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x481eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x481eb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x481eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481eb8: 0xc1207f4  jal         func_481FD0
    ctx->pc = 0x481EB8u;
    SET_GPR_U32(ctx, 31, 0x481EC0u);
    ctx->pc = 0x481EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481EB8u;
            // 0x481ebc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481FD0u;
    if (runtime->hasFunction(0x481FD0u)) {
        auto targetFn = runtime->lookupFunction(0x481FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481EC0u; }
        if (ctx->pc != 0x481EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481FD0_0x481fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481EC0u; }
        if (ctx->pc != 0x481EC0u) { return; }
    }
    ctx->pc = 0x481EC0u;
label_481ec0:
    // 0x481ec0: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x481ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x481ec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x481ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481ec8: 0xc1207f4  jal         func_481FD0
    ctx->pc = 0x481EC8u;
    SET_GPR_U32(ctx, 31, 0x481ED0u);
    ctx->pc = 0x481ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481EC8u;
            // 0x481ecc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481FD0u;
    if (runtime->hasFunction(0x481FD0u)) {
        auto targetFn = runtime->lookupFunction(0x481FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481ED0u; }
        if (ctx->pc != 0x481ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481FD0_0x481fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481ED0u; }
        if (ctx->pc != 0x481ED0u) { return; }
    }
    ctx->pc = 0x481ED0u;
label_481ed0:
    // 0x481ed0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x481ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x481ed4: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x481ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x481ed8: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x481ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x481edc: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x481EDCu;
    SET_GPR_U32(ctx, 31, 0x481EE4u);
    ctx->pc = 0x481EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481EDCu;
            // 0x481ee0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481EE4u; }
        if (ctx->pc != 0x481EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481EE4u; }
        if (ctx->pc != 0x481EE4u) { return; }
    }
    ctx->pc = 0x481EE4u;
label_481ee4:
    // 0x481ee4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x481ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x481ee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x481ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481eec: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x481eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x481ef0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x481ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x481ef4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x481ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x481ef8: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x481EF8u;
    SET_GPR_U32(ctx, 31, 0x481F00u);
    ctx->pc = 0x481EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481EF8u;
            // 0x481efc: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481F00u; }
        if (ctx->pc != 0x481F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481F00u; }
        if (ctx->pc != 0x481F00u) { return; }
    }
    ctx->pc = 0x481F00u;
label_481f00:
    // 0x481f00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x481f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x481f04: 0x24040066  addiu       $a0, $zero, 0x66
    ctx->pc = 0x481f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x481f08: 0x24093ff4  addiu       $t1, $zero, 0x3FF4
    ctx->pc = 0x481f08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16372));
    // 0x481f0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x481f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x481f10: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x481f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x481f14: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x481f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x481f18: 0xa0440004  sb          $a0, 0x4($v0)
    ctx->pc = 0x481f18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x481f1c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x481f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x481f20: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x481f20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x481f24: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x481f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x481f28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x481f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481f2c: 0xad090008  sw          $t1, 0x8($t0)
    ctx->pc = 0x481f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 9));
    // 0x481f30: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x481f30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x481f34: 0x250804c8  addiu       $t0, $t0, 0x4C8
    ctx->pc = 0x481f34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1224));
    // 0x481f38: 0xae08000c  sw          $t0, 0xC($s0)
    ctx->pc = 0x481f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
    // 0x481f3c: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x481f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x481f40: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x481f40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x481f44: 0x24e704c9  addiu       $a3, $a3, 0x4C9
    ctx->pc = 0x481f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1225));
    // 0x481f48: 0xae070018  sw          $a3, 0x18($s0)
    ctx->pc = 0x481f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
    // 0x481f4c: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x481f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x481f50: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x481f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x481f54: 0x246304d1  addiu       $v1, $v1, 0x4D1
    ctx->pc = 0x481f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1233));
    // 0x481f58: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x481f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x481f5c: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x481f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
    // 0x481f60: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x481f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x481f64: 0x246304d3  addiu       $v1, $v1, 0x4D3
    ctx->pc = 0x481f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1235));
    // 0x481f68: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x481f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x481f6c: 0xae060034  sw          $a2, 0x34($s0)
    ctx->pc = 0x481f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 6));
    // 0x481f70: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x481f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x481f74: 0x246304d5  addiu       $v1, $v1, 0x4D5
    ctx->pc = 0x481f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1237));
    // 0x481f78: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x481f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x481f7c: 0xae050040  sw          $a1, 0x40($s0)
    ctx->pc = 0x481f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 5));
    // 0x481f80: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x481f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x481f84: 0x246304e5  addiu       $v1, $v1, 0x4E5
    ctx->pc = 0x481f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1253));
    // 0x481f88: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x481f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x481f8c: 0xae05004c  sw          $a1, 0x4C($s0)
    ctx->pc = 0x481f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 5));
    // 0x481f90: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x481f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x481f94: 0x246304f5  addiu       $v1, $v1, 0x4F5
    ctx->pc = 0x481f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1269));
    // 0x481f98: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x481f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x481f9c: 0xae060058  sw          $a2, 0x58($s0)
    ctx->pc = 0x481f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 6));
    // 0x481fa0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x481fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x481fa4: 0x246304f7  addiu       $v1, $v1, 0x4F7
    ctx->pc = 0x481fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1271));
    // 0x481fa8: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x481fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x481fac: 0xc120718  jal         func_481C60
    ctx->pc = 0x481FACu;
    SET_GPR_U32(ctx, 31, 0x481FB4u);
    ctx->pc = 0x481FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481FACu;
            // 0x481fb0: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481C60u;
    if (runtime->hasFunction(0x481C60u)) {
        auto targetFn = runtime->lookupFunction(0x481C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481FB4u; }
        if (ctx->pc != 0x481FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481C60_0x481c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481FB4u; }
        if (ctx->pc != 0x481FB4u) { return; }
    }
    ctx->pc = 0x481FB4u;
label_481fb4:
    // 0x481fb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x481fb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481fb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x481fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481fbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x481fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x481FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x481FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481FC0u;
            // 0x481fc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x481FC8u;
    // 0x481fc8: 0x0  nop
    ctx->pc = 0x481fc8u;
    // NOP
    // 0x481fcc: 0x0  nop
    ctx->pc = 0x481fccu;
    // NOP
}
