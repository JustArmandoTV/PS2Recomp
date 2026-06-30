#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024A8E0
// Address: 0x24a8e0 - 0x24a960
void sub_0024A8E0_0x24a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A8E0_0x24a8e0");
#endif

    switch (ctx->pc) {
        case 0x24a910u: goto label_24a910;
        default: break;
    }

    ctx->pc = 0x24a8e0u;

    // 0x24a8e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24a8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24a8e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24a8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24a8e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24a8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24a8ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24a8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24a8f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24a8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24a8f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24a8f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a8f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24a8f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a8fc: 0x2612000c  addiu       $s2, $s0, 0xC
    ctx->pc = 0x24a8fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x24a900: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x24a900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a904: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x24a904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a908: 0xc098768  jal         func_261DA0
    ctx->pc = 0x24A908u;
    SET_GPR_U32(ctx, 31, 0x24A910u);
    ctx->pc = 0x24A90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A908u;
            // 0x24a90c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261DA0u;
    if (runtime->hasFunction(0x261DA0u)) {
        auto targetFn = runtime->lookupFunction(0x261DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A910u; }
        if (ctx->pc != 0x24A910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261DA0_0x261da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A910u; }
        if (ctx->pc != 0x24A910u) { return; }
    }
    ctx->pc = 0x24A910u;
label_24a910:
    // 0x24a910: 0x92450002  lbu         $a1, 0x2($s2)
    ctx->pc = 0x24a910u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x24a914: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x24a914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x24a918: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x24a918u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24a91c: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x24a91cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x24a920: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x24a920u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x24a924: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x24a924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x24a928: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x24a928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24a92c: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x24a92cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x24a930: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x24a930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x24a934: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24a934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24a938: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x24a938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24a93c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24a93cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24a940: 0x2463001b  addiu       $v1, $v1, 0x1B
    ctx->pc = 0x24a940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27));
    // 0x24a944: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24a944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a948: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24a948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24a94c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x24a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24a950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24a950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a954: 0x3e00008  jr          $ra
    ctx->pc = 0x24A954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A954u;
            // 0x24a958: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24A95Cu;
    // 0x24a95c: 0x0  nop
    ctx->pc = 0x24a95cu;
    // NOP
}
