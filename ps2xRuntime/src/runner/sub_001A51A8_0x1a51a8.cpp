#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A51A8
// Address: 0x1a51a8 - 0x1a5240
void sub_001A51A8_0x1a51a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A51A8_0x1a51a8");
#endif

    switch (ctx->pc) {
        case 0x1a5204u: goto label_1a5204;
        default: break;
    }

    ctx->pc = 0x1a51a8u;

    // 0x1a51a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a51a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a51ac: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1a51acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a51b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a51b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a51b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a51b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a51b8: 0xc71023  subu        $v0, $a2, $a3
    ctx->pc = 0x1a51b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1a51bc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1a51bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a51c0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a51c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a51c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a51c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a51c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a51c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a51cc: 0x34a5040c  ori         $a1, $a1, 0x40C
    ctx->pc = 0x1a51ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1036);
    // 0x1a51d0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a51d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1a51d4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1a51d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1a51d8: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A51D8u;
    {
        const bool branch_taken_0x1a51d8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A51DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A51D8u;
            // 0x1a51dc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a51d8) {
            ctx->pc = 0x1A51F0u;
            goto label_1a51f0;
        }
    }
    ctx->pc = 0x1A51E0u;
    // 0x1a51e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a51e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a51e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a51e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a51e8: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1A51E8u;
    ctx->pc = 0x1A51ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A51E8u;
            // 0x1a51ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A51F0u;
label_1a51f0:
    // 0x1a51f0: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x1a51f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x1a51f4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1a51f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a51f8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1a51f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1a51fc: 0xc06156e  jal         func_1855B8
    ctx->pc = 0x1A51FCu;
    SET_GPR_U32(ctx, 31, 0x1A5204u);
    ctx->pc = 0x1A5200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A51FCu;
            // 0x1a5200: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1855B8u;
    if (runtime->hasFunction(0x1855B8u)) {
        auto targetFn = runtime->lookupFunction(0x1855B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5204u; }
        if (ctx->pc != 0x1A5204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001855B8_0x1855b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5204u; }
        if (ctx->pc != 0x1A5204u) { return; }
    }
    ctx->pc = 0x1A5204u;
label_1a5204:
    // 0x1a5204: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a5204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5208: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a5208u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a520c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a520cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1a5210: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5210u;
    {
        const bool branch_taken_0x1a5210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5210u;
            // 0x1a5214: 0x34a5040a  ori         $a1, $a1, 0x40A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1034);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5210) {
            ctx->pc = 0x1A5228u;
            goto label_1a5228;
        }
    }
    ctx->pc = 0x1A5218u;
    // 0x1a5218: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a521c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a521cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a5220: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1A5220u;
    ctx->pc = 0x1A5224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5220u;
            // 0x1a5224: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A5228u;
label_1a5228:
    // 0x1a5228: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a522c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a522cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5230: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a5230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a5234: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5234u;
            // 0x1a5238: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A523Cu;
    // 0x1a523c: 0x0  nop
    ctx->pc = 0x1a523cu;
    // NOP
}
