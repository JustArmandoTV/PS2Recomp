#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005356E0
// Address: 0x5356e0 - 0x5359c0
void sub_005356E0_0x5356e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005356E0_0x5356e0");
#endif

    switch (ctx->pc) {
        case 0x535704u: goto label_535704;
        case 0x53575cu: goto label_53575c;
        case 0x535794u: goto label_535794;
        case 0x535814u: goto label_535814;
        case 0x535850u: goto label_535850;
        case 0x535864u: goto label_535864;
        case 0x535878u: goto label_535878;
        case 0x53588cu: goto label_53588c;
        case 0x5358a4u: goto label_5358a4;
        case 0x5358b8u: goto label_5358b8;
        case 0x5358ccu: goto label_5358cc;
        case 0x5358e0u: goto label_5358e0;
        case 0x5358f8u: goto label_5358f8;
        case 0x535910u: goto label_535910;
        case 0x535924u: goto label_535924;
        case 0x535938u: goto label_535938;
        case 0x53594cu: goto label_53594c;
        case 0x535960u: goto label_535960;
        case 0x535974u: goto label_535974;
        case 0x53598cu: goto label_53598c;
        default: break;
    }

    ctx->pc = 0x5356e0u;

    // 0x5356e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x5356e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x5356e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5356e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x5356e8: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x5356e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x5356ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5356ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x5356f0: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x5356f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x5356f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5356f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5356f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5356f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x5356fc: 0xc0487aa  jal         func_121EA8
    ctx->pc = 0x5356FCu;
    SET_GPR_U32(ctx, 31, 0x535704u);
    ctx->pc = 0x535700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5356FCu;
            // 0x535700: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121EA8u;
    if (runtime->hasFunction(0x121EA8u)) {
        auto targetFn = runtime->lookupFunction(0x121EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535704u; }
        if (ctx->pc != 0x535704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00121EA8_0x121ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535704u; }
        if (ctx->pc != 0x535704u) { return; }
    }
    ctx->pc = 0x535704u;
label_535704:
    // 0x535704: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x535704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x535708: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x535708u;
    {
        const bool branch_taken_0x535708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x53570Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535708u;
            // 0x53570c: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535708) {
            ctx->pc = 0x535718u;
            goto label_535718;
        }
    }
    ctx->pc = 0x535710u;
    // 0x535710: 0x504000a5  beql        $v0, $zero, . + 4 + (0xA5 << 2)
    ctx->pc = 0x535710u;
    {
        const bool branch_taken_0x535710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x535710) {
            ctx->pc = 0x535714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x535710u;
            // 0x535714: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5359A8u;
            goto label_5359a8;
        }
    }
    ctx->pc = 0x535718u;
label_535718:
    // 0x535718: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x535718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x53571c: 0xae2307bc  sw          $v1, 0x7BC($s1)
    ctx->pc = 0x53571cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1980), GPR_U32(ctx, 3));
    // 0x535720: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x535720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x535724: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x535724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x535728: 0x2c610017  sltiu       $at, $v1, 0x17
    ctx->pc = 0x535728u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x53572c: 0x10200098  beqz        $at, . + 4 + (0x98 << 2)
    ctx->pc = 0x53572Cu;
    {
        const bool branch_taken_0x53572c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x535730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53572Cu;
            // 0x535730: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x53572c) {
            ctx->pc = 0x535990u;
            goto label_535990;
        }
    }
    ctx->pc = 0x535734u;
    // 0x535734: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x535734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x535738: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x535738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x53573c: 0x2484d0d0  addiu       $a0, $a0, -0x2F30
    ctx->pc = 0x53573cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955216));
    // 0x535740: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x535740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x535744: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x535744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x535748: 0x600008  jr          $v1
    ctx->pc = 0x535748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x535750u: goto label_535750;
            case 0x535788u: goto label_535788;
            case 0x5357D0u: goto label_5357d0;
            case 0x535808u: goto label_535808;
            case 0x535844u: goto label_535844;
            case 0x535858u: goto label_535858;
            case 0x53586Cu: goto label_53586c;
            case 0x535880u: goto label_535880;
            case 0x535894u: goto label_535894;
            case 0x5358ACu: goto label_5358ac;
            case 0x5358C0u: goto label_5358c0;
            case 0x5358D4u: goto label_5358d4;
            case 0x5358E8u: goto label_5358e8;
            case 0x535900u: goto label_535900;
            case 0x535918u: goto label_535918;
            case 0x53592Cu: goto label_53592c;
            case 0x535940u: goto label_535940;
            case 0x535954u: goto label_535954;
            case 0x535968u: goto label_535968;
            case 0x53597Cu: goto label_53597c;
            case 0x535990u: goto label_535990;
            default: break;
        }
        return;
    }
    ctx->pc = 0x535750u;
label_535750:
    // 0x535750: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x535750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x535754: 0xc14d3c4  jal         func_534F10
    ctx->pc = 0x535754u;
    SET_GPR_U32(ctx, 31, 0x53575Cu);
    ctx->pc = 0x535758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535754u;
            // 0x535758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x534F10u;
    if (runtime->hasFunction(0x534F10u)) {
        auto targetFn = runtime->lookupFunction(0x534F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53575Cu; }
        if (ctx->pc != 0x53575Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00534F10_0x534f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53575Cu; }
        if (ctx->pc != 0x53575Cu) { return; }
    }
    ctx->pc = 0x53575Cu;
label_53575c:
    // 0x53575c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x53575cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x535760: 0x5200008c  beql        $s0, $zero, . + 4 + (0x8C << 2)
    ctx->pc = 0x535760u;
    {
        const bool branch_taken_0x535760 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x535760) {
            ctx->pc = 0x535764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x535760u;
            // 0x535764: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x535994u;
            goto label_535994;
        }
    }
    ctx->pc = 0x535768u;
    // 0x535768: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x535768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x53576c: 0x5c600004  bgtzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x53576Cu;
    {
        const bool branch_taken_0x53576c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x53576c) {
            ctx->pc = 0x535770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53576Cu;
            // 0x535770: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x535780u;
            goto label_535780;
        }
    }
    ctx->pc = 0x535774u;
    // 0x535774: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x535774u;
    {
        const bool branch_taken_0x535774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x535778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535774u;
            // 0x535778: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535774) {
            ctx->pc = 0x535780u;
            goto label_535780;
        }
    }
    ctx->pc = 0x53577Cu;
    // 0x53577c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x53577cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_535780:
    // 0x535780: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x535780u;
    {
        const bool branch_taken_0x535780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x535784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535780u;
            // 0x535784: 0xafa30034  sw          $v1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535780) {
            ctx->pc = 0x535990u;
            goto label_535990;
        }
    }
    ctx->pc = 0x535788u;
label_535788:
    // 0x535788: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x535788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x53578c: 0xc14d564  jal         func_535590
    ctx->pc = 0x53578Cu;
    SET_GPR_U32(ctx, 31, 0x535794u);
    ctx->pc = 0x535790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53578Cu;
            // 0x535790: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x535590u;
    if (runtime->hasFunction(0x535590u)) {
        auto targetFn = runtime->lookupFunction(0x535590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535794u; }
        if (ctx->pc != 0x535794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00535590_0x535590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535794u; }
        if (ctx->pc != 0x535794u) { return; }
    }
    ctx->pc = 0x535794u;
label_535794:
    // 0x535794: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x535794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x535798: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x535798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x53579c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x53579Cu;
    {
        const bool branch_taken_0x53579c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x5357A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53579Cu;
            // 0x5357a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53579c) {
            ctx->pc = 0x5357B4u;
            goto label_5357b4;
        }
    }
    ctx->pc = 0x5357A4u;
    // 0x5357a4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x5357a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x5357a8: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x5357A8u;
    {
        const bool branch_taken_0x5357a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x5357a8) {
            ctx->pc = 0x5357B4u;
            goto label_5357b4;
        }
    }
    ctx->pc = 0x5357B0u;
    // 0x5357b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5357b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5357b4:
    // 0x5357b4: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x5357B4u;
    {
        const bool branch_taken_0x5357b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x5357b4) {
            ctx->pc = 0x5357B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5357B4u;
            // 0x5357b8: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5357C8u;
            goto label_5357c8;
        }
    }
    ctx->pc = 0x5357BCu;
    // 0x5357bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x5357BCu;
    {
        const bool branch_taken_0x5357bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5357C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5357BCu;
            // 0x5357c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5357bc) {
            ctx->pc = 0x5357C8u;
            goto label_5357c8;
        }
    }
    ctx->pc = 0x5357C4u;
    // 0x5357c4: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x5357c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_5357c8:
    // 0x5357c8: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x5357C8u;
    {
        const bool branch_taken_0x5357c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5357CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5357C8u;
            // 0x5357cc: 0xafa30034  sw          $v1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5357c8) {
            ctx->pc = 0x535990u;
            goto label_535990;
        }
    }
    ctx->pc = 0x5357D0u;
label_5357d0:
    // 0x5357d0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x5357d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x5357d4: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x5357d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x5357d8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x5357D8u;
    {
        const bool branch_taken_0x5357d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x5357DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5357D8u;
            // 0x5357dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5357d8) {
            ctx->pc = 0x5357F0u;
            goto label_5357f0;
        }
    }
    ctx->pc = 0x5357E0u;
    // 0x5357e0: 0x5080006b  beql        $a0, $zero, . + 4 + (0x6B << 2)
    ctx->pc = 0x5357E0u;
    {
        const bool branch_taken_0x5357e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5357e0) {
            ctx->pc = 0x5357E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5357E0u;
            // 0x5357e4: 0xafa50034  sw          $a1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x535990u;
            goto label_535990;
        }
    }
    ctx->pc = 0x5357E8u;
    // 0x5357e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x5357E8u;
    {
        const bool branch_taken_0x5357e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5357ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5357E8u;
            // 0x5357ec: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5357e8) {
            ctx->pc = 0x5357FCu;
            goto label_5357fc;
        }
    }
    ctx->pc = 0x5357F0u;
label_5357f0:
    // 0x5357f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x5357F0u;
    {
        const bool branch_taken_0x5357f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5357F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5357F0u;
            // 0x5357f4: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5357f0) {
            ctx->pc = 0x5357FCu;
            goto label_5357fc;
        }
    }
    ctx->pc = 0x5357F8u;
    // 0x5357f8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x5357f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_5357fc:
    // 0x5357fc: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x5357fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x535800: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x535800u;
    {
        const bool branch_taken_0x535800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x535800) {
            ctx->pc = 0x535990u;
            goto label_535990;
        }
    }
    ctx->pc = 0x535808u;
label_535808:
    // 0x535808: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x535808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x53580c: 0xc14d2d8  jal         func_534B60
    ctx->pc = 0x53580Cu;
    SET_GPR_U32(ctx, 31, 0x535814u);
    ctx->pc = 0x535810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53580Cu;
            // 0x535810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x534B60u;
    if (runtime->hasFunction(0x534B60u)) {
        auto targetFn = runtime->lookupFunction(0x534B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535814u; }
        if (ctx->pc != 0x535814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00534B60_0x534b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535814u; }
        if (ctx->pc != 0x535814u) { return; }
    }
    ctx->pc = 0x535814u;
label_535814:
    // 0x535814: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x535814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x535818: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x535818u;
    {
        const bool branch_taken_0x535818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x53581Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535818u;
            // 0x53581c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535818) {
            ctx->pc = 0x535830u;
            goto label_535830;
        }
    }
    ctx->pc = 0x535820u;
    // 0x535820: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x535820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x535824: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x535824u;
    {
        const bool branch_taken_0x535824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x535824) {
            ctx->pc = 0x535830u;
            goto label_535830;
        }
    }
    ctx->pc = 0x53582Cu;
    // 0x53582c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x53582cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_535830:
    // 0x535830: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x535830u;
    {
        const bool branch_taken_0x535830 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x535830) {
            ctx->pc = 0x53583Cu;
            goto label_53583c;
        }
    }
    ctx->pc = 0x535838u;
    // 0x535838: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x535838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53583c:
    // 0x53583c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x53583Cu;
    {
        const bool branch_taken_0x53583c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x535840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53583Cu;
            // 0x535840: 0xafa40034  sw          $a0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53583c) {
            ctx->pc = 0x535990u;
            goto label_535990;
        }
    }
    ctx->pc = 0x535844u;
label_535844:
    // 0x535844: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x535844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x535848: 0xc14d2a4  jal         func_534A90
    ctx->pc = 0x535848u;
    SET_GPR_U32(ctx, 31, 0x535850u);
    ctx->pc = 0x53584Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535848u;
            // 0x53584c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x534A90u;
    if (runtime->hasFunction(0x534A90u)) {
        auto targetFn = runtime->lookupFunction(0x534A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535850u; }
        if (ctx->pc != 0x535850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00534A90_0x534a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535850u; }
        if (ctx->pc != 0x535850u) { return; }
    }
    ctx->pc = 0x535850u;
label_535850:
    // 0x535850: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x535850u;
    {
        const bool branch_taken_0x535850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x535854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535850u;
            // 0x535854: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535850) {
            ctx->pc = 0x535990u;
            goto label_535990;
        }
    }
    ctx->pc = 0x535858u;
label_535858:
    // 0x535858: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x535858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x53585c: 0xc14d270  jal         func_5349C0
    ctx->pc = 0x53585Cu;
    SET_GPR_U32(ctx, 31, 0x535864u);
    ctx->pc = 0x535860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53585Cu;
            // 0x535860: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5349C0u;
    if (runtime->hasFunction(0x5349C0u)) {
        auto targetFn = runtime->lookupFunction(0x5349C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535864u; }
        if (ctx->pc != 0x535864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005349C0_0x5349c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535864u; }
        if (ctx->pc != 0x535864u) { return; }
    }
    ctx->pc = 0x535864u;
label_535864:
    // 0x535864: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x535864u;
    {
        const bool branch_taken_0x535864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x535868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535864u;
            // 0x535868: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535864) {
            ctx->pc = 0x535990u;
            goto label_535990;
        }
    }
    ctx->pc = 0x53586Cu;
label_53586c:
    // 0x53586c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x53586cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x535870: 0xc14d234  jal         func_5348D0
    ctx->pc = 0x535870u;
    SET_GPR_U32(ctx, 31, 0x535878u);
    ctx->pc = 0x535874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535870u;
            // 0x535874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5348D0u;
    if (runtime->hasFunction(0x5348D0u)) {
        auto targetFn = runtime->lookupFunction(0x5348D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535878u; }
        if (ctx->pc != 0x535878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005348D0_0x5348d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535878u; }
        if (ctx->pc != 0x535878u) { return; }
    }
    ctx->pc = 0x535878u;
label_535878:
    // 0x535878: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x535878u;
    {
        const bool branch_taken_0x535878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53587Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535878u;
            // 0x53587c: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535878) {
            ctx->pc = 0x535990u;
            goto label_535990;
        }
    }
    ctx->pc = 0x535880u;
label_535880:
    // 0x535880: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x535880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x535884: 0xc14d2a4  jal         func_534A90
    ctx->pc = 0x535884u;
    SET_GPR_U32(ctx, 31, 0x53588Cu);
    ctx->pc = 0x535888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535884u;
            // 0x535888: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x534A90u;
    if (runtime->hasFunction(0x534A90u)) {
        auto targetFn = runtime->lookupFunction(0x534A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53588Cu; }
        if (ctx->pc != 0x53588Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00534A90_0x534a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53588Cu; }
        if (ctx->pc != 0x53588Cu) { return; }
    }
    ctx->pc = 0x53588Cu;
label_53588c:
    // 0x53588c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x53588Cu;
    {
        const bool branch_taken_0x53588c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x535890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53588Cu;
            // 0x535890: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53588c) {
            ctx->pc = 0x535990u;
            goto label_535990;
        }
    }
    ctx->pc = 0x535894u;
label_535894:
    // 0x535894: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x535894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x535898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x535898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53589c: 0xc14d1b4  jal         func_5346D0
    ctx->pc = 0x53589Cu;
    SET_GPR_U32(ctx, 31, 0x5358A4u);
    ctx->pc = 0x5358A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53589Cu;
            // 0x5358a0: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5346D0u;
    if (runtime->hasFunction(0x5346D0u)) {
        auto targetFn = runtime->lookupFunction(0x5346D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5358A4u; }
        if (ctx->pc != 0x5358A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005346D0_0x5346d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5358A4u; }
        if (ctx->pc != 0x5358A4u) { return; }
    }
    ctx->pc = 0x5358A4u;
label_5358a4:
    // 0x5358a4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x5358A4u;
    {
        const bool branch_taken_0x5358a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5358A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5358A4u;
            // 0x5358a8: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5358a4) {
            ctx->pc = 0x535990u;
            goto label_535990;
        }
    }
    ctx->pc = 0x5358ACu;
label_5358ac:
    // 0x5358ac: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x5358acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x5358b0: 0xc14d178  jal         func_5345E0
    ctx->pc = 0x5358B0u;
    SET_GPR_U32(ctx, 31, 0x5358B8u);
    ctx->pc = 0x5358B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5358B0u;
            // 0x5358b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5345E0u;
    if (runtime->hasFunction(0x5345E0u)) {
        auto targetFn = runtime->lookupFunction(0x5345E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5358B8u; }
        if (ctx->pc != 0x5358B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005345E0_0x5345e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5358B8u; }
        if (ctx->pc != 0x5358B8u) { return; }
    }
    ctx->pc = 0x5358B8u;
label_5358b8:
    // 0x5358b8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x5358B8u;
    {
        const bool branch_taken_0x5358b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5358BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5358B8u;
            // 0x5358bc: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5358b8) {
            ctx->pc = 0x535990u;
            goto label_535990;
        }
    }
    ctx->pc = 0x5358C0u;
label_5358c0:
    // 0x5358c0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x5358c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x5358c4: 0xc14d178  jal         func_5345E0
    ctx->pc = 0x5358C4u;
    SET_GPR_U32(ctx, 31, 0x5358CCu);
    ctx->pc = 0x5358C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5358C4u;
            // 0x5358c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5345E0u;
    if (runtime->hasFunction(0x5345E0u)) {
        auto targetFn = runtime->lookupFunction(0x5345E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5358CCu; }
        if (ctx->pc != 0x5358CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005345E0_0x5345e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5358CCu; }
        if (ctx->pc != 0x5358CCu) { return; }
    }
    ctx->pc = 0x5358CCu;
label_5358cc:
    // 0x5358cc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x5358CCu;
    {
        const bool branch_taken_0x5358cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5358D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5358CCu;
            // 0x5358d0: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5358cc) {
            ctx->pc = 0x535990u;
            goto label_535990;
        }
    }
    ctx->pc = 0x5358D4u;
label_5358d4:
    // 0x5358d4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x5358d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x5358d8: 0xc14d120  jal         func_534480
    ctx->pc = 0x5358D8u;
    SET_GPR_U32(ctx, 31, 0x5358E0u);
    ctx->pc = 0x5358DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5358D8u;
            // 0x5358dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x534480u;
    if (runtime->hasFunction(0x534480u)) {
        auto targetFn = runtime->lookupFunction(0x534480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5358E0u; }
        if (ctx->pc != 0x5358E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00534480_0x534480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5358E0u; }
        if (ctx->pc != 0x5358E0u) { return; }
    }
    ctx->pc = 0x5358E0u;
label_5358e0:
    // 0x5358e0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x5358E0u;
    {
        const bool branch_taken_0x5358e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5358E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5358E0u;
            // 0x5358e4: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5358e0) {
            ctx->pc = 0x535990u;
            goto label_535990;
        }
    }
    ctx->pc = 0x5358E8u;
label_5358e8:
    // 0x5358e8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x5358e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x5358ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5358ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5358f0: 0xc14d06c  jal         func_5341B0
    ctx->pc = 0x5358F0u;
    SET_GPR_U32(ctx, 31, 0x5358F8u);
    ctx->pc = 0x5358F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5358F0u;
            // 0x5358f4: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5341B0u;
    if (runtime->hasFunction(0x5341B0u)) {
        auto targetFn = runtime->lookupFunction(0x5341B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5358F8u; }
        if (ctx->pc != 0x5358F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005341B0_0x5341b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5358F8u; }
        if (ctx->pc != 0x5358F8u) { return; }
    }
    ctx->pc = 0x5358F8u;
label_5358f8:
    // 0x5358f8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x5358F8u;
    {
        const bool branch_taken_0x5358f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5358FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5358F8u;
            // 0x5358fc: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5358f8) {
            ctx->pc = 0x535990u;
            goto label_535990;
        }
    }
    ctx->pc = 0x535900u;
label_535900:
    // 0x535900: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x535900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x535904: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x535904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x535908: 0xc14cd18  jal         func_533460
    ctx->pc = 0x535908u;
    SET_GPR_U32(ctx, 31, 0x535910u);
    ctx->pc = 0x53590Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535908u;
            // 0x53590c: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x533460u;
    if (runtime->hasFunction(0x533460u)) {
        auto targetFn = runtime->lookupFunction(0x533460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535910u; }
        if (ctx->pc != 0x535910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00533460_0x533460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535910u; }
        if (ctx->pc != 0x535910u) { return; }
    }
    ctx->pc = 0x535910u;
label_535910:
    // 0x535910: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x535910u;
    {
        const bool branch_taken_0x535910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x535914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535910u;
            // 0x535914: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x535910) {
            ctx->pc = 0x535990u;
            goto label_535990;
        }
    }
    ctx->pc = 0x535918u;
label_535918:
    // 0x535918: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x535918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x53591c: 0xc14cce0  jal         func_533380
    ctx->pc = 0x53591Cu;
    SET_GPR_U32(ctx, 31, 0x535924u);
    ctx->pc = 0x535920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53591Cu;
            // 0x535920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x533380u;
    if (runtime->hasFunction(0x533380u)) {
        auto targetFn = runtime->lookupFunction(0x533380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535924u; }
        if (ctx->pc != 0x535924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00533380_0x533380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535924u; }
        if (ctx->pc != 0x535924u) { return; }
    }
    ctx->pc = 0x535924u;
label_535924:
    // 0x535924: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x535924u;
    {
        const bool branch_taken_0x535924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x535928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535924u;
            // 0x535928: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535924) {
            ctx->pc = 0x535990u;
            goto label_535990;
        }
    }
    ctx->pc = 0x53592Cu;
label_53592c:
    // 0x53592c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x53592cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x535930: 0xc14ccac  jal         func_5332B0
    ctx->pc = 0x535930u;
    SET_GPR_U32(ctx, 31, 0x535938u);
    ctx->pc = 0x535934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535930u;
            // 0x535934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5332B0u;
    if (runtime->hasFunction(0x5332B0u)) {
        auto targetFn = runtime->lookupFunction(0x5332B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535938u; }
        if (ctx->pc != 0x535938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005332B0_0x5332b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535938u; }
        if (ctx->pc != 0x535938u) { return; }
    }
    ctx->pc = 0x535938u;
label_535938:
    // 0x535938: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x535938u;
    {
        const bool branch_taken_0x535938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53593Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535938u;
            // 0x53593c: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535938) {
            ctx->pc = 0x535990u;
            goto label_535990;
        }
    }
    ctx->pc = 0x535940u;
label_535940:
    // 0x535940: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x535940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x535944: 0xc14cc7c  jal         func_5331F0
    ctx->pc = 0x535944u;
    SET_GPR_U32(ctx, 31, 0x53594Cu);
    ctx->pc = 0x535948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535944u;
            // 0x535948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5331F0u;
    if (runtime->hasFunction(0x5331F0u)) {
        auto targetFn = runtime->lookupFunction(0x5331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53594Cu; }
        if (ctx->pc != 0x53594Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005331F0_0x5331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53594Cu; }
        if (ctx->pc != 0x53594Cu) { return; }
    }
    ctx->pc = 0x53594Cu;
label_53594c:
    // 0x53594c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x53594Cu;
    {
        const bool branch_taken_0x53594c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x535950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53594Cu;
            // 0x535950: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53594c) {
            ctx->pc = 0x535990u;
            goto label_535990;
        }
    }
    ctx->pc = 0x535954u;
label_535954:
    // 0x535954: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x535954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x535958: 0xc14cc7c  jal         func_5331F0
    ctx->pc = 0x535958u;
    SET_GPR_U32(ctx, 31, 0x535960u);
    ctx->pc = 0x53595Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535958u;
            // 0x53595c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5331F0u;
    if (runtime->hasFunction(0x5331F0u)) {
        auto targetFn = runtime->lookupFunction(0x5331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535960u; }
        if (ctx->pc != 0x535960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005331F0_0x5331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535960u; }
        if (ctx->pc != 0x535960u) { return; }
    }
    ctx->pc = 0x535960u;
label_535960:
    // 0x535960: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x535960u;
    {
        const bool branch_taken_0x535960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x535964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535960u;
            // 0x535964: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535960) {
            ctx->pc = 0x535990u;
            goto label_535990;
        }
    }
    ctx->pc = 0x535968u;
label_535968:
    // 0x535968: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x535968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x53596c: 0xc14d270  jal         func_5349C0
    ctx->pc = 0x53596Cu;
    SET_GPR_U32(ctx, 31, 0x535974u);
    ctx->pc = 0x535970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53596Cu;
            // 0x535970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5349C0u;
    if (runtime->hasFunction(0x5349C0u)) {
        auto targetFn = runtime->lookupFunction(0x5349C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535974u; }
        if (ctx->pc != 0x535974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005349C0_0x5349c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535974u; }
        if (ctx->pc != 0x535974u) { return; }
    }
    ctx->pc = 0x535974u;
label_535974:
    // 0x535974: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x535974u;
    {
        const bool branch_taken_0x535974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x535978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535974u;
            // 0x535978: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535974) {
            ctx->pc = 0x535990u;
            goto label_535990;
        }
    }
    ctx->pc = 0x53597Cu;
label_53597c:
    // 0x53597c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x53597cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x535980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x535980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x535984: 0xc14ca5c  jal         func_532970
    ctx->pc = 0x535984u;
    SET_GPR_U32(ctx, 31, 0x53598Cu);
    ctx->pc = 0x535988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535984u;
            // 0x535988: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x532970u;
    if (runtime->hasFunction(0x532970u)) {
        auto targetFn = runtime->lookupFunction(0x532970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53598Cu; }
        if (ctx->pc != 0x53598Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00532970_0x532970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53598Cu; }
        if (ctx->pc != 0x53598Cu) { return; }
    }
    ctx->pc = 0x53598Cu;
label_53598c:
    // 0x53598c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x53598cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_535990:
    // 0x535990: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x535990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_535994:
    // 0x535994: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x535994u;
    {
        const bool branch_taken_0x535994 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x535998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535994u;
            // 0x535998: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535994) {
            ctx->pc = 0x5359A4u;
            goto label_5359a4;
        }
    }
    ctx->pc = 0x53599Cu;
    // 0x53599c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x53599cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x5359a0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x5359a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_5359a4:
    // 0x5359a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5359a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5359a8:
    // 0x5359a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5359a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5359ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5359acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5359b0: 0x3e00008  jr          $ra
    ctx->pc = 0x5359B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5359B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5359B0u;
            // 0x5359b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5359B8u;
    // 0x5359b8: 0x0  nop
    ctx->pc = 0x5359b8u;
    // NOP
    // 0x5359bc: 0x0  nop
    ctx->pc = 0x5359bcu;
    // NOP
}
