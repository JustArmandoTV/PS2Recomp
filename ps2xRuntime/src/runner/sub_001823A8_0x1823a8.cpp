#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001823A8
// Address: 0x1823a8 - 0x182498
void sub_001823A8_0x1823a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001823A8_0x1823a8");
#endif

    switch (ctx->pc) {
        case 0x182458u: goto label_182458;
        case 0x182474u: goto label_182474;
        case 0x182480u: goto label_182480;
        default: break;
    }

    ctx->pc = 0x1823a8u;

    // 0x1823a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1823a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1823ac: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1823ACu;
    {
        const bool branch_taken_0x1823ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1823B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1823ACu;
            // 0x1823b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823ac) {
            ctx->pc = 0x1823C8u;
            goto label_1823c8;
        }
    }
    ctx->pc = 0x1823B4u;
    // 0x1823b4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1823b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1823b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1823b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1823bc: 0x24847248  addiu       $a0, $a0, 0x7248
    ctx->pc = 0x1823bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29256));
    // 0x1823c0: 0x8060726  j           func_181C98
    ctx->pc = 0x1823C0u;
    ctx->pc = 0x1823C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1823C0u;
            // 0x1823c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C98u;
    if (runtime->hasFunction(0x181C98u)) {
        auto targetFn = runtime->lookupFunction(0x181C98u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00181C98_0x181c98(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1823C8u;
label_1823c8:
    // 0x1823c8: 0x24a3007f  addiu       $v1, $a1, 0x7F
    ctx->pc = 0x1823c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x1823cc: 0x2c6200ff  sltiu       $v0, $v1, 0xFF
    ctx->pc = 0x1823ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x1823d0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1823D0u;
    {
        const bool branch_taken_0x1823d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1823d0) {
            ctx->pc = 0x1823D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1823D0u;
            // 0x1823d4: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1823F4u;
            goto label_1823f4;
        }
    }
    ctx->pc = 0x1823D8u;
    // 0x1823d8: 0x28c2ff81  slti        $v0, $a2, -0x7F
    ctx->pc = 0x1823d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967169) ? 1 : 0);
    // 0x1823dc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1823DCu;
    {
        const bool branch_taken_0x1823dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1823dc) {
            ctx->pc = 0x1823E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1823DCu;
            // 0x1823e0: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1823F4u;
            goto label_1823f4;
        }
    }
    ctx->pc = 0x1823E4u;
    // 0x1823e4: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x1823e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1823e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1823E8u;
    {
        const bool branch_taken_0x1823e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1823ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1823E8u;
            // 0x1823ec: 0x24a7ff81  addiu       $a3, $a1, -0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967169));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823e8) {
            ctx->pc = 0x182408u;
            goto label_182408;
        }
    }
    ctx->pc = 0x1823F0u;
    // 0x1823f0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1823f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1823f4:
    // 0x1823f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1823f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1823f8: 0x24847270  addiu       $a0, $a0, 0x7270
    ctx->pc = 0x1823f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29296));
    // 0x1823fc: 0x8060726  j           func_181C98
    ctx->pc = 0x1823FCu;
    ctx->pc = 0x182400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1823FCu;
            // 0x182400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C98u;
    if (runtime->hasFunction(0x181C98u)) {
        auto targetFn = runtime->lookupFunction(0x181C98u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00181C98_0x181c98(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x182404u;
    // 0x182404: 0x0  nop
    ctx->pc = 0x182404u;
    // NOP
label_182408:
    // 0x182408: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x182408u;
    {
        const bool branch_taken_0x182408 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x18240Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182408u;
            // 0x18240c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182408) {
            ctx->pc = 0x182414u;
            goto label_182414;
        }
    }
    ctx->pc = 0x182410u;
    // 0x182410: 0x21023  negu        $v0, $v0
    ctx->pc = 0x182410u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_182414:
    // 0x182414: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x182414u;
    {
        const bool branch_taken_0x182414 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x182418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182414u;
            // 0x182418: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182414) {
            ctx->pc = 0x182424u;
            goto label_182424;
        }
    }
    ctx->pc = 0x18241Cu;
    // 0x18241c: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x18241cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x182420: 0x453823  subu        $a3, $v0, $a1
    ctx->pc = 0x182420u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_182424:
    // 0x182424: 0x24c2007f  addiu       $v0, $a2, 0x7F
    ctx->pc = 0x182424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 127));
    // 0x182428: 0x24c3ff81  addiu       $v1, $a2, -0x7F
    ctx->pc = 0x182428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x18242c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x18242Cu;
    {
        const bool branch_taken_0x18242c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x18242c) {
            ctx->pc = 0x182430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18242Cu;
            // 0x182430: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182434u;
            goto label_182434;
        }
    }
    ctx->pc = 0x182434u;
label_182434:
    // 0x182434: 0xac870020  sw          $a3, 0x20($a0)
    ctx->pc = 0x182434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
    // 0x182438: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x182438u;
    {
        const bool branch_taken_0x182438 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x18243Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182438u;
            // 0x18243c: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182438) {
            ctx->pc = 0x182448u;
            goto label_182448;
        }
    }
    ctx->pc = 0x182440u;
    // 0x182440: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x182440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x182444: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x182444u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_182448:
    // 0x182448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18244c: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x18244cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x182450: 0x3e00008  jr          $ra
    ctx->pc = 0x182450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182450u;
            // 0x182454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182458u;
label_182458:
    // 0x182458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18245c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18245cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182460: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x182460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182464: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x182464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x182468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18246c: 0xc060704  jal         func_181C10
    ctx->pc = 0x18246Cu;
    SET_GPR_U32(ctx, 31, 0x182474u);
    ctx->pc = 0x182470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18246Cu;
            // 0x182470: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C10u;
    if (runtime->hasFunction(0x181C10u)) {
        auto targetFn = runtime->lookupFunction(0x181C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182474u; }
        if (ctx->pc != 0x182474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181C10_0x181c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182474u; }
        if (ctx->pc != 0x182474u) { return; }
    }
    ctx->pc = 0x182474u;
label_182474:
    // 0x182474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182478: 0xc060926  jal         func_182498
    ctx->pc = 0x182478u;
    SET_GPR_U32(ctx, 31, 0x182480u);
    ctx->pc = 0x18247Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182478u;
            // 0x18247c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182498u;
    if (runtime->hasFunction(0x182498u)) {
        auto targetFn = runtime->lookupFunction(0x182498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182480u; }
        if (ctx->pc != 0x182480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182498_0x182498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182480u; }
        if (ctx->pc != 0x182480u) { return; }
    }
    ctx->pc = 0x182480u;
label_182480:
    // 0x182480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x182480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182484: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x182484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x182488: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18248c: 0x806070a  j           func_181C28
    ctx->pc = 0x18248Cu;
    ctx->pc = 0x182490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18248Cu;
            // 0x182490: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C28u;
    if (runtime->hasFunction(0x181C28u)) {
        auto targetFn = runtime->lookupFunction(0x181C28u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00181C28_0x181c28(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x182494u;
    // 0x182494: 0x0  nop
    ctx->pc = 0x182494u;
    // NOP
}
