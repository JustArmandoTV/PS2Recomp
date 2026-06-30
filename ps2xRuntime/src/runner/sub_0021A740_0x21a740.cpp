#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021A740
// Address: 0x21a740 - 0x21a7f0
void sub_0021A740_0x21a740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A740_0x21a740");
#endif

    switch (ctx->pc) {
        case 0x21a7a8u: goto label_21a7a8;
        case 0x21a7e0u: goto label_21a7e0;
        default: break;
    }

    ctx->pc = 0x21a740u;

    // 0x21a740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21a740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21a744: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21a744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21a748: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21a748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21a74c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x21a74cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x21a750: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21a750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21a754: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x21a754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x21a758: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21a758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21a75c: 0x2463d430  addiu       $v1, $v1, -0x2BD0
    ctx->pc = 0x21a75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956080));
    // 0x21a760: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x21a760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x21a764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a768: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x21a768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x21a76c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x21a76cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x21a770: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x21a770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x21a774: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21a774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21a778: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x21a778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x21a77c: 0x2442e680  addiu       $v0, $v0, -0x1980
    ctx->pc = 0x21a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960768));
    // 0x21a780: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x21a780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x21a784: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21a784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a788: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x21a788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x21a78c: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x21a78cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x21a790: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x21a790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x21a794: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21a794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21a798: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A798u;
    {
        const bool branch_taken_0x21a798 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A798u;
            // 0x21a79c: 0xac850018  sw          $a1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a798) {
            ctx->pc = 0x21A7A8u;
            goto label_21a7a8;
        }
    }
    ctx->pc = 0x21A7A0u;
    // 0x21a7a0: 0xc08d40c  jal         func_235030
    ctx->pc = 0x21A7A0u;
    SET_GPR_U32(ctx, 31, 0x21A7A8u);
    ctx->pc = 0x21A7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A7A0u;
            // 0x21a7a4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235030u;
    if (runtime->hasFunction(0x235030u)) {
        auto targetFn = runtime->lookupFunction(0x235030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A7A8u; }
        if (ctx->pc != 0x21A7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235030_0x235030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A7A8u; }
        if (ctx->pc != 0x21A7A8u) { return; }
    }
    ctx->pc = 0x21A7A8u;
label_21a7a8:
    // 0x21a7a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21a7a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a7ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21a7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a7b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21a7b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x21A7B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A7B4u;
            // 0x21a7b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A7BCu;
    // 0x21a7bc: 0x0  nop
    ctx->pc = 0x21a7bcu;
    // NOP
    // 0x21a7c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21a7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21a7c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x21a7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a7c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21a7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21a7cc: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x21a7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x21a7d0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A7D0u;
    {
        const bool branch_taken_0x21a7d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a7d0) {
            ctx->pc = 0x21A7D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21A7D0u;
            // 0x21a7d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21A7E4u;
            goto label_21a7e4;
        }
    }
    ctx->pc = 0x21A7D8u;
    // 0x21a7d8: 0xc08c6f0  jal         func_231BC0
    ctx->pc = 0x21A7D8u;
    SET_GPR_U32(ctx, 31, 0x21A7E0u);
    ctx->pc = 0x231BC0u;
    if (runtime->hasFunction(0x231BC0u)) {
        auto targetFn = runtime->lookupFunction(0x231BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A7E0u; }
        if (ctx->pc != 0x21A7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231BC0_0x231bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A7E0u; }
        if (ctx->pc != 0x21A7E0u) { return; }
    }
    ctx->pc = 0x21A7E0u;
label_21a7e0:
    // 0x21a7e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21a7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21a7e4:
    // 0x21a7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x21A7E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A7E4u;
            // 0x21a7e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A7ECu;
    // 0x21a7ec: 0x0  nop
    ctx->pc = 0x21a7ecu;
    // NOP
}
