#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E3020
// Address: 0x1e3020 - 0x1e3070
void sub_001E3020_0x1e3020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3020_0x1e3020");
#endif

    switch (ctx->pc) {
        case 0x1e3058u: goto label_1e3058;
        default: break;
    }

    ctx->pc = 0x1e3020u;

    // 0x1e3020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3024: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e3028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e302c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e302cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3030: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1E3030u;
    {
        const bool branch_taken_0x1e3030 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3030) {
            ctx->pc = 0x1E3034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3030u;
            // 0x1e3034: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E305Cu;
            goto label_1e305c;
        }
    }
    ctx->pc = 0x1E3038u;
    // 0x1e3038: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e3038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1e303c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e303cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1e3040: 0x2463d410  addiu       $v1, $v1, -0x2BF0
    ctx->pc = 0x1e3040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956048));
    // 0x1e3044: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e3044u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e3048: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3048u;
    {
        const bool branch_taken_0x1e3048 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E304Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3048u;
            // 0x1e304c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3048) {
            ctx->pc = 0x1E3058u;
            goto label_1e3058;
        }
    }
    ctx->pc = 0x1E3050u;
    // 0x1e3050: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x1E3050u;
    SET_GPR_U32(ctx, 31, 0x1E3058u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3058u; }
        if (ctx->pc != 0x1E3058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3058u; }
        if (ctx->pc != 0x1E3058u) { return; }
    }
    ctx->pc = 0x1E3058u;
label_1e3058:
    // 0x1e3058: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e3058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e305c:
    // 0x1e305c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e305cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3060: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3064: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3064u;
            // 0x1e3068: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E306Cu;
    // 0x1e306c: 0x0  nop
    ctx->pc = 0x1e306cu;
    // NOP
}
