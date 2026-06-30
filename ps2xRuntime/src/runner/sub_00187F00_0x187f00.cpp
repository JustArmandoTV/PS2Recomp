#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187F00
// Address: 0x187f00 - 0x187fa8
void sub_00187F00_0x187f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187F00_0x187f00");
#endif

    switch (ctx->pc) {
        case 0x187f00u: goto label_187f00;
        case 0x187f04u: goto label_187f04;
        case 0x187f08u: goto label_187f08;
        case 0x187f0cu: goto label_187f0c;
        case 0x187f10u: goto label_187f10;
        case 0x187f14u: goto label_187f14;
        case 0x187f18u: goto label_187f18;
        case 0x187f1cu: goto label_187f1c;
        case 0x187f20u: goto label_187f20;
        case 0x187f24u: goto label_187f24;
        case 0x187f28u: goto label_187f28;
        case 0x187f2cu: goto label_187f2c;
        case 0x187f30u: goto label_187f30;
        case 0x187f34u: goto label_187f34;
        case 0x187f38u: goto label_187f38;
        case 0x187f3cu: goto label_187f3c;
        case 0x187f40u: goto label_187f40;
        case 0x187f44u: goto label_187f44;
        case 0x187f48u: goto label_187f48;
        case 0x187f4cu: goto label_187f4c;
        case 0x187f50u: goto label_187f50;
        case 0x187f54u: goto label_187f54;
        case 0x187f58u: goto label_187f58;
        case 0x187f5cu: goto label_187f5c;
        case 0x187f60u: goto label_187f60;
        case 0x187f64u: goto label_187f64;
        case 0x187f68u: goto label_187f68;
        case 0x187f6cu: goto label_187f6c;
        case 0x187f70u: goto label_187f70;
        case 0x187f74u: goto label_187f74;
        case 0x187f78u: goto label_187f78;
        case 0x187f7cu: goto label_187f7c;
        case 0x187f80u: goto label_187f80;
        case 0x187f84u: goto label_187f84;
        case 0x187f88u: goto label_187f88;
        case 0x187f8cu: goto label_187f8c;
        case 0x187f90u: goto label_187f90;
        case 0x187f94u: goto label_187f94;
        case 0x187f98u: goto label_187f98;
        case 0x187f9cu: goto label_187f9c;
        case 0x187fa0u: goto label_187fa0;
        case 0x187fa4u: goto label_187fa4;
        default: break;
    }

    ctx->pc = 0x187f00u;

label_187f00:
    // 0x187f00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x187f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_187f04:
    // 0x187f04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_187f08:
    // 0x187f08: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x187f08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
label_187f0c:
    // 0x187f0c: 0x26106958  addiu       $s0, $s0, 0x6958
    ctx->pc = 0x187f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26968));
label_187f10:
    // 0x187f10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x187f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_187f14:
    // 0x187f14: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x187f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
label_187f18:
    // 0x187f18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187f1c:
    // 0x187f1c: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x187f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
label_187f20:
    // 0x187f20: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x187f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_187f24:
    // 0x187f24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x187f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_187f28:
    // 0x187f28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187f2c:
    // 0x187f2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_187f30:
    // 0x187f30: 0xffa70058  sd          $a3, 0x58($sp)
    ctx->pc = 0x187f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
label_187f34:
    // 0x187f34: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x187f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
label_187f38:
    // 0x187f38: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x187f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
label_187f3c:
    // 0x187f3c: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x187f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
label_187f40:
    // 0x187f40: 0xffab0078  sd          $t3, 0x78($sp)
    ctx->pc = 0x187f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
label_187f44:
    // 0x187f44: 0xe7ac0028  swc1        $f12, 0x28($sp)
    ctx->pc = 0x187f44u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_187f48:
    // 0x187f48: 0xe7ad002c  swc1        $f13, 0x2C($sp)
    ctx->pc = 0x187f48u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_187f4c:
    // 0x187f4c: 0xe7ae0030  swc1        $f14, 0x30($sp)
    ctx->pc = 0x187f4cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_187f50:
    // 0x187f50: 0xe7af0034  swc1        $f15, 0x34($sp)
    ctx->pc = 0x187f50u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_187f54:
    // 0x187f54: 0xe7b00038  swc1        $f16, 0x38($sp)
    ctx->pc = 0x187f54u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_187f58:
    // 0x187f58: 0xe7b1003c  swc1        $f17, 0x3C($sp)
    ctx->pc = 0x187f58u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_187f5c:
    // 0x187f5c: 0xe7b20040  swc1        $f18, 0x40($sp)
    ctx->pc = 0x187f5cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_187f60:
    // 0x187f60: 0xc04a576  jal         func_1295D8
label_187f64:
    if (ctx->pc == 0x187F64u) {
        ctx->pc = 0x187F64u;
            // 0x187f64: 0xe7b30044  swc1        $f19, 0x44($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->pc = 0x187F68u;
        goto label_187f68;
    }
    ctx->pc = 0x187F60u;
    SET_GPR_U32(ctx, 31, 0x187F68u);
    ctx->pc = 0x187F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187F60u;
            // 0x187f64: 0xe7b30044  swc1        $f19, 0x44($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F68u; }
        if (ctx->pc != 0x187F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F68u; }
        if (ctx->pc != 0x187F68u) { return; }
    }
    ctx->pc = 0x187F68u;
label_187f68:
    // 0x187f68: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x187f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_187f6c:
    // 0x187f6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x187f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_187f70:
    // 0x187f70: 0xc04c136  jal         func_1304D8
label_187f74:
    if (ctx->pc == 0x187F74u) {
        ctx->pc = 0x187F74u;
            // 0x187f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x187F78u;
        goto label_187f78;
    }
    ctx->pc = 0x187F70u;
    SET_GPR_U32(ctx, 31, 0x187F78u);
    ctx->pc = 0x187F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187F70u;
            // 0x187f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1304D8u;
    if (runtime->hasFunction(0x1304D8u)) {
        auto targetFn = runtime->lookupFunction(0x1304D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F78u; }
        if (ctx->pc != 0x187F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001304D8_0x1304d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F78u; }
        if (ctx->pc != 0x187F78u) { return; }
    }
    ctx->pc = 0x187F78u;
label_187f78:
    // 0x187f78: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x187f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_187f7c:
    // 0x187f7c: 0x2442fe30  addiu       $v0, $v0, -0x1D0
    ctx->pc = 0x187f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966832));
label_187f80:
    // 0x187f80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x187f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_187f84:
    // 0x187f84: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_187f88:
    if (ctx->pc == 0x187F88u) {
        ctx->pc = 0x187F88u;
            // 0x187f88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x187F8Cu;
        goto label_187f8c;
    }
    ctx->pc = 0x187F84u;
    {
        const bool branch_taken_0x187f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187F84u;
            // 0x187f88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f84) {
            ctx->pc = 0x187F94u;
            goto label_187f94;
        }
    }
    ctx->pc = 0x187F8Cu;
label_187f8c:
    // 0x187f8c: 0x60f809  jalr        $v1
label_187f90:
    if (ctx->pc == 0x187F90u) {
        ctx->pc = 0x187F90u;
            // 0x187f90: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x187F94u;
        goto label_187f94;
    }
    ctx->pc = 0x187F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x187F94u);
        ctx->pc = 0x187F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187F8Cu;
            // 0x187f90: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x187F94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x187F94u; }
            if (ctx->pc != 0x187F94u) { return; }
        }
        }
    }
    ctx->pc = 0x187F94u;
label_187f94:
    // 0x187f94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187f98:
    // 0x187f98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x187f98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_187f9c:
    // 0x187f9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x187f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_187fa0:
    // 0x187fa0: 0x3e00008  jr          $ra
label_187fa4:
    if (ctx->pc == 0x187FA4u) {
        ctx->pc = 0x187FA4u;
            // 0x187fa4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x187FA8u;
        goto label_fallthrough_0x187fa0;
    }
    ctx->pc = 0x187FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187FA0u;
            // 0x187fa4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x187fa0:
    ctx->pc = 0x187FA8u;
}
