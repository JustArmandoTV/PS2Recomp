#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E4440
// Address: 0x2e4440 - 0x2e44a0
void sub_002E4440_0x2e4440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4440_0x2e4440");
#endif

    switch (ctx->pc) {
        case 0x2e4478u: goto label_2e4478;
        default: break;
    }

    ctx->pc = 0x2e4440u;

    // 0x2e4440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e4440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e4444: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x2e4444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2e4448: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e4448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e444c: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x2e444cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e4450: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e4450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e4454: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e4454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e4458: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e4458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e445c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2e445cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e4460: 0xe60c004c  swc1        $f12, 0x4C($s0)
    ctx->pc = 0x2e4460u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x2e4464: 0x2604004c  addiu       $a0, $s0, 0x4C
    ctx->pc = 0x2e4464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x2e4468: 0xe60d0050  swc1        $f13, 0x50($s0)
    ctx->pc = 0x2e4468u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2e446c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e446cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4470: 0xc04cb44  jal         func_132D10
    ctx->pc = 0x2E4470u;
    SET_GPR_U32(ctx, 31, 0x2E4478u);
    ctx->pc = 0x2E4474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4470u;
            // 0x2e4474: 0xe60e0054  swc1        $f14, 0x54($s0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132D10u;
    if (runtime->hasFunction(0x132D10u)) {
        auto targetFn = runtime->lookupFunction(0x132D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4478u; }
        if (ctx->pc != 0x2E4478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132D10_0x132d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4478u; }
        if (ctx->pc != 0x2E4478u) { return; }
    }
    ctx->pc = 0x2E4478u;
label_2e4478:
    // 0x2e4478: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e4478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e447c: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x2e447cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2e4480: 0x8c63e4c8  lw          $v1, -0x1B38($v1)
    ctx->pc = 0x2e4480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960328)));
    // 0x2e4484: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2e4484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e4488: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x2e4488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x2e448c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e448cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4490: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4494: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4494u;
            // 0x2e4498: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E449Cu;
    // 0x2e449c: 0x0  nop
    ctx->pc = 0x2e449cu;
    // NOP
}
