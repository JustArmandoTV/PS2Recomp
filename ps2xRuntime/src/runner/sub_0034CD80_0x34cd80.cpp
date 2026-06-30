#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034CD80
// Address: 0x34cd80 - 0x34ce00
void sub_0034CD80_0x34cd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034CD80_0x34cd80");
#endif

    switch (ctx->pc) {
        case 0x34cdd0u: goto label_34cdd0;
        default: break;
    }

    ctx->pc = 0x34cd80u;

    // 0x34cd80: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x34cd84: 0x3e00008  jr          $ra
    ctx->pc = 0x34CD84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34CD84u;
            // 0x34cd88: 0x24427558  addiu       $v0, $v0, 0x7558 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34CD8Cu;
    // 0x34cd8c: 0x0  nop
    ctx->pc = 0x34cd8cu;
    // NOP
    // 0x34cd90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34cd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34cd94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34cd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34cd98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34cd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34cd9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34cd9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cda0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x34CDA0u;
    {
        const bool branch_taken_0x34cda0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cda0) {
            ctx->pc = 0x34CDA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34CDA0u;
            // 0x34cda4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34CDD4u;
            goto label_34cdd4;
        }
    }
    ctx->pc = 0x34CDA8u;
    // 0x34cda8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x34cdac: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x34cdacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x34cdb0: 0x24425a30  addiu       $v0, $v0, 0x5A30
    ctx->pc = 0x34cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23088));
    // 0x34cdb4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x34cdb4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x34cdb8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x34cdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x34cdbc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34cdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x34cdc0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34CDC0u;
    {
        const bool branch_taken_0x34cdc0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x34CDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34CDC0u;
            // 0x34cdc4: 0xac403eb8  sw          $zero, 0x3EB8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16056), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cdc0) {
            ctx->pc = 0x34CDD0u;
            goto label_34cdd0;
        }
    }
    ctx->pc = 0x34CDC8u;
    // 0x34cdc8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x34CDC8u;
    SET_GPR_U32(ctx, 31, 0x34CDD0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CDD0u; }
        if (ctx->pc != 0x34CDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34CDD0u; }
        if (ctx->pc != 0x34CDD0u) { return; }
    }
    ctx->pc = 0x34CDD0u;
label_34cdd0:
    // 0x34cdd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34cdd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34cdd4:
    // 0x34cdd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34cdd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34cdd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34cdd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34cddc: 0x3e00008  jr          $ra
    ctx->pc = 0x34CDDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34CDDCu;
            // 0x34cde0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34CDE4u;
    // 0x34cde4: 0x0  nop
    ctx->pc = 0x34cde4u;
    // NOP
    // 0x34cde8: 0x0  nop
    ctx->pc = 0x34cde8u;
    // NOP
    // 0x34cdec: 0x0  nop
    ctx->pc = 0x34cdecu;
    // NOP
    // 0x34cdf0: 0x80d3144  j           func_34C510
    ctx->pc = 0x34CDF0u;
    ctx->pc = 0x34CDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34CDF0u;
            // 0x34cdf4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34C510u;
    {
        auto targetFn = runtime->lookupFunction(0x34C510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x34CDF8u;
    // 0x34cdf8: 0x0  nop
    ctx->pc = 0x34cdf8u;
    // NOP
    // 0x34cdfc: 0x0  nop
    ctx->pc = 0x34cdfcu;
    // NOP
}
