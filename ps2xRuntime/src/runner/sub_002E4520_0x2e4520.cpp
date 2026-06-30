#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E4520
// Address: 0x2e4520 - 0x2e4580
void sub_002E4520_0x2e4520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4520_0x2e4520");
#endif

    switch (ctx->pc) {
        case 0x2e4558u: goto label_2e4558;
        default: break;
    }

    ctx->pc = 0x2e4520u;

    // 0x2e4520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e4520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e4524: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x2e4524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2e4528: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e4528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e452c: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x2e452cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e4530: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e4530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e4534: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e4534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e4538: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e4538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e453c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2e453cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e4540: 0xe60c0024  swc1        $f12, 0x24($s0)
    ctx->pc = 0x2e4540u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2e4544: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x2e4544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x2e4548: 0xe60d0028  swc1        $f13, 0x28($s0)
    ctx->pc = 0x2e4548u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2e454c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e454cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4550: 0xc04cb44  jal         func_132D10
    ctx->pc = 0x2E4550u;
    SET_GPR_U32(ctx, 31, 0x2E4558u);
    ctx->pc = 0x2E4554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4550u;
            // 0x2e4554: 0xe60e002c  swc1        $f14, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132D10u;
    if (runtime->hasFunction(0x132D10u)) {
        auto targetFn = runtime->lookupFunction(0x132D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4558u; }
        if (ctx->pc != 0x2E4558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132D10_0x132d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4558u; }
        if (ctx->pc != 0x2E4558u) { return; }
    }
    ctx->pc = 0x2E4558u;
label_2e4558:
    // 0x2e4558: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e4558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e455c: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x2e455cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2e4560: 0x8c63e4b0  lw          $v1, -0x1B50($v1)
    ctx->pc = 0x2e4560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960304)));
    // 0x2e4564: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2e4564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e4568: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x2e4568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x2e456c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e456cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4570: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4574: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4574u;
            // 0x2e4578: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E457Cu;
    // 0x2e457c: 0x0  nop
    ctx->pc = 0x2e457cu;
    // NOP
}
