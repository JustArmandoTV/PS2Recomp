#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017D658
// Address: 0x17d658 - 0x17d6b0
void sub_0017D658_0x17d658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D658_0x17d658");
#endif

    switch (ctx->pc) {
        case 0x17d67cu: goto label_17d67c;
        case 0x17d688u: goto label_17d688;
        default: break;
    }

    ctx->pc = 0x17d658u;

    // 0x17d658: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17d658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d65c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x17d65cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x17d660: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17d660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17d664: 0x58e00  sll         $s1, $a1, 24
    ctx->pc = 0x17d664u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x17d668: 0x118e03  sra         $s1, $s1, 24
    ctx->pc = 0x17d668u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    // 0x17d66c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17d66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d670: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17d670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17d674: 0xc05f588  jal         func_17D620
    ctx->pc = 0x17D674u;
    SET_GPR_U32(ctx, 31, 0x17D67Cu);
    ctx->pc = 0x17D678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D674u;
            // 0x17d678: 0x42603  sra         $a0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D620u;
    if (runtime->hasFunction(0x17D620u)) {
        auto targetFn = runtime->lookupFunction(0x17D620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D67Cu; }
        if (ctx->pc != 0x17D67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D620_0x17d620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D67Cu; }
        if (ctx->pc != 0x17D67Cu) { return; }
    }
    ctx->pc = 0x17D67Cu;
label_17d67c:
    // 0x17d67c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17d67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d680: 0xc05f588  jal         func_17D620
    ctx->pc = 0x17D680u;
    SET_GPR_U32(ctx, 31, 0x17D688u);
    ctx->pc = 0x17D684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D680u;
            // 0x17d684: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D620u;
    if (runtime->hasFunction(0x17D620u)) {
        auto targetFn = runtime->lookupFunction(0x17D620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D688u; }
        if (ctx->pc != 0x17D688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D620_0x17d620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D688u; }
        if (ctx->pc != 0x17D688u) { return; }
    }
    ctx->pc = 0x17D688u;
label_17d688:
    // 0x17d688: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17d688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17d68c: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x17d68cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x17d690: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17d690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d694: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x17d694u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x17d698: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17d698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d69c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17d69cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d6a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17d6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x17D6A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D6A4u;
            // 0x17d6a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D6ACu;
    // 0x17d6ac: 0x0  nop
    ctx->pc = 0x17d6acu;
    // NOP
}
