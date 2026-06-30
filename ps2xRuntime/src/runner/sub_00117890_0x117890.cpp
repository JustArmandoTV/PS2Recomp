#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117890
// Address: 0x117890 - 0x117950
void sub_00117890_0x117890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117890_0x117890");
#endif

    switch (ctx->pc) {
        case 0x1178fcu: goto label_1178fc;
        default: break;
    }

    ctx->pc = 0x117890u;

    // 0x117890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x117890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x117894: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x117894u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x117898: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11789c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11789cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1178a0: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x1178a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1178a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1178a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1178a8: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1178A8u;
    {
        const bool branch_taken_0x1178a8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1178ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1178A8u;
            // 0x1178ac: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178a8) {
            ctx->pc = 0x1178C0u;
            goto label_1178c0;
        }
    }
    ctx->pc = 0x1178B0u;
    // 0x1178b0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1178b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1178b4: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x1178b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x1178b8: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1178B8u;
    {
        const bool branch_taken_0x1178b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1178BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1178B8u;
            // 0x1178bc: 0x3c12005d  lui         $s2, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178b8) {
            ctx->pc = 0x1178CCu;
            goto label_1178cc;
        }
    }
    ctx->pc = 0x1178C0u;
label_1178c0:
    // 0x1178c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1178c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1178c4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1178C4u;
    {
        const bool branch_taken_0x1178c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1178C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1178C4u;
            // 0x1178c8: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178c4) {
            ctx->pc = 0x117934u;
            goto label_117934;
        }
    }
    ctx->pc = 0x1178CCu;
label_1178cc:
    // 0x1178cc: 0x2651fa48  addiu       $s1, $s2, -0x5B8
    ctx->pc = 0x1178ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965832));
    // 0x1178d0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1178d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1178d4: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1178D4u;
    {
        const bool branch_taken_0x1178d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1178d4) {
            ctx->pc = 0x1178D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1178D4u;
            // 0x1178d8: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1178E8u;
            goto label_1178e8;
        }
    }
    ctx->pc = 0x1178DCu;
    // 0x1178dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1178dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1178e0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1178E0u;
    {
        const bool branch_taken_0x1178e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1178E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1178E0u;
            // 0x1178e4: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178e0) {
            ctx->pc = 0x117934u;
            goto label_117934;
        }
    }
    ctx->pc = 0x1178E8u;
label_1178e8:
    // 0x1178e8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1178e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1178ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1178ECu;
    {
        const bool branch_taken_0x1178ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1178ec) {
            ctx->pc = 0x11790Cu;
            goto label_11790c;
        }
    }
    ctx->pc = 0x1178F4u;
    // 0x1178f4: 0xc045d06  jal         func_117418
    ctx->pc = 0x1178F4u;
    SET_GPR_U32(ctx, 31, 0x1178FCu);
    ctx->pc = 0x1178F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1178F4u;
            // 0x1178f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117418u;
    if (runtime->hasFunction(0x117418u)) {
        auto targetFn = runtime->lookupFunction(0x117418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1178FCu; }
        if (ctx->pc != 0x1178FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117418_0x117418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1178FCu; }
        if (ctx->pc != 0x1178FCu) { return; }
    }
    ctx->pc = 0x1178FCu;
label_1178fc:
    // 0x1178fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1178fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117900: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x117900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x117904: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x117904u;
    {
        const bool branch_taken_0x117904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x117904) {
            ctx->pc = 0x117908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117904u;
            // 0x117908: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11790Cu;
            goto label_11790c;
        }
    }
    ctx->pc = 0x11790Cu;
label_11790c:
    // 0x11790c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x11790cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x117910: 0x2643fa48  addiu       $v1, $s2, -0x5B8
    ctx->pc = 0x117910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965832));
    // 0x117914: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x117914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x117918: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x117918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11791c: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x11791cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x117920: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x117920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x117924: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x117924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x117928: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x117928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x11792c: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x11792cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
    // 0x117930: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x117930u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
label_117934:
    // 0x117934: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x117934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117938: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117938u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11793c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11793cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117940: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117944: 0x3e00008  jr          $ra
    ctx->pc = 0x117944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117944u;
            // 0x117948: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11794Cu;
    // 0x11794c: 0x0  nop
    ctx->pc = 0x11794cu;
    // NOP
}
