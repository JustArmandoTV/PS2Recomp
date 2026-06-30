#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00509230
// Address: 0x509230 - 0x5092a0
void sub_00509230_0x509230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00509230_0x509230");
#endif

    switch (ctx->pc) {
        case 0x509288u: goto label_509288;
        default: break;
    }

    ctx->pc = 0x509230u;

    // 0x509230: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x509230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x509234: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x509234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x509238: 0xa080000f  sb          $zero, 0xF($a0)
    ctx->pc = 0x509238u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x50923c: 0x3e00008  jr          $ra
    ctx->pc = 0x50923Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x509240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50923Cu;
            // 0x509240: 0xa0800010  sb          $zero, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x509244u;
    // 0x509244: 0x0  nop
    ctx->pc = 0x509244u;
    // NOP
    // 0x509248: 0x0  nop
    ctx->pc = 0x509248u;
    // NOP
    // 0x50924c: 0x0  nop
    ctx->pc = 0x50924cu;
    // NOP
    // 0x509250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x509250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x509254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x509254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x509258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x509258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x50925c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50925cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x509260: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x509260u;
    {
        const bool branch_taken_0x509260 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x509260) {
            ctx->pc = 0x509264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x509260u;
            // 0x509264: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50928Cu;
            goto label_50928c;
        }
    }
    ctx->pc = 0x509268u;
    // 0x509268: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x509268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x50926c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x50926cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x509270: 0x24635150  addiu       $v1, $v1, 0x5150
    ctx->pc = 0x509270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20816));
    // 0x509274: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x509274u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x509278: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x509278u;
    {
        const bool branch_taken_0x509278 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x50927Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509278u;
            // 0x50927c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509278) {
            ctx->pc = 0x509288u;
            goto label_509288;
        }
    }
    ctx->pc = 0x509280u;
    // 0x509280: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x509280u;
    SET_GPR_U32(ctx, 31, 0x509288u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509288u; }
        if (ctx->pc != 0x509288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509288u; }
        if (ctx->pc != 0x509288u) { return; }
    }
    ctx->pc = 0x509288u;
label_509288:
    // 0x509288: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x509288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50928c:
    // 0x50928c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50928cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x509290: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x509290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x509294: 0x3e00008  jr          $ra
    ctx->pc = 0x509294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x509298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509294u;
            // 0x509298: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50929Cu;
    // 0x50929c: 0x0  nop
    ctx->pc = 0x50929cu;
    // NOP
}
