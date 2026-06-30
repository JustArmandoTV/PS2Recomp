#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C4250
// Address: 0x3c4250 - 0x3c42d0
void sub_003C4250_0x3c4250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4250_0x3c4250");
#endif

    switch (ctx->pc) {
        case 0x3c4270u: goto label_3c4270;
        case 0x3c42b0u: goto label_3c42b0;
        default: break;
    }

    ctx->pc = 0x3c4250u;

    // 0x3c4250: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c4250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3c4254: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3c4254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3c4258: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c4258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3c425c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3c425cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3c4260: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c4260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c4264: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c4264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c4268: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C4268u;
    {
        const bool branch_taken_0x3c4268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C426Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4268u;
            // 0x3c426c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4268) {
            ctx->pc = 0x3C428Cu;
            goto label_3c428c;
        }
    }
    ctx->pc = 0x3C4270u;
label_3c4270:
    // 0x3c4270: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3c4270u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c4274: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c4274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3c4278: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c4278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c427c: 0x0  nop
    ctx->pc = 0x3c427cu;
    // NOP
    // 0x3c4280: 0x0  nop
    ctx->pc = 0x3c4280u;
    // NOP
    // 0x3c4284: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3C4284u;
    {
        const bool branch_taken_0x3c4284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c4284) {
            ctx->pc = 0x3C4270u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3c4270;
        }
    }
    ctx->pc = 0x3C428Cu;
label_3c428c:
    // 0x3c428c: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x3c428cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3c4290: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c4290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4294: 0xe7ad0034  swc1        $f13, 0x34($sp)
    ctx->pc = 0x3c4294u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3c4298: 0xe7ae0038  swc1        $f14, 0x38($sp)
    ctx->pc = 0x3c4298u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3c429c: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x3c429cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3c42a0: 0xae250010  sw          $a1, 0x10($s1)
    ctx->pc = 0x3c42a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
    // 0x3c42a4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3c42a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c42a8: 0xc0ee334  jal         func_3B8CD0
    ctx->pc = 0x3C42A8u;
    SET_GPR_U32(ctx, 31, 0x3C42B0u);
    ctx->pc = 0x3C42ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C42A8u;
            // 0x3c42ac: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C42B0u; }
        if (ctx->pc != 0x3C42B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C42B0u; }
        if (ctx->pc != 0x3C42B0u) { return; }
    }
    ctx->pc = 0x3C42B0u;
label_3c42b0:
    // 0x3c42b0: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x3c42b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x3c42b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c42b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c42b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c42b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c42bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c42bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c42c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C42C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C42C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C42C0u;
            // 0x3c42c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C42C8u;
    // 0x3c42c8: 0x0  nop
    ctx->pc = 0x3c42c8u;
    // NOP
    // 0x3c42cc: 0x0  nop
    ctx->pc = 0x3c42ccu;
    // NOP
}
