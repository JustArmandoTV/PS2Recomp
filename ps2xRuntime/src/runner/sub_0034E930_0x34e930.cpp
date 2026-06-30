#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034E930
// Address: 0x34e930 - 0x34e9a0
void sub_0034E930_0x34e930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E930_0x34e930");
#endif

    switch (ctx->pc) {
        case 0x34e970u: goto label_34e970;
        case 0x34e988u: goto label_34e988;
        default: break;
    }

    ctx->pc = 0x34e930u;

    // 0x34e930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34e930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34e934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34e934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34e938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34e938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34e93c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34e93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34e940: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34e940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e944: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x34E944u;
    {
        const bool branch_taken_0x34e944 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E944u;
            // 0x34e948: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e944) {
            ctx->pc = 0x34E988u;
            goto label_34e988;
        }
    }
    ctx->pc = 0x34E94Cu;
    // 0x34e94c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x34E94Cu;
    {
        const bool branch_taken_0x34e94c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e94c) {
            ctx->pc = 0x34E950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34E94Cu;
            // 0x34e950: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34E974u;
            goto label_34e974;
        }
    }
    ctx->pc = 0x34E954u;
    // 0x34e954: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34E954u;
    {
        const bool branch_taken_0x34e954 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e954) {
            ctx->pc = 0x34E970u;
            goto label_34e970;
        }
    }
    ctx->pc = 0x34E95Cu;
    // 0x34e95c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x34e95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x34e960: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34E960u;
    {
        const bool branch_taken_0x34e960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e960) {
            ctx->pc = 0x34E970u;
            goto label_34e970;
        }
    }
    ctx->pc = 0x34E968u;
    // 0x34e968: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x34E968u;
    SET_GPR_U32(ctx, 31, 0x34E970u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E970u; }
        if (ctx->pc != 0x34E970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E970u; }
        if (ctx->pc != 0x34E970u) { return; }
    }
    ctx->pc = 0x34E970u;
label_34e970:
    // 0x34e970: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x34e970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_34e974:
    // 0x34e974: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x34e974u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x34e978: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34E978u;
    {
        const bool branch_taken_0x34e978 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x34e978) {
            ctx->pc = 0x34E97Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34E978u;
            // 0x34e97c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34E98Cu;
            goto label_34e98c;
        }
    }
    ctx->pc = 0x34E980u;
    // 0x34e980: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x34E980u;
    SET_GPR_U32(ctx, 31, 0x34E988u);
    ctx->pc = 0x34E984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E980u;
            // 0x34e984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E988u; }
        if (ctx->pc != 0x34E988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E988u; }
        if (ctx->pc != 0x34E988u) { return; }
    }
    ctx->pc = 0x34E988u;
label_34e988:
    // 0x34e988: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x34e988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34e98c:
    // 0x34e98c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34e98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34e990: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34e990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e994: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34e994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e998: 0x3e00008  jr          $ra
    ctx->pc = 0x34E998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E998u;
            // 0x34e99c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34E9A0u;
}
