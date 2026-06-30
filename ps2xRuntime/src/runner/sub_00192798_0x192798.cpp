#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192798
// Address: 0x192798 - 0x192828
void sub_00192798_0x192798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192798_0x192798");
#endif

    switch (ctx->pc) {
        case 0x1927b4u: goto label_1927b4;
        default: break;
    }

    ctx->pc = 0x192798u;

    // 0x192798: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19279c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19279cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1927a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1927a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1927a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1927a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1927a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1927a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1927ac: 0xc064adc  jal         func_192B70
    ctx->pc = 0x1927ACu;
    SET_GPR_U32(ctx, 31, 0x1927B4u);
    ctx->pc = 0x1927B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1927ACu;
            // 0x1927b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192B70u;
    if (runtime->hasFunction(0x192B70u)) {
        auto targetFn = runtime->lookupFunction(0x192B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1927B4u; }
        if (ctx->pc != 0x1927B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192B70_0x192b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1927B4u; }
        if (ctx->pc != 0x1927B4u) { return; }
    }
    ctx->pc = 0x1927B4u;
label_1927b4:
    // 0x1927b4: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x1927b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
    // 0x1927b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1927B8u;
    {
        const bool branch_taken_0x1927b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1927BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1927B8u;
            // 0x1927bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1927b8) {
            ctx->pc = 0x1927D8u;
            goto label_1927d8;
        }
    }
    ctx->pc = 0x1927C0u;
    // 0x1927c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1927c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1927c4: 0x34a50203  ori         $a1, $a1, 0x203
    ctx->pc = 0x1927c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)515);
    // 0x1927c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1927c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1927cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1927ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1927d0: 0x8064a68  j           func_1929A0
    ctx->pc = 0x1927D0u;
    ctx->pc = 0x1927D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1927D0u;
            // 0x1927d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1929A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1929A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1927D8u;
label_1927d8:
    // 0x1927d8: 0xde0300a8  ld          $v1, 0xA8($s0)
    ctx->pc = 0x1927d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x1927dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1927dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1927e0: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x1927e0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x1927e4: 0xde0400b0  ld          $a0, 0xB0($s0)
    ctx->pc = 0x1927e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1927e8: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x1927e8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x1927ec: 0xde0300b8  ld          $v1, 0xB8($s0)
    ctx->pc = 0x1927ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1927f0: 0xfe230010  sd          $v1, 0x10($s1)
    ctx->pc = 0x1927f0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
    // 0x1927f4: 0xde0400c0  ld          $a0, 0xC0($s0)
    ctx->pc = 0x1927f4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1927f8: 0xfe240018  sd          $a0, 0x18($s1)
    ctx->pc = 0x1927f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 4));
    // 0x1927fc: 0xde0300c8  ld          $v1, 0xC8($s0)
    ctx->pc = 0x1927fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x192800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x192800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192804: 0xfe230020  sd          $v1, 0x20($s1)
    ctx->pc = 0x192804u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 3));
    // 0x192808: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x192808u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19280c: 0x3e00008  jr          $ra
    ctx->pc = 0x19280Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19280Cu;
            // 0x192810: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192814u;
    // 0x192814: 0x0  nop
    ctx->pc = 0x192814u;
    // NOP
    // 0x192818: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x192818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x19281c: 0x3e00008  jr          $ra
    ctx->pc = 0x19281Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19281Cu;
            // 0x192820: 0x244282e8  addiu       $v0, $v0, -0x7D18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192824u;
    // 0x192824: 0x0  nop
    ctx->pc = 0x192824u;
    // NOP
}
