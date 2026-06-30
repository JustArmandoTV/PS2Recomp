#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00365450
// Address: 0x365450 - 0x3655d0
void sub_00365450_0x365450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365450_0x365450");
#endif

    switch (ctx->pc) {
        case 0x36546cu: goto label_36546c;
        case 0x36548cu: goto label_36548c;
        case 0x3654bcu: goto label_3654bc;
        case 0x3654dcu: goto label_3654dc;
        case 0x365500u: goto label_365500;
        case 0x365560u: goto label_365560;
        case 0x36556cu: goto label_36556c;
        case 0x365578u: goto label_365578;
        case 0x365584u: goto label_365584;
        case 0x365590u: goto label_365590;
        case 0x36559cu: goto label_36559c;
        case 0x3655b4u: goto label_3655b4;
        default: break;
    }

    ctx->pc = 0x365450u;

    // 0x365450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x365450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x365454: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x365454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x365458: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x365458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36545c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x36545cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x365460: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x365460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x365464: 0xc0d95ac  jal         func_3656B0
    ctx->pc = 0x365464u;
    SET_GPR_U32(ctx, 31, 0x36546Cu);
    ctx->pc = 0x365468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365464u;
            // 0x365468: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3656B0u;
    if (runtime->hasFunction(0x3656B0u)) {
        auto targetFn = runtime->lookupFunction(0x3656B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36546Cu; }
        if (ctx->pc != 0x36546Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003656B0_0x3656b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36546Cu; }
        if (ctx->pc != 0x36546Cu) { return; }
    }
    ctx->pc = 0x36546Cu;
label_36546c:
    // 0x36546c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36546cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x365470: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x365470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x365474: 0x24636960  addiu       $v1, $v1, 0x6960
    ctx->pc = 0x365474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26976));
    // 0x365478: 0x24426998  addiu       $v0, $v0, 0x6998
    ctx->pc = 0x365478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27032));
    // 0x36547c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x36547cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x365480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365484: 0xc0d95a8  jal         func_3656A0
    ctx->pc = 0x365484u;
    SET_GPR_U32(ctx, 31, 0x36548Cu);
    ctx->pc = 0x365488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365484u;
            // 0x365488: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3656A0u;
    if (runtime->hasFunction(0x3656A0u)) {
        auto targetFn = runtime->lookupFunction(0x3656A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36548Cu; }
        if (ctx->pc != 0x36548Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003656A0_0x3656a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36548Cu; }
        if (ctx->pc != 0x36548Cu) { return; }
    }
    ctx->pc = 0x36548Cu;
label_36548c:
    // 0x36548c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x36548cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x365490: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x365490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x365494: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x365494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x365498: 0x24426810  addiu       $v0, $v0, 0x6810
    ctx->pc = 0x365498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26640));
    // 0x36549c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x36549cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3654a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3654a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3654a4: 0x24426848  addiu       $v0, $v0, 0x6848
    ctx->pc = 0x3654a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26696));
    // 0x3654a8: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3654a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x3654ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3654acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3654b0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3654b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x3654b4: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x3654B4u;
    SET_GPR_U32(ctx, 31, 0x3654BCu);
    ctx->pc = 0x3654B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3654B4u;
            // 0x3654b8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3654BCu; }
        if (ctx->pc != 0x3654BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3654BCu; }
        if (ctx->pc != 0x3654BCu) { return; }
    }
    ctx->pc = 0x3654BCu;
label_3654bc:
    // 0x3654bc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3654bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3654c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3654c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3654c4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3654C4u;
    {
        const bool branch_taken_0x3654c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3654C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3654C4u;
            // 0x3654c8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3654c4) {
            ctx->pc = 0x3654E0u;
            goto label_3654e0;
        }
    }
    ctx->pc = 0x3654CCu;
    // 0x3654cc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3654ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x3654d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3654d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3654d4: 0xc0827ac  jal         func_209EB0
    ctx->pc = 0x3654D4u;
    SET_GPR_U32(ctx, 31, 0x3654DCu);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3654DCu; }
        if (ctx->pc != 0x3654DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3654DCu; }
        if (ctx->pc != 0x3654DCu) { return; }
    }
    ctx->pc = 0x3654DCu;
label_3654dc:
    // 0x3654dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3654dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3654e0:
    // 0x3654e0: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x3654e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x3654e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3654e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3654e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3654e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3654ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3654ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3654f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3654F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3654F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3654F0u;
            // 0x3654f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3654F8u;
    // 0x3654f8: 0x0  nop
    ctx->pc = 0x3654f8u;
    // NOP
    // 0x3654fc: 0x0  nop
    ctx->pc = 0x3654fcu;
    // NOP
label_365500:
    // 0x365500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x365500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x365504: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x365504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x365508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x365508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36550c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36550cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x365510: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x365510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365514: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x365514u;
    {
        const bool branch_taken_0x365514 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x365518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x365514u;
            // 0x365518: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365514) {
            ctx->pc = 0x3655B4u;
            goto label_3655b4;
        }
    }
    ctx->pc = 0x36551Cu;
    // 0x36551c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36551cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x365520: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x365520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x365524: 0x24636960  addiu       $v1, $v1, 0x6960
    ctx->pc = 0x365524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26976));
    // 0x365528: 0x24426998  addiu       $v0, $v0, 0x6998
    ctx->pc = 0x365528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27032));
    // 0x36552c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x36552cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x365530: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x365530u;
    {
        const bool branch_taken_0x365530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x365534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x365530u;
            // 0x365534: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365530) {
            ctx->pc = 0x36559Cu;
            goto label_36559c;
        }
    }
    ctx->pc = 0x365538u;
    // 0x365538: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x365538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x36553c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36553cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x365540: 0x24636910  addiu       $v1, $v1, 0x6910
    ctx->pc = 0x365540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26896));
    // 0x365544: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x365544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x365548: 0x24426948  addiu       $v0, $v0, 0x6948
    ctx->pc = 0x365548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26952));
    // 0x36554c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x36554cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x365550: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x365550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x365554: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x365554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x365558: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x365558u;
    SET_GPR_U32(ctx, 31, 0x365560u);
    ctx->pc = 0x36555Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365558u;
            // 0x36555c: 0x24a54d50  addiu       $a1, $a1, 0x4D50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365560u; }
        if (ctx->pc != 0x365560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365560u; }
        if (ctx->pc != 0x365560u) { return; }
    }
    ctx->pc = 0x365560u;
label_365560:
    // 0x365560: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x365560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x365564: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x365564u;
    SET_GPR_U32(ctx, 31, 0x36556Cu);
    ctx->pc = 0x365568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365564u;
            // 0x365568: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36556Cu; }
        if (ctx->pc != 0x36556Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36556Cu; }
        if (ctx->pc != 0x36556Cu) { return; }
    }
    ctx->pc = 0x36556Cu;
label_36556c:
    // 0x36556c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x36556cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x365570: 0xc0d958c  jal         func_365630
    ctx->pc = 0x365570u;
    SET_GPR_U32(ctx, 31, 0x365578u);
    ctx->pc = 0x365574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365570u;
            // 0x365574: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x365630u;
    if (runtime->hasFunction(0x365630u)) {
        auto targetFn = runtime->lookupFunction(0x365630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365578u; }
        if (ctx->pc != 0x365578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00365630_0x365630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365578u; }
        if (ctx->pc != 0x365578u) { return; }
    }
    ctx->pc = 0x365578u;
label_365578:
    // 0x365578: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x365578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x36557c: 0xc0d958c  jal         func_365630
    ctx->pc = 0x36557Cu;
    SET_GPR_U32(ctx, 31, 0x365584u);
    ctx->pc = 0x365580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36557Cu;
            // 0x365580: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x365630u;
    if (runtime->hasFunction(0x365630u)) {
        auto targetFn = runtime->lookupFunction(0x365630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365584u; }
        if (ctx->pc != 0x365584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00365630_0x365630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365584u; }
        if (ctx->pc != 0x365584u) { return; }
    }
    ctx->pc = 0x365584u;
label_365584:
    // 0x365584: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x365584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x365588: 0xc0d9574  jal         func_3655D0
    ctx->pc = 0x365588u;
    SET_GPR_U32(ctx, 31, 0x365590u);
    ctx->pc = 0x36558Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365588u;
            // 0x36558c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3655D0u;
    if (runtime->hasFunction(0x3655D0u)) {
        auto targetFn = runtime->lookupFunction(0x3655D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365590u; }
        if (ctx->pc != 0x365590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003655D0_0x3655d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x365590u; }
        if (ctx->pc != 0x365590u) { return; }
    }
    ctx->pc = 0x365590u;
label_365590:
    // 0x365590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365594: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x365594u;
    SET_GPR_U32(ctx, 31, 0x36559Cu);
    ctx->pc = 0x365598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x365594u;
            // 0x365598: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36559Cu; }
        if (ctx->pc != 0x36559Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36559Cu; }
        if (ctx->pc != 0x36559Cu) { return; }
    }
    ctx->pc = 0x36559Cu;
label_36559c:
    // 0x36559c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x36559cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3655a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3655a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3655a4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3655A4u;
    {
        const bool branch_taken_0x3655a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3655a4) {
            ctx->pc = 0x3655A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3655A4u;
            // 0x3655a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3655B8u;
            goto label_3655b8;
        }
    }
    ctx->pc = 0x3655ACu;
    // 0x3655ac: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3655ACu;
    SET_GPR_U32(ctx, 31, 0x3655B4u);
    ctx->pc = 0x3655B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3655ACu;
            // 0x3655b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3655B4u; }
        if (ctx->pc != 0x3655B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3655B4u; }
        if (ctx->pc != 0x3655B4u) { return; }
    }
    ctx->pc = 0x3655B4u;
label_3655b4:
    // 0x3655b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3655b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3655b8:
    // 0x3655b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3655b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3655bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3655bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3655c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3655c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3655c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3655C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3655C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3655C4u;
            // 0x3655c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3655CCu;
    // 0x3655cc: 0x0  nop
    ctx->pc = 0x3655ccu;
    // NOP
}
