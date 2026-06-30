#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00530800
// Address: 0x530800 - 0x5308f0
void sub_00530800_0x530800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00530800_0x530800");
#endif

    switch (ctx->pc) {
        case 0x530830u: goto label_530830;
        case 0x5308d4u: goto label_5308d4;
        default: break;
    }

    ctx->pc = 0x530800u;

    // 0x530800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x530800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x530804: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x530804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x530808: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x530808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x53080c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x53080cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x530810: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x530810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x530814: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x530814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x530818: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x530818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53081c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x53081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x530820: 0x8c620550  lw          $v0, 0x550($v1)
    ctx->pc = 0x530820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1360)));
    // 0x530824: 0x8050010f  lb          $s0, 0x10F($v0)
    ctx->pc = 0x530824u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 271)));
    // 0x530828: 0xc14c494  jal         func_531250
    ctx->pc = 0x530828u;
    SET_GPR_U32(ctx, 31, 0x530830u);
    ctx->pc = 0x53082Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x530828u;
            // 0x53082c: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x531250u;
    if (runtime->hasFunction(0x531250u)) {
        auto targetFn = runtime->lookupFunction(0x531250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530830u; }
        if (ctx->pc != 0x530830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00531250_0x531250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x530830u; }
        if (ctx->pc != 0x530830u) { return; }
    }
    ctx->pc = 0x530830u;
label_530830:
    // 0x530830: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x530830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x530834: 0x52030028  beql        $s0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x530834u;
    {
        const bool branch_taken_0x530834 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x530834) {
            ctx->pc = 0x530838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x530834u;
            // 0x530838: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5308D8u;
            goto label_5308d8;
        }
    }
    ctx->pc = 0x53083Cu;
    // 0x53083c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x53083cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x530840: 0x12030024  beq         $s0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x530840u;
    {
        const bool branch_taken_0x530840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x530840) {
            ctx->pc = 0x5308D4u;
            goto label_5308d4;
        }
    }
    ctx->pc = 0x530848u;
    // 0x530848: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x530848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x53084c: 0x12030009  beq         $s0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x53084Cu;
    {
        const bool branch_taken_0x53084c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x53084c) {
            ctx->pc = 0x530874u;
            goto label_530874;
        }
    }
    ctx->pc = 0x530854u;
    // 0x530854: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x530854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x530858: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x530858u;
    {
        const bool branch_taken_0x530858 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x530858) {
            ctx->pc = 0x530874u;
            goto label_530874;
        }
    }
    ctx->pc = 0x530860u;
    // 0x530860: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x530860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x530864: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x530864u;
    {
        const bool branch_taken_0x530864 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x530864) {
            ctx->pc = 0x530874u;
            goto label_530874;
        }
    }
    ctx->pc = 0x53086Cu;
    // 0x53086c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x53086Cu;
    {
        const bool branch_taken_0x53086c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53086c) {
            ctx->pc = 0x5308D4u;
            goto label_5308d4;
        }
    }
    ctx->pc = 0x530874u;
label_530874:
    // 0x530874: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x530874u;
    {
        const bool branch_taken_0x530874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x530874) {
            ctx->pc = 0x5308D4u;
            goto label_5308d4;
        }
    }
    ctx->pc = 0x53087Cu;
    // 0x53087c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x53087cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x530880: 0x8c850db0  lw          $a1, 0xDB0($a0)
    ctx->pc = 0x530880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3504)));
    // 0x530884: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x530884u;
    {
        const bool branch_taken_0x530884 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x530884) {
            ctx->pc = 0x5308D4u;
            goto label_5308d4;
        }
    }
    ctx->pc = 0x53088Cu;
    // 0x53088c: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x53088cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x530890: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x530890u;
    {
        const bool branch_taken_0x530890 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x530890) {
            ctx->pc = 0x5308D4u;
            goto label_5308d4;
        }
    }
    ctx->pc = 0x530898u;
    // 0x530898: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x530898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x53089c: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x53089Cu;
    {
        const bool branch_taken_0x53089c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53089c) {
            ctx->pc = 0x5308D4u;
            goto label_5308d4;
        }
    }
    ctx->pc = 0x5308A4u;
    // 0x5308a4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x5308a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x5308a8: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x5308A8u;
    {
        const bool branch_taken_0x5308a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5308a8) {
            ctx->pc = 0x5308D4u;
            goto label_5308d4;
        }
    }
    ctx->pc = 0x5308B0u;
    // 0x5308b0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x5308b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x5308b4: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x5308B4u;
    {
        const bool branch_taken_0x5308b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5308b4) {
            ctx->pc = 0x5308D4u;
            goto label_5308d4;
        }
    }
    ctx->pc = 0x5308BCu;
    // 0x5308bc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x5308bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x5308c0: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x5308C0u;
    {
        const bool branch_taken_0x5308c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5308c0) {
            ctx->pc = 0x5308D4u;
            goto label_5308d4;
        }
    }
    ctx->pc = 0x5308C8u;
    // 0x5308c8: 0x8c820e00  lw          $v0, 0xE00($a0)
    ctx->pc = 0x5308c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3584)));
    // 0x5308cc: 0xc075ecc  jal         func_1D7B30
    ctx->pc = 0x5308CCu;
    SET_GPR_U32(ctx, 31, 0x5308D4u);
    ctx->pc = 0x5308D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5308CCu;
            // 0x5308d0: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7B30u;
    if (runtime->hasFunction(0x1D7B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D7B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5308D4u; }
        if (ctx->pc != 0x5308D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B30_0x1d7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5308D4u; }
        if (ctx->pc != 0x5308D4u) { return; }
    }
    ctx->pc = 0x5308D4u;
label_5308d4:
    // 0x5308d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5308d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5308d8:
    // 0x5308d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5308d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5308dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5308dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5308e0: 0x3e00008  jr          $ra
    ctx->pc = 0x5308E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5308E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5308E0u;
            // 0x5308e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5308E8u;
    // 0x5308e8: 0x0  nop
    ctx->pc = 0x5308e8u;
    // NOP
    // 0x5308ec: 0x0  nop
    ctx->pc = 0x5308ecu;
    // NOP
}
