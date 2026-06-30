#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00165768
// Address: 0x165768 - 0x1658b8
void sub_00165768_0x165768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165768_0x165768");
#endif

    switch (ctx->pc) {
        case 0x165768u: goto label_165768;
        case 0x16576cu: goto label_16576c;
        case 0x165770u: goto label_165770;
        case 0x165774u: goto label_165774;
        case 0x165778u: goto label_165778;
        case 0x16577cu: goto label_16577c;
        case 0x165780u: goto label_165780;
        case 0x165784u: goto label_165784;
        case 0x165788u: goto label_165788;
        case 0x16578cu: goto label_16578c;
        case 0x165790u: goto label_165790;
        case 0x165794u: goto label_165794;
        case 0x165798u: goto label_165798;
        case 0x16579cu: goto label_16579c;
        case 0x1657a0u: goto label_1657a0;
        case 0x1657a4u: goto label_1657a4;
        case 0x1657a8u: goto label_1657a8;
        case 0x1657acu: goto label_1657ac;
        case 0x1657b0u: goto label_1657b0;
        case 0x1657b4u: goto label_1657b4;
        case 0x1657b8u: goto label_1657b8;
        case 0x1657bcu: goto label_1657bc;
        case 0x1657c0u: goto label_1657c0;
        case 0x1657c4u: goto label_1657c4;
        case 0x1657c8u: goto label_1657c8;
        case 0x1657ccu: goto label_1657cc;
        case 0x1657d0u: goto label_1657d0;
        case 0x1657d4u: goto label_1657d4;
        case 0x1657d8u: goto label_1657d8;
        case 0x1657dcu: goto label_1657dc;
        case 0x1657e0u: goto label_1657e0;
        case 0x1657e4u: goto label_1657e4;
        case 0x1657e8u: goto label_1657e8;
        case 0x1657ecu: goto label_1657ec;
        case 0x1657f0u: goto label_1657f0;
        case 0x1657f4u: goto label_1657f4;
        case 0x1657f8u: goto label_1657f8;
        case 0x1657fcu: goto label_1657fc;
        case 0x165800u: goto label_165800;
        case 0x165804u: goto label_165804;
        case 0x165808u: goto label_165808;
        case 0x16580cu: goto label_16580c;
        case 0x165810u: goto label_165810;
        case 0x165814u: goto label_165814;
        case 0x165818u: goto label_165818;
        case 0x16581cu: goto label_16581c;
        case 0x165820u: goto label_165820;
        case 0x165824u: goto label_165824;
        case 0x165828u: goto label_165828;
        case 0x16582cu: goto label_16582c;
        case 0x165830u: goto label_165830;
        case 0x165834u: goto label_165834;
        case 0x165838u: goto label_165838;
        case 0x16583cu: goto label_16583c;
        case 0x165840u: goto label_165840;
        case 0x165844u: goto label_165844;
        case 0x165848u: goto label_165848;
        case 0x16584cu: goto label_16584c;
        case 0x165850u: goto label_165850;
        case 0x165854u: goto label_165854;
        case 0x165858u: goto label_165858;
        case 0x16585cu: goto label_16585c;
        case 0x165860u: goto label_165860;
        case 0x165864u: goto label_165864;
        case 0x165868u: goto label_165868;
        case 0x16586cu: goto label_16586c;
        case 0x165870u: goto label_165870;
        case 0x165874u: goto label_165874;
        case 0x165878u: goto label_165878;
        case 0x16587cu: goto label_16587c;
        case 0x165880u: goto label_165880;
        case 0x165884u: goto label_165884;
        case 0x165888u: goto label_165888;
        case 0x16588cu: goto label_16588c;
        case 0x165890u: goto label_165890;
        case 0x165894u: goto label_165894;
        case 0x165898u: goto label_165898;
        case 0x16589cu: goto label_16589c;
        case 0x1658a0u: goto label_1658a0;
        case 0x1658a4u: goto label_1658a4;
        case 0x1658a8u: goto label_1658a8;
        case 0x1658acu: goto label_1658ac;
        case 0x1658b0u: goto label_1658b0;
        case 0x1658b4u: goto label_1658b4;
        default: break;
    }

    ctx->pc = 0x165768u;

label_165768:
    // 0x165768: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x165768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16576c:
    // 0x16576c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16576cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165770:
    // 0x165770: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x165770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_165774:
    // 0x165774: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x165774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_165778:
    // 0x165778: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x165778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16577c:
    // 0x16577c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16577cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_165780:
    // 0x165780: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x165780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_165784:
    // 0x165784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x165784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_165788:
    // 0x165788: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x165788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_16578c:
    // 0x16578c: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
label_165790:
    if (ctx->pc == 0x165790u) {
        ctx->pc = 0x165790u;
            // 0x165790: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x165794u;
        goto label_165794;
    }
    ctx->pc = 0x16578Cu;
    {
        const bool branch_taken_0x16578c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16578c) {
            ctx->pc = 0x165790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16578Cu;
            // 0x165790: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1657DCu;
            goto label_1657dc;
        }
    }
    ctx->pc = 0x165794u;
label_165794:
    // 0x165794: 0xc05df6e  jal         func_177DB8
label_165798:
    if (ctx->pc == 0x165798u) {
        ctx->pc = 0x165798u;
            // 0x165798: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x16579Cu;
        goto label_16579c;
    }
    ctx->pc = 0x165794u;
    SET_GPR_U32(ctx, 31, 0x16579Cu);
    ctx->pc = 0x165798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165794u;
            // 0x165798: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177DB8u;
    if (runtime->hasFunction(0x177DB8u)) {
        auto targetFn = runtime->lookupFunction(0x177DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16579Cu; }
        if (ctx->pc != 0x16579Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177DB8_0x177db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16579Cu; }
        if (ctx->pc != 0x16579Cu) { return; }
    }
    ctx->pc = 0x16579Cu;
label_16579c:
    // 0x16579c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_1657a0:
    if (ctx->pc == 0x1657A0u) {
        ctx->pc = 0x1657A0u;
            // 0x1657a0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1657A4u;
        goto label_1657a4;
    }
    ctx->pc = 0x16579Cu;
    {
        const bool branch_taken_0x16579c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16579c) {
            ctx->pc = 0x1657A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16579Cu;
            // 0x1657a0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1657D8u;
            goto label_1657d8;
        }
    }
    ctx->pc = 0x1657A4u;
label_1657a4:
    // 0x1657a4: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x1657a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1657a8:
    // 0x1657a8: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x1657a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_1657ac:
    // 0x1657ac: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1657acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1657b0:
    // 0x1657b0: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x1657b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_1657b4:
    // 0x1657b4: 0x40f809  jalr        $v0
label_1657b8:
    if (ctx->pc == 0x1657B8u) {
        ctx->pc = 0x1657B8u;
            // 0x1657b8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x1657BCu;
        goto label_1657bc;
    }
    ctx->pc = 0x1657B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1657BCu);
        ctx->pc = 0x1657B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1657B4u;
            // 0x1657b8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1657BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1657BCu; }
            if (ctx->pc != 0x1657BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1657BCu;
label_1657bc:
    // 0x1657bc: 0xc059506  jal         func_165418
label_1657c0:
    if (ctx->pc == 0x1657C0u) {
        ctx->pc = 0x1657C0u;
            // 0x1657c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1657C4u;
        goto label_1657c4;
    }
    ctx->pc = 0x1657BCu;
    SET_GPR_U32(ctx, 31, 0x1657C4u);
    ctx->pc = 0x1657C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1657BCu;
            // 0x1657c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x165418u;
    if (runtime->hasFunction(0x165418u)) {
        auto targetFn = runtime->lookupFunction(0x165418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1657C4u; }
        if (ctx->pc != 0x1657C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00165418_0x165418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1657C4u; }
        if (ctx->pc != 0x1657C4u) { return; }
    }
    ctx->pc = 0x1657C4u;
label_1657c4:
    // 0x1657c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1657c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1657c8:
    // 0x1657c8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1657c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1657cc:
    // 0x1657cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1657d0:
    if (ctx->pc == 0x1657D0u) {
        ctx->pc = 0x1657D0u;
            // 0x1657d0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1657D4u;
        goto label_1657d4;
    }
    ctx->pc = 0x1657CCu;
    {
        const bool branch_taken_0x1657cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1657D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1657CCu;
            // 0x1657d0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1657cc) {
            ctx->pc = 0x1657DCu;
            goto label_1657dc;
        }
    }
    ctx->pc = 0x1657D4u;
label_1657d4:
    // 0x1657d4: 0x0  nop
    ctx->pc = 0x1657d4u;
    // NOP
label_1657d8:
    // 0x1657d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1657d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1657dc:
    // 0x1657dc: 0x54620030  bnel        $v1, $v0, . + 4 + (0x30 << 2)
label_1657e0:
    if (ctx->pc == 0x1657E0u) {
        ctx->pc = 0x1657E0u;
            // 0x1657e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1657E4u;
        goto label_1657e4;
    }
    ctx->pc = 0x1657DCu;
    {
        const bool branch_taken_0x1657dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1657dc) {
            ctx->pc = 0x1657E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1657DCu;
            // 0x1657e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1658A0u;
            goto label_1658a0;
        }
    }
    ctx->pc = 0x1657E4u;
label_1657e4:
    // 0x1657e4: 0xc05dfb2  jal         func_177EC8
label_1657e8:
    if (ctx->pc == 0x1657E8u) {
        ctx->pc = 0x1657E8u;
            // 0x1657e8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1657ECu;
        goto label_1657ec;
    }
    ctx->pc = 0x1657E4u;
    SET_GPR_U32(ctx, 31, 0x1657ECu);
    ctx->pc = 0x1657E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1657E4u;
            // 0x1657e8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177EC8u;
    if (runtime->hasFunction(0x177EC8u)) {
        auto targetFn = runtime->lookupFunction(0x177EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1657ECu; }
        if (ctx->pc != 0x1657ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177EC8_0x177ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1657ECu; }
        if (ctx->pc != 0x1657ECu) { return; }
    }
    ctx->pc = 0x1657ECu;
label_1657ec:
    // 0x1657ec: 0xc05df6e  jal         func_177DB8
label_1657f0:
    if (ctx->pc == 0x1657F0u) {
        ctx->pc = 0x1657F0u;
            // 0x1657f0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1657F4u;
        goto label_1657f4;
    }
    ctx->pc = 0x1657ECu;
    SET_GPR_U32(ctx, 31, 0x1657F4u);
    ctx->pc = 0x1657F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1657ECu;
            // 0x1657f0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177DB8u;
    if (runtime->hasFunction(0x177DB8u)) {
        auto targetFn = runtime->lookupFunction(0x177DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1657F4u; }
        if (ctx->pc != 0x1657F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177DB8_0x177db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1657F4u; }
        if (ctx->pc != 0x1657F4u) { return; }
    }
    ctx->pc = 0x1657F4u;
label_1657f4:
    // 0x1657f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1657f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1657f8:
    // 0x1657f8: 0x54430029  bnel        $v0, $v1, . + 4 + (0x29 << 2)
label_1657fc:
    if (ctx->pc == 0x1657FCu) {
        ctx->pc = 0x1657FCu;
            // 0x1657fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x165800u;
        goto label_165800;
    }
    ctx->pc = 0x1657F8u;
    {
        const bool branch_taken_0x1657f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1657f8) {
            ctx->pc = 0x1657FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1657F8u;
            // 0x1657fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1658A0u;
            goto label_1658a0;
        }
    }
    ctx->pc = 0x165800u;
label_165800:
    // 0x165800: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x165800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_165804:
    // 0x165804: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_165808:
    if (ctx->pc == 0x165808u) {
        ctx->pc = 0x16580Cu;
        goto label_16580c;
    }
    ctx->pc = 0x165804u;
    {
        const bool branch_taken_0x165804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165804) {
            ctx->pc = 0x165870u;
            goto label_165870;
        }
    }
    ctx->pc = 0x16580Cu;
label_16580c:
    // 0x16580c: 0xc0599d2  jal         func_166748
label_165810:
    if (ctx->pc == 0x165810u) {
        ctx->pc = 0x165810u;
            // 0x165810: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x165814u;
        goto label_165814;
    }
    ctx->pc = 0x16580Cu;
    SET_GPR_U32(ctx, 31, 0x165814u);
    ctx->pc = 0x165810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16580Cu;
            // 0x165810: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165814u; }
        if (ctx->pc != 0x165814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165814u; }
        if (ctx->pc != 0x165814u) { return; }
    }
    ctx->pc = 0x165814u;
label_165814:
    // 0x165814: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x165814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_165818:
    // 0x165818: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x165818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_16581c:
    // 0x16581c: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_165820:
    if (ctx->pc == 0x165820u) {
        ctx->pc = 0x165820u;
            // 0x165820: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x165824u;
        goto label_165824;
    }
    ctx->pc = 0x16581Cu;
    {
        const bool branch_taken_0x16581c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x165820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16581Cu;
            // 0x165820: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16581c) {
            ctx->pc = 0x165868u;
            goto label_165868;
        }
    }
    ctx->pc = 0x165824u;
label_165824:
    // 0x165824: 0x3c13005d  lui         $s3, 0x5D
    ctx->pc = 0x165824u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)93 << 16));
label_165828:
    // 0x165828: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x165828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_16582c:
    // 0x16582c: 0x0  nop
    ctx->pc = 0x16582cu;
    // NOP
label_165830:
    // 0x165830: 0x123840  sll         $a3, $s2, 1
    ctx->pc = 0x165830u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_165834:
    // 0x165834: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x165834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_165838:
    // 0x165838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16583c:
    // 0x16583c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x16583cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_165840:
    // 0x165840: 0x8e6361ec  lw          $v1, 0x61EC($s3)
    ctx->pc = 0x165840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 25068)));
label_165844:
    // 0x165844: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x165844u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_165848:
    // 0x165848: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x165848u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_16584c:
    // 0x16584c: 0x60f809  jalr        $v1
label_165850:
    if (ctx->pc == 0x165850u) {
        ctx->pc = 0x165850u;
            // 0x165850: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x165854u;
        goto label_165854;
    }
    ctx->pc = 0x16584Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x165854u);
        ctx->pc = 0x165850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16584Cu;
            // 0x165850: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x165854u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x165854u; }
            if (ctx->pc != 0x165854u) { return; }
        }
        }
    }
    ctx->pc = 0x165854u;
label_165854:
    // 0x165854: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x165854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_165858:
    // 0x165858: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x165858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_16585c:
    // 0x16585c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x16585cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_165860:
    // 0x165860: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_165864:
    if (ctx->pc == 0x165864u) {
        ctx->pc = 0x165864u;
            // 0x165864: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->pc = 0x165868u;
        goto label_165868;
    }
    ctx->pc = 0x165860u;
    {
        const bool branch_taken_0x165860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165860) {
            ctx->pc = 0x165864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165860u;
            // 0x165864: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x165830u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_165830;
        }
    }
    ctx->pc = 0x165868u;
label_165868:
    // 0x165868: 0xc0599d8  jal         func_166760
label_16586c:
    if (ctx->pc == 0x16586Cu) {
        ctx->pc = 0x165870u;
        goto label_165870;
    }
    ctx->pc = 0x165868u;
    SET_GPR_U32(ctx, 31, 0x165870u);
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165870u; }
        if (ctx->pc != 0x165870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165870u; }
        if (ctx->pc != 0x165870u) { return; }
    }
    ctx->pc = 0x165870u;
label_165870:
    // 0x165870: 0xc059578  jal         func_1655E0
label_165874:
    if (ctx->pc == 0x165874u) {
        ctx->pc = 0x165874u;
            // 0x165874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x165878u;
        goto label_165878;
    }
    ctx->pc = 0x165870u;
    SET_GPR_U32(ctx, 31, 0x165878u);
    ctx->pc = 0x165874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165870u;
            // 0x165874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1655E0u;
    if (runtime->hasFunction(0x1655E0u)) {
        auto targetFn = runtime->lookupFunction(0x1655E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165878u; }
        if (ctx->pc != 0x165878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001655E0_0x1655e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165878u; }
        if (ctx->pc != 0x165878u) { return; }
    }
    ctx->pc = 0x165878u;
label_165878:
    // 0x165878: 0xc05dfa6  jal         func_177E98
label_16587c:
    if (ctx->pc == 0x16587Cu) {
        ctx->pc = 0x16587Cu;
            // 0x16587c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x165880u;
        goto label_165880;
    }
    ctx->pc = 0x165878u;
    SET_GPR_U32(ctx, 31, 0x165880u);
    ctx->pc = 0x16587Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165878u;
            // 0x16587c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177E98u;
    if (runtime->hasFunction(0x177E98u)) {
        auto targetFn = runtime->lookupFunction(0x177E98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165880u; }
        if (ctx->pc != 0x165880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177E98_0x177e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165880u; }
        if (ctx->pc != 0x165880u) { return; }
    }
    ctx->pc = 0x165880u;
label_165880:
    // 0x165880: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x165880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_165884:
    // 0x165884: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x165884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_165888:
    // 0x165888: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x165888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_16588c:
    // 0x16588c: 0x60f809  jalr        $v1
label_165890:
    if (ctx->pc == 0x165890u) {
        ctx->pc = 0x165890u;
            // 0x165890: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x165894u;
        goto label_165894;
    }
    ctx->pc = 0x16588Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x165894u);
        ctx->pc = 0x165890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16588Cu;
            // 0x165890: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x165894u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x165894u; }
            if (ctx->pc != 0x165894u) { return; }
        }
        }
    }
    ctx->pc = 0x165894u;
label_165894:
    // 0x165894: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x165894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_165898:
    // 0x165898: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x165898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_16589c:
    // 0x16589c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16589cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1658a0:
    // 0x1658a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1658a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1658a4:
    // 0x1658a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1658a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1658a8:
    // 0x1658a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1658a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1658ac:
    // 0x1658ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1658acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1658b0:
    // 0x1658b0: 0x3e00008  jr          $ra
label_1658b4:
    if (ctx->pc == 0x1658B4u) {
        ctx->pc = 0x1658B4u;
            // 0x1658b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1658B8u;
        goto label_fallthrough_0x1658b0;
    }
    ctx->pc = 0x1658B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1658B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1658B0u;
            // 0x1658b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1658b0:
    ctx->pc = 0x1658B8u;
}
