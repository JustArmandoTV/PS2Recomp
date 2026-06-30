#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001342E0
// Address: 0x1342e0 - 0x1344d0
void sub_001342E0_0x1342e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001342E0_0x1342e0");
#endif

    switch (ctx->pc) {
        case 0x1342fcu: goto label_1342fc;
        case 0x134330u: goto label_134330;
        case 0x134338u: goto label_134338;
        case 0x134340u: goto label_134340;
        case 0x13435cu: goto label_13435c;
        case 0x134364u: goto label_134364;
        case 0x13436cu: goto label_13436c;
        case 0x13437cu: goto label_13437c;
        case 0x134384u: goto label_134384;
        case 0x1343acu: goto label_1343ac;
        case 0x1343e4u: goto label_1343e4;
        case 0x134408u: goto label_134408;
        case 0x134430u: goto label_134430;
        case 0x13447cu: goto label_13447c;
        case 0x134498u: goto label_134498;
        case 0x1344a0u: goto label_1344a0;
        default: break;
    }

    ctx->pc = 0x1342e0u;

label_1342e0:
    // 0x1342e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1342e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1342e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1342e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1342e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1342e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1342ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1342ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1342f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1342f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1342f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1342f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1342f8: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x1342f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_1342fc:
    // 0x1342fc: 0x8f8280f0  lw          $v0, -0x7F10($gp)
    ctx->pc = 0x1342fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
    // 0x134300: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x134300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x134304: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x134304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x134308: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x134308u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13430c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13430cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x134310: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x134310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x134314: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x134314u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x134318: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x134318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x13431c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x13431Cu;
    {
        const bool branch_taken_0x13431c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13431c) {
            ctx->pc = 0x134320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13431Cu;
            // 0x134320: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
            ctx->pc = 0x134348u;
            goto label_134348;
        }
    }
    ctx->pc = 0x134324u;
    // 0x134324: 0x8f8480f4  lw          $a0, -0x7F0C($gp)
    ctx->pc = 0x134324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
    // 0x134328: 0xc04e1b8  jal         func_1386E0
    ctx->pc = 0x134328u;
    SET_GPR_U32(ctx, 31, 0x134330u);
    ctx->pc = 0x13432Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134328u;
            // 0x13432c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1386E0u;
    if (runtime->hasFunction(0x1386E0u)) {
        auto targetFn = runtime->lookupFunction(0x1386E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134330u; }
        if (ctx->pc != 0x134330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001386E0_0x1386e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134330u; }
        if (ctx->pc != 0x134330u) { return; }
    }
    ctx->pc = 0x134330u;
label_134330:
    // 0x134330: 0xc04d5c4  jal         func_135710
    ctx->pc = 0x134330u;
    SET_GPR_U32(ctx, 31, 0x134338u);
    ctx->pc = 0x134334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134330u;
            // 0x134334: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135710u;
    if (runtime->hasFunction(0x135710u)) {
        auto targetFn = runtime->lookupFunction(0x135710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134338u; }
        if (ctx->pc != 0x134338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135710_0x135710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134338u; }
        if (ctx->pc != 0x134338u) { return; }
    }
    ctx->pc = 0x134338u;
label_134338:
    // 0x134338: 0xc04e1d4  jal         func_138750
    ctx->pc = 0x134338u;
    SET_GPR_U32(ctx, 31, 0x134340u);
    ctx->pc = 0x13433Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134338u;
            // 0x13433c: 0x8f8480f4  lw          $a0, -0x7F0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138750u;
    if (runtime->hasFunction(0x138750u)) {
        auto targetFn = runtime->lookupFunction(0x138750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134340u; }
        if (ctx->pc != 0x134340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138750_0x138750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134340u; }
        if (ctx->pc != 0x134340u) { return; }
    }
    ctx->pc = 0x134340u;
label_134340:
    // 0x134340: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x134340u;
    {
        const bool branch_taken_0x134340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134340) {
            ctx->pc = 0x1344B0u;
            goto label_1344b0;
        }
    }
    ctx->pc = 0x134348u;
label_134348:
    // 0x134348: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x134348u;
    {
        const bool branch_taken_0x134348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134348) {
            ctx->pc = 0x13434Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134348u;
            // 0x13434c: 0x8f8480f4  lw          $a0, -0x7F0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134374u;
            goto label_134374;
        }
    }
    ctx->pc = 0x134350u;
    // 0x134350: 0x8f8480f4  lw          $a0, -0x7F0C($gp)
    ctx->pc = 0x134350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
    // 0x134354: 0xc04e1b8  jal         func_1386E0
    ctx->pc = 0x134354u;
    SET_GPR_U32(ctx, 31, 0x13435Cu);
    ctx->pc = 0x134358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134354u;
            // 0x134358: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1386E0u;
    if (runtime->hasFunction(0x1386E0u)) {
        auto targetFn = runtime->lookupFunction(0x1386E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13435Cu; }
        if (ctx->pc != 0x13435Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001386E0_0x1386e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13435Cu; }
        if (ctx->pc != 0x13435Cu) { return; }
    }
    ctx->pc = 0x13435Cu;
label_13435c:
    // 0x13435c: 0xc04d6a0  jal         func_135A80
    ctx->pc = 0x13435Cu;
    SET_GPR_U32(ctx, 31, 0x134364u);
    ctx->pc = 0x134360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13435Cu;
            // 0x134360: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135A80u;
    if (runtime->hasFunction(0x135A80u)) {
        auto targetFn = runtime->lookupFunction(0x135A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134364u; }
        if (ctx->pc != 0x134364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135A80_0x135a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134364u; }
        if (ctx->pc != 0x134364u) { return; }
    }
    ctx->pc = 0x134364u;
label_134364:
    // 0x134364: 0xc04e1d4  jal         func_138750
    ctx->pc = 0x134364u;
    SET_GPR_U32(ctx, 31, 0x13436Cu);
    ctx->pc = 0x134368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134364u;
            // 0x134368: 0x8f8480f4  lw          $a0, -0x7F0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138750u;
    if (runtime->hasFunction(0x138750u)) {
        auto targetFn = runtime->lookupFunction(0x138750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13436Cu; }
        if (ctx->pc != 0x13436Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138750_0x138750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13436Cu; }
        if (ctx->pc != 0x13436Cu) { return; }
    }
    ctx->pc = 0x13436Cu;
label_13436c:
    // 0x13436c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x13436Cu;
    {
        const bool branch_taken_0x13436c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13436c) {
            ctx->pc = 0x1344B0u;
            goto label_1344b0;
        }
    }
    ctx->pc = 0x134374u;
label_134374:
    // 0x134374: 0xc04e1b8  jal         func_1386E0
    ctx->pc = 0x134374u;
    SET_GPR_U32(ctx, 31, 0x13437Cu);
    ctx->pc = 0x134378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134374u;
            // 0x134378: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1386E0u;
    if (runtime->hasFunction(0x1386E0u)) {
        auto targetFn = runtime->lookupFunction(0x1386E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13437Cu; }
        if (ctx->pc != 0x13437Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001386E0_0x1386e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13437Cu; }
        if (ctx->pc != 0x13437Cu) { return; }
    }
    ctx->pc = 0x13437Cu;
label_13437c:
    // 0x13437c: 0xc04e1b0  jal         func_1386C0
    ctx->pc = 0x13437Cu;
    SET_GPR_U32(ctx, 31, 0x134384u);
    ctx->pc = 0x134380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13437Cu;
            // 0x134380: 0x8f8480f4  lw          $a0, -0x7F0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1386C0u;
    if (runtime->hasFunction(0x1386C0u)) {
        auto targetFn = runtime->lookupFunction(0x1386C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134384u; }
        if (ctx->pc != 0x134384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001386C0_0x1386c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134384u; }
        if (ctx->pc != 0x134384u) { return; }
    }
    ctx->pc = 0x134384u;
label_134384:
    // 0x134384: 0x8f8680d0  lw          $a2, -0x7F30($gp)
    ctx->pc = 0x134384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934736)));
    // 0x134388: 0xc78c80fc  lwc1        $f12, -0x7F04($gp)
    ctx->pc = 0x134388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13438c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13438cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134390: 0x8f8980f8  lw          $t1, -0x7F08($gp)
    ctx->pc = 0x134390u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934776)));
    // 0x134394: 0x8f8a80c4  lw          $t2, -0x7F3C($gp)
    ctx->pc = 0x134394u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934724)));
    // 0x134398: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x134398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x13439c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13439cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1343a0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1343a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1343a4: 0xc04d134  jal         func_1344D0
    ctx->pc = 0x1343A4u;
    SET_GPR_U32(ctx, 31, 0x1343ACu);
    ctx->pc = 0x1343A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1343A4u;
            // 0x1343a8: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344D0u;
    if (runtime->hasFunction(0x1344D0u)) {
        auto targetFn = runtime->lookupFunction(0x1344D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1343ACu; }
        if (ctx->pc != 0x1343ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001344D0_0x1344d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1343ACu; }
        if (ctx->pc != 0x1343ACu) { return; }
    }
    ctx->pc = 0x1343ACu;
label_1343ac:
    // 0x1343ac: 0xaf8280c4  sw          $v0, -0x7F3C($gp)
    ctx->pc = 0x1343acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934724), GPR_U32(ctx, 2));
    // 0x1343b0: 0x86230004  lh          $v1, 0x4($s1)
    ctx->pc = 0x1343b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1343b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1343b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1343b8: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1343B8u;
    {
        const bool branch_taken_0x1343b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1343b8) {
            ctx->pc = 0x134408u;
            goto label_134408;
        }
    }
    ctx->pc = 0x1343C0u;
    // 0x1343c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1343c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1343c4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1343c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1343c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1343C8u;
    {
        const bool branch_taken_0x1343c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1343c8) {
            ctx->pc = 0x1343F0u;
            goto label_1343f0;
        }
    }
    ctx->pc = 0x1343D0u;
    // 0x1343d0: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x1343d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x1343d4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1343d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1343d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1343d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1343dc: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x1343DCu;
    SET_GPR_U32(ctx, 31, 0x1343E4u);
    ctx->pc = 0x1343E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1343DCu;
            // 0x1343e0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1343E4u; }
        if (ctx->pc != 0x1343E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1343E4u; }
        if (ctx->pc != 0x1343E4u) { return; }
    }
    ctx->pc = 0x1343E4u;
label_1343e4:
    // 0x1343e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1343E4u;
    {
        const bool branch_taken_0x1343e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1343e4) {
            ctx->pc = 0x134408u;
            goto label_134408;
        }
    }
    ctx->pc = 0x1343ECu;
    // 0x1343ec: 0x0  nop
    ctx->pc = 0x1343ecu;
    // NOP
label_1343f0:
    // 0x1343f0: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x1343f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x1343f4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1343f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1343f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1343f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1343fc: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x1343fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x134400: 0xc04cd60  jal         func_133580
    ctx->pc = 0x134400u;
    SET_GPR_U32(ctx, 31, 0x134408u);
    ctx->pc = 0x134404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134400u;
            // 0x134404: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134408u; }
        if (ctx->pc != 0x134408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134408u; }
        if (ctx->pc != 0x134408u) { return; }
    }
    ctx->pc = 0x134408u;
label_134408:
    // 0x134408: 0x8f8280e4  lw          $v0, -0x7F1C($gp)
    ctx->pc = 0x134408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934756)));
    // 0x13440c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x13440Cu;
    {
        const bool branch_taken_0x13440c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13440c) {
            ctx->pc = 0x134480u;
            goto label_134480;
        }
    }
    ctx->pc = 0x134414u;
    // 0x134414: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x134414u;
    {
        const bool branch_taken_0x134414 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x134414) {
            ctx->pc = 0x134438u;
            goto label_134438;
        }
    }
    ctx->pc = 0x13441Cu;
    // 0x13441c: 0x8f8280e8  lw          $v0, -0x7F18($gp)
    ctx->pc = 0x13441cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934760)));
    // 0x134420: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x134420u;
    {
        const bool branch_taken_0x134420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134420) {
            ctx->pc = 0x134438u;
            goto label_134438;
        }
    }
    ctx->pc = 0x134428u;
    // 0x134428: 0xc04c6ac  jal         func_131AB0
    ctx->pc = 0x134428u;
    SET_GPR_U32(ctx, 31, 0x134430u);
    ctx->pc = 0x13442Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134428u;
            // 0x13442c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131AB0u;
    if (runtime->hasFunction(0x131AB0u)) {
        auto targetFn = runtime->lookupFunction(0x131AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134430u; }
        if (ctx->pc != 0x134430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131AB0_0x131ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134430u; }
        if (ctx->pc != 0x134430u) { return; }
    }
    ctx->pc = 0x134430u;
label_134430:
    // 0x134430: 0xe7808014  swc1        $f0, -0x7FEC($gp)
    ctx->pc = 0x134430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294934548), bits); }
    // 0x134434: 0x0  nop
    ctx->pc = 0x134434u;
    // NOP
label_134438:
    // 0x134438: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x134438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x13443c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13443Cu;
    {
        const bool branch_taken_0x13443c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13443c) {
            ctx->pc = 0x134460u;
            goto label_134460;
        }
    }
    ctx->pc = 0x134444u;
    // 0x134444: 0x8f8280e4  lw          $v0, -0x7F1C($gp)
    ctx->pc = 0x134444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934756)));
    // 0x134448: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x134448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13444c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x13444cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x134450: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x134450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134454: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x134454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x134458: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x134458u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x13445c: 0x0  nop
    ctx->pc = 0x13445cu;
    // NOP
label_134460:
    // 0x134460: 0x8f8480e4  lw          $a0, -0x7F1C($gp)
    ctx->pc = 0x134460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934756)));
    // 0x134464: 0x8f8580f0  lw          $a1, -0x7F10($gp)
    ctx->pc = 0x134464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
    // 0x134468: 0xc78c8014  lwc1        $f12, -0x7FEC($gp)
    ctx->pc = 0x134468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13446c: 0x8f8880e8  lw          $t0, -0x7F18($gp)
    ctx->pc = 0x13446cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934760)));
    // 0x134470: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x134470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134474: 0xc04c54c  jal         func_131530
    ctx->pc = 0x134474u;
    SET_GPR_U32(ctx, 31, 0x13447Cu);
    ctx->pc = 0x134478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134474u;
            // 0x134478: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (runtime->hasFunction(0x131530u)) {
        auto targetFn = runtime->lookupFunction(0x131530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13447Cu; }
        if (ctx->pc != 0x13447Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131530_0x131530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13447Cu; }
        if (ctx->pc != 0x13447Cu) { return; }
    }
    ctx->pc = 0x13447Cu;
label_13447c:
    // 0x13447c: 0x0  nop
    ctx->pc = 0x13447cu;
    // NOP
label_134480:
    // 0x134480: 0x86240008  lh          $a0, 0x8($s1)
    ctx->pc = 0x134480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x134484: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x134484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x134488: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x134488u;
    {
        const bool branch_taken_0x134488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x134488) {
            ctx->pc = 0x134498u;
            goto label_134498;
        }
    }
    ctx->pc = 0x134490u;
    // 0x134490: 0xc04d0b8  jal         func_1342E0
    ctx->pc = 0x134490u;
    SET_GPR_U32(ctx, 31, 0x134498u);
    ctx->pc = 0x1342E0u;
    goto label_1342e0;
    ctx->pc = 0x134498u;
label_134498:
    // 0x134498: 0xc04e1d4  jal         func_138750
    ctx->pc = 0x134498u;
    SET_GPR_U32(ctx, 31, 0x1344A0u);
    ctx->pc = 0x13449Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134498u;
            // 0x13449c: 0x8f8480f4  lw          $a0, -0x7F0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934772)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138750u;
    if (runtime->hasFunction(0x138750u)) {
        auto targetFn = runtime->lookupFunction(0x138750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1344A0u; }
        if (ctx->pc != 0x1344A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138750_0x138750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1344A0u; }
        if (ctx->pc != 0x1344A0u) { return; }
    }
    ctx->pc = 0x1344A0u;
label_1344a0:
    // 0x1344a0: 0x8632000a  lh          $s2, 0xA($s1)
    ctx->pc = 0x1344a0u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1344a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1344a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1344a8: 0x5643ff94  bnel        $s2, $v1, . + 4 + (-0x6C << 2)
    ctx->pc = 0x1344A8u;
    {
        const bool branch_taken_0x1344a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x1344a8) {
            ctx->pc = 0x1344ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1344A8u;
            // 0x1344ac: 0x1218c0  sll         $v1, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1342FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1342fc;
        }
    }
    ctx->pc = 0x1344B0u;
label_1344b0:
    // 0x1344b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1344b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1344b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1344b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1344b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1344b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1344bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1344bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1344c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1344C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1344C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1344C0u;
            // 0x1344c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1344C8u;
    // 0x1344c8: 0x0  nop
    ctx->pc = 0x1344c8u;
    // NOP
    // 0x1344cc: 0x0  nop
    ctx->pc = 0x1344ccu;
    // NOP
}
