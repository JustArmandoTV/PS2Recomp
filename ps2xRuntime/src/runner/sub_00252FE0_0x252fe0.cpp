#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00252FE0
// Address: 0x252fe0 - 0x253da0
void sub_00252FE0_0x252fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252FE0_0x252fe0");
#endif

    switch (ctx->pc) {
        case 0x253020u: goto label_253020;
        case 0x253074u: goto label_253074;
        case 0x253090u: goto label_253090;
        case 0x2530f0u: goto label_2530f0;
        case 0x253140u: goto label_253140;
        case 0x2535f8u: goto label_2535f8;
        case 0x253790u: goto label_253790;
        case 0x2537fcu: goto label_2537fc;
        case 0x253840u: goto label_253840;
        case 0x253880u: goto label_253880;
        case 0x253920u: goto label_253920;
        case 0x253940u: goto label_253940;
        case 0x2539acu: goto label_2539ac;
        case 0x253bf8u: goto label_253bf8;
        case 0x253c78u: goto label_253c78;
        case 0x253cc8u: goto label_253cc8;
        case 0x253cf0u: goto label_253cf0;
        case 0x253d08u: goto label_253d08;
        case 0x253d4cu: goto label_253d4c;
        case 0x253d5cu: goto label_253d5c;
        case 0x253d80u: goto label_253d80;
        default: break;
    }

    ctx->pc = 0x252fe0u;

    // 0x252fe0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x252fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x252fe4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x252fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x252fe8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x252fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x252fec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x252fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x252ff0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x252ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x252ff4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x252ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x252ff8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x252ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x252ffc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x252ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x253000: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x253000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x253004: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x253004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x253008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x253008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25300c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x25300cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253010: 0xafa500bc  sw          $a1, 0xBC($sp)
    ctx->pc = 0x253010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
    // 0x253014: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x253014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253018: 0xc0972e4  jal         func_25CB90
    ctx->pc = 0x253018u;
    SET_GPR_U32(ctx, 31, 0x253020u);
    ctx->pc = 0x25301Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253018u;
            // 0x25301c: 0xafa600b8  sw          $a2, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CB90u;
    if (runtime->hasFunction(0x25CB90u)) {
        auto targetFn = runtime->lookupFunction(0x25CB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253020u; }
        if (ctx->pc != 0x253020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CB90_0x25cb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253020u; }
        if (ctx->pc != 0x253020u) { return; }
    }
    ctx->pc = 0x253020u;
label_253020:
    // 0x253020: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x253020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x253024: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x253024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x253028: 0x2442f1e0  addiu       $v0, $v0, -0xE20
    ctx->pc = 0x253028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963680));
    // 0x25302c: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x25302cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x253030: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x253030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x253034: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x253034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x253038: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x253038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x25303c: 0x2604007c  addiu       $a0, $s0, 0x7C
    ctx->pc = 0x25303cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    // 0x253040: 0x24a53c10  addiu       $a1, $a1, 0x3C10
    ctx->pc = 0x253040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15376));
    // 0x253044: 0x24c63ba0  addiu       $a2, $a2, 0x3BA0
    ctx->pc = 0x253044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15264));
    // 0x253048: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x253048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25304c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x25304cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x253050: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x253050u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253054: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x253054u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x253058: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x253058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x25305c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x25305cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253060: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x253060u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x253064: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x253064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x253068: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x253068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x25306c: 0xc040804  jal         func_102010
    ctx->pc = 0x25306Cu;
    SET_GPR_U32(ctx, 31, 0x253074u);
    ctx->pc = 0x253070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25306Cu;
            // 0x253070: 0xae030078  sw          $v1, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253074u; }
        if (ctx->pc != 0x253074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253074u; }
        if (ctx->pc != 0x253074u) { return; }
    }
    ctx->pc = 0x253074u;
label_253074:
    // 0x253074: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x253074u;
    {
        const bool branch_taken_0x253074 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x253074) {
            ctx->pc = 0x253080u;
            goto label_253080;
        }
    }
    ctx->pc = 0x25307Cu;
    // 0x25307c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x25307cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_253080:
    // 0x253080: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x253080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x253084: 0x1a20000a  blez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x253084u;
    {
        const bool branch_taken_0x253084 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x253088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253084u;
            // 0x253088: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253084) {
            ctx->pc = 0x2530B0u;
            goto label_2530b0;
        }
    }
    ctx->pc = 0x25308Cu;
    // 0x25308c: 0x0  nop
    ctx->pc = 0x25308cu;
    // NOP
label_253090:
    // 0x253090: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x253090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x253094: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x253094u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x253098: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x253098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25309c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x25309cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x2530a0: 0x0  nop
    ctx->pc = 0x2530a0u;
    // NOP
    // 0x2530a4: 0x1e20fffa  bgtz        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2530A4u;
    {
        const bool branch_taken_0x2530a4 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x2530a4) {
            ctx->pc = 0x253090u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_253090;
        }
    }
    ctx->pc = 0x2530ACu;
    // 0x2530ac: 0x0  nop
    ctx->pc = 0x2530acu;
    // NOP
label_2530b0:
    // 0x2530b0: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x2530b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2530b4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2530b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x2530b8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2530b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x2530bc: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x2530bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x2530c0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2530C0u;
    {
        const bool branch_taken_0x2530c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2530c0) {
            ctx->pc = 0x2530F0u;
            goto label_2530f0;
        }
    }
    ctx->pc = 0x2530C8u;
    // 0x2530c8: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x2530c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2530cc: 0x28a10100  slti        $at, $a1, 0x100
    ctx->pc = 0x2530ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2530d0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2530D0u;
    {
        const bool branch_taken_0x2530d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2530d0) {
            ctx->pc = 0x2530E0u;
            goto label_2530e0;
        }
    }
    ctx->pc = 0x2530D8u;
    // 0x2530d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2530D8u;
    {
        const bool branch_taken_0x2530d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2530DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2530D8u;
            // 0x2530dc: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2530d8) {
            ctx->pc = 0x2530E8u;
            goto label_2530e8;
        }
    }
    ctx->pc = 0x2530E0u;
label_2530e0:
    // 0x2530e0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2530e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2530e4: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x2530e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_2530e8:
    // 0x2530e8: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x2530E8u;
    SET_GPR_U32(ctx, 31, 0x2530F0u);
    ctx->pc = 0x2530ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2530E8u;
            // 0x2530ec: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2530F0u; }
        if (ctx->pc != 0x2530F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2530F0u; }
        if (ctx->pc != 0x2530F0u) { return; }
    }
    ctx->pc = 0x2530F0u;
label_2530f0:
    // 0x2530f0: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2530f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2530f4: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x2530f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x2530f8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2530f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2530fc: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2530fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x253100: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x253100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x253104: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x253104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x253108: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x253108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x25310c: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x25310cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x253110: 0x3c024130  lui         $v0, 0x4130
    ctx->pc = 0x253110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16688 << 16));
    // 0x253114: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x253114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x253118: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x253118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x25311c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x25311cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x253120: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x253120u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253124: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x253124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x253128: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x253128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x25312c: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x25312cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x253130: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x253130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x253134: 0x1000026a  b           . + 4 + (0x26A << 2)
    ctx->pc = 0x253134u;
    {
        const bool branch_taken_0x253134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253134u;
            // 0x253138: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253134) {
            ctx->pc = 0x253AE0u;
            goto label_253ae0;
        }
    }
    ctx->pc = 0x25313Cu;
    // 0x25313c: 0x0  nop
    ctx->pc = 0x25313cu;
    // NOP
label_253140:
    // 0x253140: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x253140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x253144: 0x460428c0  add.s       $f3, $f5, $f4
    ctx->pc = 0x253144u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x253148: 0xc6020040  lwc1        $f2, 0x40($s0)
    ctx->pc = 0x253148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25314c: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x25314cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x253150: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x253150u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x253154: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x253154u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x253158: 0xc6060044  lwc1        $f6, 0x44($s0)
    ctx->pc = 0x253158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25315c: 0x46061980  add.s       $f6, $f3, $f6
    ctx->pc = 0x25315cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x253160: 0xe6260000  swc1        $f6, 0x0($s1)
    ctx->pc = 0x253160u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x253164: 0xc6060048  lwc1        $f6, 0x48($s0)
    ctx->pc = 0x253164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x253168: 0x46061980  add.s       $f6, $f3, $f6
    ctx->pc = 0x253168u;
    ctx->f[6] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x25316c: 0xe7260000  swc1        $f6, 0x0($t9)
    ctx->pc = 0x25316cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 0), bits); }
    // 0x253170: 0xc606004c  lwc1        $f6, 0x4C($s0)
    ctx->pc = 0x253170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x253174: 0x46061980  add.s       $f6, $f3, $f6
    ctx->pc = 0x253174u;
    ctx->f[6] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x253178: 0xe7060000  swc1        $f6, 0x0($t8)
    ctx->pc = 0x253178u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
    // 0x25317c: 0xc6070060  lwc1        $f7, 0x60($s0)
    ctx->pc = 0x25317cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x253180: 0xc7a600f0  lwc1        $f6, 0xF0($sp)
    ctx->pc = 0x253180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x253184: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x253184u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x253188: 0xe7a600f0  swc1        $f6, 0xF0($sp)
    ctx->pc = 0x253188u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x25318c: 0xc6070064  lwc1        $f7, 0x64($s0)
    ctx->pc = 0x25318cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x253190: 0xc6260000  lwc1        $f6, 0x0($s1)
    ctx->pc = 0x253190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x253194: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x253194u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x253198: 0xe6260000  swc1        $f6, 0x0($s1)
    ctx->pc = 0x253198u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x25319c: 0xc6070068  lwc1        $f7, 0x68($s0)
    ctx->pc = 0x25319cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2531a0: 0xc7260000  lwc1        $f6, 0x0($t9)
    ctx->pc = 0x2531a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2531a4: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x2531a4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x2531a8: 0xe7260000  swc1        $f6, 0x0($t9)
    ctx->pc = 0x2531a8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 0), bits); }
    // 0x2531ac: 0xc607006c  lwc1        $f7, 0x6C($s0)
    ctx->pc = 0x2531acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2531b0: 0xc7060000  lwc1        $f6, 0x0($t8)
    ctx->pc = 0x2531b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2531b4: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x2531b4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x2531b8: 0xe7060000  swc1        $f6, 0x0($t8)
    ctx->pc = 0x2531b8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
    // 0x2531bc: 0xc427cf90  lwc1        $f7, -0x3070($at)
    ctx->pc = 0x2531bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2531c0: 0xc7a600f0  lwc1        $f6, 0xF0($sp)
    ctx->pc = 0x2531c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2531c4: 0xc7a800f0  lwc1        $f8, 0xF0($sp)
    ctx->pc = 0x2531c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2531c8: 0x46073034  c.lt.s      $f6, $f7
    ctx->pc = 0x2531c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2531cc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2531CCu;
    {
        const bool branch_taken_0x2531cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2531D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2531CCu;
            // 0x2531d0: 0x46030080  add.s       $f2, $f0, $f3 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2531cc) {
            ctx->pc = 0x2531DCu;
            goto label_2531dc;
        }
    }
    ctx->pc = 0x2531D4u;
    // 0x2531d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2531D4u;
    {
        const bool branch_taken_0x2531d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2531D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2531D4u;
            // 0x2531d8: 0xe7a800f0  swc1        $f8, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2531d4) {
            ctx->pc = 0x2531E4u;
            goto label_2531e4;
        }
    }
    ctx->pc = 0x2531DCu;
label_2531dc:
    // 0x2531dc: 0x46003a06  mov.s       $f8, $f7
    ctx->pc = 0x2531dcu;
    ctx->f[8] = FPU_MOV_S(ctx->f[7]);
    // 0x2531e0: 0xe7a800f0  swc1        $f8, 0xF0($sp)
    ctx->pc = 0x2531e0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2531e4:
    // 0x2531e4: 0xc5e60000  lwc1        $f6, 0x0($t7)
    ctx->pc = 0x2531e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2531e8: 0xc6270000  lwc1        $f7, 0x0($s1)
    ctx->pc = 0x2531e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2531ec: 0x46063834  c.lt.s      $f7, $f6
    ctx->pc = 0x2531ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2531f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2531F0u;
    {
        const bool branch_taken_0x2531f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2531f0) {
            ctx->pc = 0x253200u;
            goto label_253200;
        }
    }
    ctx->pc = 0x2531F8u;
    // 0x2531f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2531F8u;
    {
        const bool branch_taken_0x2531f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2531FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2531F8u;
            // 0x2531fc: 0xe6270000  swc1        $f7, 0x0($s1) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2531f8) {
            ctx->pc = 0x253208u;
            goto label_253208;
        }
    }
    ctx->pc = 0x253200u;
label_253200:
    // 0x253200: 0x460031c6  mov.s       $f7, $f6
    ctx->pc = 0x253200u;
    ctx->f[7] = FPU_MOV_S(ctx->f[6]);
    // 0x253204: 0xe6270000  swc1        $f7, 0x0($s1)
    ctx->pc = 0x253204u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_253208:
    // 0x253208: 0xc5c60000  lwc1        $f6, 0x0($t6)
    ctx->pc = 0x253208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25320c: 0xc7270000  lwc1        $f7, 0x0($t9)
    ctx->pc = 0x25320cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x253210: 0x46063834  c.lt.s      $f7, $f6
    ctx->pc = 0x253210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253214: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x253214u;
    {
        const bool branch_taken_0x253214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x253214) {
            ctx->pc = 0x253224u;
            goto label_253224;
        }
    }
    ctx->pc = 0x25321Cu;
    // 0x25321c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25321Cu;
    {
        const bool branch_taken_0x25321c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25321Cu;
            // 0x253220: 0xe7270000  swc1        $f7, 0x0($t9) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25321c) {
            ctx->pc = 0x25322Cu;
            goto label_25322c;
        }
    }
    ctx->pc = 0x253224u;
label_253224:
    // 0x253224: 0x460031c6  mov.s       $f7, $f6
    ctx->pc = 0x253224u;
    ctx->f[7] = FPU_MOV_S(ctx->f[6]);
    // 0x253228: 0xe7270000  swc1        $f7, 0x0($t9)
    ctx->pc = 0x253228u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 0), bits); }
label_25322c:
    // 0x25322c: 0xc5a60000  lwc1        $f6, 0x0($t5)
    ctx->pc = 0x25322cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x253230: 0xc7070000  lwc1        $f7, 0x0($t8)
    ctx->pc = 0x253230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x253234: 0x46063834  c.lt.s      $f7, $f6
    ctx->pc = 0x253234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253238: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x253238u;
    {
        const bool branch_taken_0x253238 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x253238) {
            ctx->pc = 0x253248u;
            goto label_253248;
        }
    }
    ctx->pc = 0x253240u;
    // 0x253240: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x253240u;
    {
        const bool branch_taken_0x253240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253240u;
            // 0x253244: 0xe7070000  swc1        $f7, 0x0($t8) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253240) {
            ctx->pc = 0x253250u;
            goto label_253250;
        }
    }
    ctx->pc = 0x253248u;
label_253248:
    // 0x253248: 0x460031c6  mov.s       $f7, $f6
    ctx->pc = 0x253248u;
    ctx->f[7] = FPU_MOV_S(ctx->f[6]);
    // 0x25324c: 0xe7070000  swc1        $f7, 0x0($t8)
    ctx->pc = 0x25324cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
label_253250:
    // 0x253250: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x253250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
    // 0x253254: 0xc427f930  lwc1        $f7, -0x6D0($at)
    ctx->pc = 0x253254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x253258: 0xc7a600f0  lwc1        $f6, 0xF0($sp)
    ctx->pc = 0x253258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25325c: 0x46073036  c.le.s      $f6, $f7
    ctx->pc = 0x25325cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253260: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x253260u;
    {
        const bool branch_taken_0x253260 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x253264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253260u;
            // 0x253264: 0xc7a800f0  lwc1        $f8, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253260) {
            ctx->pc = 0x253270u;
            goto label_253270;
        }
    }
    ctx->pc = 0x253268u;
    // 0x253268: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x253268u;
    {
        const bool branch_taken_0x253268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25326Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253268u;
            // 0x25326c: 0xe7a800f0  swc1        $f8, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253268) {
            ctx->pc = 0x253278u;
            goto label_253278;
        }
    }
    ctx->pc = 0x253270u;
label_253270:
    // 0x253270: 0x46003a06  mov.s       $f8, $f7
    ctx->pc = 0x253270u;
    ctx->f[8] = FPU_MOV_S(ctx->f[7]);
    // 0x253274: 0xe7a800f0  swc1        $f8, 0xF0($sp)
    ctx->pc = 0x253274u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_253278:
    // 0x253278: 0xc5860000  lwc1        $f6, 0x0($t4)
    ctx->pc = 0x253278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25327c: 0xc6270000  lwc1        $f7, 0x0($s1)
    ctx->pc = 0x25327cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x253280: 0x46063836  c.le.s      $f7, $f6
    ctx->pc = 0x253280u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253284: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x253284u;
    {
        const bool branch_taken_0x253284 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x253284) {
            ctx->pc = 0x253294u;
            goto label_253294;
        }
    }
    ctx->pc = 0x25328Cu;
    // 0x25328c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25328Cu;
    {
        const bool branch_taken_0x25328c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25328Cu;
            // 0x253290: 0xe6270000  swc1        $f7, 0x0($s1) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25328c) {
            ctx->pc = 0x25329Cu;
            goto label_25329c;
        }
    }
    ctx->pc = 0x253294u;
label_253294:
    // 0x253294: 0x460031c6  mov.s       $f7, $f6
    ctx->pc = 0x253294u;
    ctx->f[7] = FPU_MOV_S(ctx->f[6]);
    // 0x253298: 0xe6270000  swc1        $f7, 0x0($s1)
    ctx->pc = 0x253298u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_25329c:
    // 0x25329c: 0xc5660000  lwc1        $f6, 0x0($t3)
    ctx->pc = 0x25329cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2532a0: 0xc7270000  lwc1        $f7, 0x0($t9)
    ctx->pc = 0x2532a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2532a4: 0x46063836  c.le.s      $f7, $f6
    ctx->pc = 0x2532a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2532a8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2532A8u;
    {
        const bool branch_taken_0x2532a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2532a8) {
            ctx->pc = 0x2532B8u;
            goto label_2532b8;
        }
    }
    ctx->pc = 0x2532B0u;
    // 0x2532b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2532B0u;
    {
        const bool branch_taken_0x2532b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2532B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2532B0u;
            // 0x2532b4: 0xe7270000  swc1        $f7, 0x0($t9) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2532b0) {
            ctx->pc = 0x2532C0u;
            goto label_2532c0;
        }
    }
    ctx->pc = 0x2532B8u;
label_2532b8:
    // 0x2532b8: 0x460031c6  mov.s       $f7, $f6
    ctx->pc = 0x2532b8u;
    ctx->f[7] = FPU_MOV_S(ctx->f[6]);
    // 0x2532bc: 0xe7270000  swc1        $f7, 0x0($t9)
    ctx->pc = 0x2532bcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 0), bits); }
label_2532c0:
    // 0x2532c0: 0xc5460000  lwc1        $f6, 0x0($t2)
    ctx->pc = 0x2532c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2532c4: 0xc7070000  lwc1        $f7, 0x0($t8)
    ctx->pc = 0x2532c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2532c8: 0x46063836  c.le.s      $f7, $f6
    ctx->pc = 0x2532c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2532cc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2532CCu;
    {
        const bool branch_taken_0x2532cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2532cc) {
            ctx->pc = 0x2532DCu;
            goto label_2532dc;
        }
    }
    ctx->pc = 0x2532D4u;
    // 0x2532d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2532D4u;
    {
        const bool branch_taken_0x2532d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2532D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2532D4u;
            // 0x2532d8: 0xe7070000  swc1        $f7, 0x0($t8) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2532d4) {
            ctx->pc = 0x2532E4u;
            goto label_2532e4;
        }
    }
    ctx->pc = 0x2532DCu;
label_2532dc:
    // 0x2532dc: 0x460031c6  mov.s       $f7, $f6
    ctx->pc = 0x2532dcu;
    ctx->f[7] = FPU_MOV_S(ctx->f[6]);
    // 0x2532e0: 0xe7070000  swc1        $f7, 0x0($t8)
    ctx->pc = 0x2532e0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
label_2532e4:
    // 0x2532e4: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x2532e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
    // 0x2532e8: 0xc426f900  lwc1        $f6, -0x700($at)
    ctx->pc = 0x2532e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2532ec: 0xc7a700f0  lwc1        $f7, 0xF0($sp)
    ctx->pc = 0x2532ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2532f0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2532f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2532f4: 0x46063980  add.s       $f6, $f7, $f6
    ctx->pc = 0x2532f4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x2532f8: 0xe7a600f0  swc1        $f6, 0xF0($sp)
    ctx->pc = 0x2532f8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2532fc: 0xc6270000  lwc1        $f7, 0x0($s1)
    ctx->pc = 0x2532fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x253300: 0xc5260000  lwc1        $f6, 0x0($t1)
    ctx->pc = 0x253300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x253304: 0x46063980  add.s       $f6, $f7, $f6
    ctx->pc = 0x253304u;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x253308: 0xe6260000  swc1        $f6, 0x0($s1)
    ctx->pc = 0x253308u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x25330c: 0xc7270000  lwc1        $f7, 0x0($t9)
    ctx->pc = 0x25330cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x253310: 0xc5060000  lwc1        $f6, 0x0($t0)
    ctx->pc = 0x253310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x253314: 0x46063980  add.s       $f6, $f7, $f6
    ctx->pc = 0x253314u;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x253318: 0xe7260000  swc1        $f6, 0x0($t9)
    ctx->pc = 0x253318u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 0), bits); }
    // 0x25331c: 0xc7070000  lwc1        $f7, 0x0($t8)
    ctx->pc = 0x25331cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x253320: 0xc4e60000  lwc1        $f6, 0x0($a3)
    ctx->pc = 0x253320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x253324: 0x46063980  add.s       $f6, $f7, $f6
    ctx->pc = 0x253324u;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x253328: 0xe7060000  swc1        $f6, 0x0($t8)
    ctx->pc = 0x253328u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
    // 0x25332c: 0xc6660000  lwc1        $f6, 0x0($s3)
    ctx->pc = 0x25332cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x253330: 0xe7a600e0  swc1        $f6, 0xE0($sp)
    ctx->pc = 0x253330u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x253334: 0xc6660004  lwc1        $f6, 0x4($s3)
    ctx->pc = 0x253334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x253338: 0xe4c60000  swc1        $f6, 0x0($a2)
    ctx->pc = 0x253338u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x25333c: 0xc6660008  lwc1        $f6, 0x8($s3)
    ctx->pc = 0x25333cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x253340: 0xe4a60000  swc1        $f6, 0x0($a1)
    ctx->pc = 0x253340u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x253344: 0xc666000c  lwc1        $f6, 0xC($s3)
    ctx->pc = 0x253344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x253348: 0xe6e60000  swc1        $f6, 0x0($s7)
    ctx->pc = 0x253348u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x25334c: 0x8fb500e0  lw          $s5, 0xE0($sp)
    ctx->pc = 0x25334cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x253350: 0x15a9c2  srl         $s5, $s5, 7
    ctx->pc = 0x253350u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 21), 7));
    // 0x253354: 0xa7b50110  sh          $s5, 0x110($sp)
    ctx->pc = 0x253354u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 272), (uint16_t)GPR_U32(ctx, 21));
    // 0x253358: 0x8cd50000  lw          $s5, 0x0($a2)
    ctx->pc = 0x253358u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25335c: 0x15b1c2  srl         $s6, $s5, 7
    ctx->pc = 0x25335cu;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 21), 7));
    // 0x253360: 0x27b50112  addiu       $s5, $sp, 0x112
    ctx->pc = 0x253360u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 274));
    // 0x253364: 0xa6b60000  sh          $s6, 0x0($s5)
    ctx->pc = 0x253364u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 22));
    // 0x253368: 0x8cb50000  lw          $s5, 0x0($a1)
    ctx->pc = 0x253368u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25336c: 0x15b1c2  srl         $s6, $s5, 7
    ctx->pc = 0x25336cu;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 21), 7));
    // 0x253370: 0x27b50114  addiu       $s5, $sp, 0x114
    ctx->pc = 0x253370u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x253374: 0xa6b60000  sh          $s6, 0x0($s5)
    ctx->pc = 0x253374u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 22));
    // 0x253378: 0x8ef50000  lw          $s5, 0x0($s7)
    ctx->pc = 0x253378u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x25337c: 0x15b1c2  srl         $s6, $s5, 7
    ctx->pc = 0x25337cu;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 21), 7));
    // 0x253380: 0x27b50116  addiu       $s5, $sp, 0x116
    ctx->pc = 0x253380u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 278));
    // 0x253384: 0xa6b60000  sh          $s6, 0x0($s5)
    ctx->pc = 0x253384u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 22));
    // 0x253388: 0xc6060050  lwc1        $f6, 0x50($s0)
    ctx->pc = 0x253388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25338c: 0x46061180  add.s       $f6, $f2, $f6
    ctx->pc = 0x25338cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x253390: 0xe7a600d0  swc1        $f6, 0xD0($sp)
    ctx->pc = 0x253390u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x253394: 0xc6060054  lwc1        $f6, 0x54($s0)
    ctx->pc = 0x253394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x253398: 0x46061180  add.s       $f6, $f2, $f6
    ctx->pc = 0x253398u;
    ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x25339c: 0xe4860000  swc1        $f6, 0x0($a0)
    ctx->pc = 0x25339cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2533a0: 0xc6060058  lwc1        $f6, 0x58($s0)
    ctx->pc = 0x2533a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2533a4: 0x46061180  add.s       $f6, $f2, $f6
    ctx->pc = 0x2533a4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x2533a8: 0xe4660000  swc1        $f6, 0x0($v1)
    ctx->pc = 0x2533a8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2533ac: 0xc606005c  lwc1        $f6, 0x5C($s0)
    ctx->pc = 0x2533acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2533b0: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x2533b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x2533b4: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2533b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2533b8: 0xc6060060  lwc1        $f6, 0x60($s0)
    ctx->pc = 0x2533b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2533bc: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x2533bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2533c0: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2533c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2533c4: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x2533c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2533c8: 0xc6060064  lwc1        $f6, 0x64($s0)
    ctx->pc = 0x2533c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2533cc: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2533ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2533d0: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2533d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2533d4: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x2533d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2533d8: 0xc6060068  lwc1        $f6, 0x68($s0)
    ctx->pc = 0x2533d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2533dc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2533dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2533e0: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2533e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2533e4: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2533e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2533e8: 0xc606006c  lwc1        $f6, 0x6C($s0)
    ctx->pc = 0x2533e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2533ec: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2533ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2533f0: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2533f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2533f4: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2533f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2533f8: 0xc426cf90  lwc1        $f6, -0x3070($at)
    ctx->pc = 0x2533f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2533fc: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x2533fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x253400: 0x46061034  c.lt.s      $f2, $f6
    ctx->pc = 0x253400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253404: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x253404u;
    {
        const bool branch_taken_0x253404 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x253408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253404u;
            // 0x253408: 0xc7a700d0  lwc1        $f7, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253404) {
            ctx->pc = 0x253414u;
            goto label_253414;
        }
    }
    ctx->pc = 0x25340Cu;
    // 0x25340c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25340Cu;
    {
        const bool branch_taken_0x25340c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25340Cu;
            // 0x253410: 0xe7a700d0  swc1        $f7, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25340c) {
            ctx->pc = 0x25341Cu;
            goto label_25341c;
        }
    }
    ctx->pc = 0x253414u;
label_253414:
    // 0x253414: 0x460031c6  mov.s       $f7, $f6
    ctx->pc = 0x253414u;
    ctx->f[7] = FPU_MOV_S(ctx->f[6]);
    // 0x253418: 0xe7a700d0  swc1        $f7, 0xD0($sp)
    ctx->pc = 0x253418u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_25341c:
    // 0x25341c: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x25341cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x253420: 0xc4860000  lwc1        $f6, 0x0($a0)
    ctx->pc = 0x253420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x253424: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x253424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253428: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x253428u;
    {
        const bool branch_taken_0x253428 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x253428) {
            ctx->pc = 0x253438u;
            goto label_253438;
        }
    }
    ctx->pc = 0x253430u;
    // 0x253430: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x253430u;
    {
        const bool branch_taken_0x253430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253430u;
            // 0x253434: 0xe4860000  swc1        $f6, 0x0($a0) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253430) {
            ctx->pc = 0x253440u;
            goto label_253440;
        }
    }
    ctx->pc = 0x253438u;
label_253438:
    // 0x253438: 0x46001186  mov.s       $f6, $f2
    ctx->pc = 0x253438u;
    ctx->f[6] = FPU_MOV_S(ctx->f[2]);
    // 0x25343c: 0xe4860000  swc1        $f6, 0x0($a0)
    ctx->pc = 0x25343cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_253440:
    // 0x253440: 0xc5c20000  lwc1        $f2, 0x0($t6)
    ctx->pc = 0x253440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x253444: 0xc4660000  lwc1        $f6, 0x0($v1)
    ctx->pc = 0x253444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x253448: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x253448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25344c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x25344Cu;
    {
        const bool branch_taken_0x25344c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25344c) {
            ctx->pc = 0x25345Cu;
            goto label_25345c;
        }
    }
    ctx->pc = 0x253454u;
    // 0x253454: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x253454u;
    {
        const bool branch_taken_0x253454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253454u;
            // 0x253458: 0xe4660000  swc1        $f6, 0x0($v1) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253454) {
            ctx->pc = 0x253464u;
            goto label_253464;
        }
    }
    ctx->pc = 0x25345Cu;
label_25345c:
    // 0x25345c: 0x46001186  mov.s       $f6, $f2
    ctx->pc = 0x25345cu;
    ctx->f[6] = FPU_MOV_S(ctx->f[2]);
    // 0x253460: 0xe4660000  swc1        $f6, 0x0($v1)
    ctx->pc = 0x253460u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_253464:
    // 0x253464: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x253464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x253468: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x253468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x25346c: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x25346cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253470: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x253470u;
    {
        const bool branch_taken_0x253470 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x253470) {
            ctx->pc = 0x253480u;
            goto label_253480;
        }
    }
    ctx->pc = 0x253478u;
    // 0x253478: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x253478u;
    {
        const bool branch_taken_0x253478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25347Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253478u;
            // 0x25347c: 0xe4460000  swc1        $f6, 0x0($v0) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253478) {
            ctx->pc = 0x253488u;
            goto label_253488;
        }
    }
    ctx->pc = 0x253480u;
label_253480:
    // 0x253480: 0x46001186  mov.s       $f6, $f2
    ctx->pc = 0x253480u;
    ctx->f[6] = FPU_MOV_S(ctx->f[2]);
    // 0x253484: 0xe4460000  swc1        $f6, 0x0($v0)
    ctx->pc = 0x253484u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_253488:
    // 0x253488: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x253488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
    // 0x25348c: 0xc426f930  lwc1        $f6, -0x6D0($at)
    ctx->pc = 0x25348cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x253490: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x253490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x253494: 0x46061036  c.le.s      $f2, $f6
    ctx->pc = 0x253494u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253498: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x253498u;
    {
        const bool branch_taken_0x253498 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25349Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253498u;
            // 0x25349c: 0xc7a700d0  lwc1        $f7, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253498) {
            ctx->pc = 0x2534A8u;
            goto label_2534a8;
        }
    }
    ctx->pc = 0x2534A0u;
    // 0x2534a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2534A0u;
    {
        const bool branch_taken_0x2534a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2534A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2534A0u;
            // 0x2534a4: 0xe7a700d0  swc1        $f7, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2534a0) {
            ctx->pc = 0x2534B0u;
            goto label_2534b0;
        }
    }
    ctx->pc = 0x2534A8u;
label_2534a8:
    // 0x2534a8: 0x460031c6  mov.s       $f7, $f6
    ctx->pc = 0x2534a8u;
    ctx->f[7] = FPU_MOV_S(ctx->f[6]);
    // 0x2534ac: 0xe7a700d0  swc1        $f7, 0xD0($sp)
    ctx->pc = 0x2534acu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2534b0:
    // 0x2534b0: 0xc5820000  lwc1        $f2, 0x0($t4)
    ctx->pc = 0x2534b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2534b4: 0xc4860000  lwc1        $f6, 0x0($a0)
    ctx->pc = 0x2534b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2534b8: 0x46023036  c.le.s      $f6, $f2
    ctx->pc = 0x2534b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2534bc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2534BCu;
    {
        const bool branch_taken_0x2534bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2534bc) {
            ctx->pc = 0x2534CCu;
            goto label_2534cc;
        }
    }
    ctx->pc = 0x2534C4u;
    // 0x2534c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2534C4u;
    {
        const bool branch_taken_0x2534c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2534C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2534C4u;
            // 0x2534c8: 0xe4860000  swc1        $f6, 0x0($a0) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2534c4) {
            ctx->pc = 0x2534D4u;
            goto label_2534d4;
        }
    }
    ctx->pc = 0x2534CCu;
label_2534cc:
    // 0x2534cc: 0x46001186  mov.s       $f6, $f2
    ctx->pc = 0x2534ccu;
    ctx->f[6] = FPU_MOV_S(ctx->f[2]);
    // 0x2534d0: 0xe4860000  swc1        $f6, 0x0($a0)
    ctx->pc = 0x2534d0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2534d4:
    // 0x2534d4: 0xc5620000  lwc1        $f2, 0x0($t3)
    ctx->pc = 0x2534d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2534d8: 0xc4660000  lwc1        $f6, 0x0($v1)
    ctx->pc = 0x2534d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2534dc: 0x46023036  c.le.s      $f6, $f2
    ctx->pc = 0x2534dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2534e0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2534E0u;
    {
        const bool branch_taken_0x2534e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2534e0) {
            ctx->pc = 0x2534F0u;
            goto label_2534f0;
        }
    }
    ctx->pc = 0x2534E8u;
    // 0x2534e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2534E8u;
    {
        const bool branch_taken_0x2534e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2534ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2534E8u;
            // 0x2534ec: 0xe4660000  swc1        $f6, 0x0($v1) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2534e8) {
            ctx->pc = 0x2534F8u;
            goto label_2534f8;
        }
    }
    ctx->pc = 0x2534F0u;
label_2534f0:
    // 0x2534f0: 0x46001186  mov.s       $f6, $f2
    ctx->pc = 0x2534f0u;
    ctx->f[6] = FPU_MOV_S(ctx->f[2]);
    // 0x2534f4: 0xe4660000  swc1        $f6, 0x0($v1)
    ctx->pc = 0x2534f4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2534f8:
    // 0x2534f8: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x2534f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2534fc: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x2534fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x253500: 0x46023036  c.le.s      $f6, $f2
    ctx->pc = 0x253500u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253504: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x253504u;
    {
        const bool branch_taken_0x253504 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x253504) {
            ctx->pc = 0x253514u;
            goto label_253514;
        }
    }
    ctx->pc = 0x25350Cu;
    // 0x25350c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25350Cu;
    {
        const bool branch_taken_0x25350c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25350Cu;
            // 0x253510: 0xe4460000  swc1        $f6, 0x0($v0) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25350c) {
            ctx->pc = 0x25351Cu;
            goto label_25351c;
        }
    }
    ctx->pc = 0x253514u;
label_253514:
    // 0x253514: 0x46001186  mov.s       $f6, $f2
    ctx->pc = 0x253514u;
    ctx->f[6] = FPU_MOV_S(ctx->f[2]);
    // 0x253518: 0xe4460000  swc1        $f6, 0x0($v0)
    ctx->pc = 0x253518u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_25351c:
    // 0x25351c: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x25351cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
    // 0x253520: 0xc7a600d0  lwc1        $f6, 0xD0($sp)
    ctx->pc = 0x253520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x253524: 0x27b500c8  addiu       $s5, $sp, 0xC8
    ctx->pc = 0x253524u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x253528: 0xc422f900  lwc1        $f2, -0x700($at)
    ctx->pc = 0x253528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25352c: 0x46023080  add.s       $f2, $f6, $f2
    ctx->pc = 0x25352cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x253530: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x253530u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x253534: 0xc4860000  lwc1        $f6, 0x0($a0)
    ctx->pc = 0x253534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x253538: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x253538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25353c: 0x46023080  add.s       $f2, $f6, $f2
    ctx->pc = 0x25353cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x253540: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x253540u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x253544: 0xc4660000  lwc1        $f6, 0x0($v1)
    ctx->pc = 0x253544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x253548: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x253548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25354c: 0x46023080  add.s       $f2, $f6, $f2
    ctx->pc = 0x25354cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x253550: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x253550u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x253554: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x253554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x253558: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x253558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25355c: 0x46023080  add.s       $f2, $f6, $f2
    ctx->pc = 0x25355cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x253560: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x253560u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x253564: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x253564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x253568: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x253568u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x25356c: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x25356cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x253570: 0xe7c20000  swc1        $f2, 0x0($fp)
    ctx->pc = 0x253570u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x253574: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x253574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x253578: 0xe6a20000  swc1        $f2, 0x0($s5)
    ctx->pc = 0x253578u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x25357c: 0xc642000c  lwc1        $f2, 0xC($s2)
    ctx->pc = 0x25357cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x253580: 0x27b500cc  addiu       $s5, $sp, 0xCC
    ctx->pc = 0x253580u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x253584: 0xe6a20000  swc1        $f2, 0x0($s5)
    ctx->pc = 0x253584u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x253588: 0x8fb500c0  lw          $s5, 0xC0($sp)
    ctx->pc = 0x253588u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25358c: 0x15a9c2  srl         $s5, $s5, 7
    ctx->pc = 0x25358cu;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 21), 7));
    // 0x253590: 0xa7b50100  sh          $s5, 0x100($sp)
    ctx->pc = 0x253590u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 21));
    // 0x253594: 0x8fd50000  lw          $s5, 0x0($fp)
    ctx->pc = 0x253594u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x253598: 0x15b1c2  srl         $s6, $s5, 7
    ctx->pc = 0x253598u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 21), 7));
    // 0x25359c: 0x27b50102  addiu       $s5, $sp, 0x102
    ctx->pc = 0x25359cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 258));
    // 0x2535a0: 0xa6b60000  sh          $s6, 0x0($s5)
    ctx->pc = 0x2535a0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 22));
    // 0x2535a4: 0x27b500c8  addiu       $s5, $sp, 0xC8
    ctx->pc = 0x2535a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2535a8: 0x8eb50000  lw          $s5, 0x0($s5)
    ctx->pc = 0x2535a8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2535ac: 0x15b1c2  srl         $s6, $s5, 7
    ctx->pc = 0x2535acu;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 21), 7));
    // 0x2535b0: 0x27b50104  addiu       $s5, $sp, 0x104
    ctx->pc = 0x2535b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x2535b4: 0xa6b60000  sh          $s6, 0x0($s5)
    ctx->pc = 0x2535b4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 22));
    // 0x2535b8: 0x27b500cc  addiu       $s5, $sp, 0xCC
    ctx->pc = 0x2535b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x2535bc: 0x8eb50000  lw          $s5, 0x0($s5)
    ctx->pc = 0x2535bcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2535c0: 0x15b1c2  srl         $s6, $s5, 7
    ctx->pc = 0x2535c0u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 21), 7));
    // 0x2535c4: 0x27b50106  addiu       $s5, $sp, 0x106
    ctx->pc = 0x2535c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 262));
    // 0x2535c8: 0xa6b60000  sh          $s6, 0x0($s5)
    ctx->pc = 0x2535c8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 22));
    // 0x2535cc: 0x97b50100  lhu         $s5, 0x100($sp)
    ctx->pc = 0x2535ccu;
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2535d0: 0x36b50001  ori         $s5, $s5, 0x1
    ctx->pc = 0x2535d0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
    // 0x2535d4: 0x2ea1000c  sltiu       $at, $s5, 0xC
    ctx->pc = 0x2535d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x2535d8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2535D8u;
    {
        const bool branch_taken_0x2535d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2535d8) {
            ctx->pc = 0x2535E8u;
            goto label_2535e8;
        }
    }
    ctx->pc = 0x2535E0u;
    // 0x2535e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2535E0u;
    {
        const bool branch_taken_0x2535e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2535E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2535E0u;
            // 0x2535e4: 0x46001946  mov.s       $f5, $f3 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2535e0) {
            ctx->pc = 0x2535F0u;
            goto label_2535f0;
        }
    }
    ctx->pc = 0x2535E8u;
label_2535e8:
    // 0x2535e8: 0x46001906  mov.s       $f4, $f3
    ctx->pc = 0x2535e8u;
    ctx->f[4] = FPU_MOV_S(ctx->f[3]);
    // 0x2535ec: 0x0  nop
    ctx->pc = 0x2535ecu;
    // NOP
label_2535f0:
    // 0x2535f0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2535f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2535f4: 0x0  nop
    ctx->pc = 0x2535f4u;
    // NOP
label_2535f8:
    // 0x2535f8: 0x2a950017  slti        $s5, $s4, 0x17
    ctx->pc = 0x2535f8u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x2535fc: 0x16a0fed0  bnez        $s5, . + 4 + (-0x130 << 2)
    ctx->pc = 0x2535FCu;
    {
        const bool branch_taken_0x2535fc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2535fc) {
            ctx->pc = 0x253140u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_253140;
        }
    }
    ctx->pc = 0x253604u;
    // 0x253604: 0x46042880  add.s       $f2, $f5, $f4
    ctx->pc = 0x253604u;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x253608: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x253608u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x25360c: 0x3c054130  lui         $a1, 0x4130
    ctx->pc = 0x25360cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16688 << 16));
    // 0x253610: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x253610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x253614: 0x3444fc00  ori         $a0, $v0, 0xFC00
    ctx->pc = 0x253614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64512);
    // 0x253618: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x253618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x25361c: 0x3c023780  lui         $v0, 0x3780
    ctx->pc = 0x25361cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14208 << 16));
    // 0x253620: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x253620u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253624: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x253624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x253628: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x253628u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25362c: 0x0  nop
    ctx->pc = 0x25362cu;
    // NOP
    // 0x253630: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x253630u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x253634: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x253634u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x253638: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x253638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25363c: 0x0  nop
    ctx->pc = 0x25363cu;
    // NOP
    // 0x253640: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x253640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x253644: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x253644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x253648: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x253648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x25364c: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x25364cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x253650: 0xc4490000  lwc1        $f9, 0x0($v0)
    ctx->pc = 0x253650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x253654: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x253654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x253658: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x253658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25365c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x25365cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x253660: 0x46004a41  sub.s       $f9, $f9, $f0
    ctx->pc = 0x253660u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x253664: 0xc4480004  lwc1        $f8, 0x4($v0)
    ctx->pc = 0x253664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x253668: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x253668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x25366c: 0xc4470004  lwc1        $f7, 0x4($v0)
    ctx->pc = 0x25366cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x253670: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x253670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x253674: 0x46074201  sub.s       $f8, $f8, $f7
    ctx->pc = 0x253674u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x253678: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x253678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25367c: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x25367cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x253680: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x253680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x253684: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x253684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253688: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x253688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25368c: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x25368cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x253690: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x253690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x253694: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x253694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
    // 0x253698: 0xae040068  sw          $a0, 0x68($s0)
    ctx->pc = 0x253698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 4));
    // 0x25369c: 0x460930c3  div.s       $f3, $f6, $f9
    ctx->pc = 0x25369cu;
    if (ctx->f[9] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[3] = ctx->f[6] / ctx->f[9];
    // 0x2536a0: 0xae04006c  sw          $a0, 0x6C($s0)
    ctx->pc = 0x2536a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 4));
    // 0x2536a4: 0x460221c1  sub.s       $f7, $f4, $f2
    ctx->pc = 0x2536a4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2536a8: 0xc6020060  lwc1        $f2, 0x60($s0)
    ctx->pc = 0x2536a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2536ac: 0x46083103  div.s       $f4, $f6, $f8
    ctx->pc = 0x2536acu;
    if (ctx->f[8] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[4] = ctx->f[6] / ctx->f[8];
    // 0x2536b0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2536b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2536b4: 0xe6020060  swc1        $f2, 0x60($s0)
    ctx->pc = 0x2536b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2536b8: 0xc6020064  lwc1        $f2, 0x64($s0)
    ctx->pc = 0x2536b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2536bc: 0x460908c2  mul.s       $f3, $f1, $f9
    ctx->pc = 0x2536bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x2536c0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2536c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2536c4: 0xe6020064  swc1        $f2, 0x64($s0)
    ctx->pc = 0x2536c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2536c8: 0x46073103  div.s       $f4, $f6, $f7
    ctx->pc = 0x2536c8u;
    if (ctx->f[7] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[4] = ctx->f[6] / ctx->f[7];
    // 0x2536cc: 0xc6020068  lwc1        $f2, 0x68($s0)
    ctx->pc = 0x2536ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2536d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2536d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2536d4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2536d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2536d8: 0xe6020068  swc1        $f2, 0x68($s0)
    ctx->pc = 0x2536d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2536dc: 0xc604006c  lwc1        $f4, 0x6C($s0)
    ctx->pc = 0x2536dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2536e0: 0x46080882  mul.s       $f2, $f1, $f8
    ctx->pc = 0x2536e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x2536e4: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x2536e4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x2536e8: 0xe604006c  swc1        $f4, 0x6C($s0)
    ctx->pc = 0x2536e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x2536ec: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2536ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2536f0: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x2536f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x2536f4: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x2536f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2536f8: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x2536f8u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x2536fc: 0xe6040040  swc1        $f4, 0x40($s0)
    ctx->pc = 0x2536fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x253700: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x253700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x253704: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x253704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x253708: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x253708u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x25370c: 0xe6040044  swc1        $f4, 0x44($s0)
    ctx->pc = 0x25370cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x253710: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x253710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x253714: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x253714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x253718: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x253718u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x25371c: 0xe6040048  swc1        $f4, 0x48($s0)
    ctx->pc = 0x25371cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x253720: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x253720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x253724: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x253724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x253728: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x253728u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x25372c: 0xe604004c  swc1        $f4, 0x4C($s0)
    ctx->pc = 0x25372cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x253730: 0xc6040040  lwc1        $f4, 0x40($s0)
    ctx->pc = 0x253730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x253734: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x253734u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x253738: 0xe6030050  swc1        $f3, 0x50($s0)
    ctx->pc = 0x253738u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x25373c: 0xc6030044  lwc1        $f3, 0x44($s0)
    ctx->pc = 0x25373cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x253740: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x253740u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x253744: 0xe6020054  swc1        $f2, 0x54($s0)
    ctx->pc = 0x253744u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x253748: 0xc6020048  lwc1        $f2, 0x48($s0)
    ctx->pc = 0x253748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25374c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x25374cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x253750: 0xe6010058  swc1        $f1, 0x58($s0)
    ctx->pc = 0x253750u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x253754: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x253754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253758: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x253758u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25375c: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x25375cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x253760: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x253760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x253764: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x253764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x253768: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x253768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x25376c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x25376cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x253770: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x253770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x253774: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x253774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x253778: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x253778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x25377c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25377Cu;
    {
        const bool branch_taken_0x25377c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25377c) {
            ctx->pc = 0x253790u;
            goto label_253790;
        }
    }
    ctx->pc = 0x253784u;
    // 0x253784: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x253784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x253788: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x253788u;
    SET_GPR_U32(ctx, 31, 0x253790u);
    ctx->pc = 0x25378Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253788u;
            // 0x25378c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253790u; }
        if (ctx->pc != 0x253790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253790u; }
        if (ctx->pc != 0x253790u) { return; }
    }
    ctx->pc = 0x253790u;
label_253790:
    // 0x253790: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x253790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x253794: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x253794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253798: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x253798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x25379c: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x25379cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2537a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2537a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2537a4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x2537a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2537a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2537a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2537ac: 0x24460200  addiu       $a2, $v0, 0x200
    ctx->pc = 0x2537acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2537b0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2537b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2537b4: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x2537b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x2537b8: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2537b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2537bc: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x2537bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2537c0: 0xa6800002  sh          $zero, 0x2($s4)
    ctx->pc = 0x2537c0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x2537c4: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x2537c4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2537c8: 0xa6800008  sh          $zero, 0x8($s4)
    ctx->pc = 0x2537c8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x2537cc: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x2537ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2537d0: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2537d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x2537d4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2537d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x2537d8: 0x46082a  slt         $at, $v0, $a2
    ctx->pc = 0x2537d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2537dc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2537DCu;
    {
        const bool branch_taken_0x2537dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2537dc) {
            ctx->pc = 0x253800u;
            goto label_253800;
        }
    }
    ctx->pc = 0x2537E4u;
    // 0x2537e4: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x2537e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2537e8: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x2537e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2537ec: 0xc1280a  movz        $a1, $a2, $at
    ctx->pc = 0x2537ecu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x2537f0: 0x2604007c  addiu       $a0, $s0, 0x7C
    ctx->pc = 0x2537f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    // 0x2537f4: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x2537F4u;
    SET_GPR_U32(ctx, 31, 0x2537FCu);
    ctx->pc = 0x2537F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2537F4u;
            // 0x2537f8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2537FCu; }
        if (ctx->pc != 0x2537FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2537FCu; }
        if (ctx->pc != 0x2537FCu) { return; }
    }
    ctx->pc = 0x2537FCu;
label_2537fc:
    // 0x2537fc: 0x0  nop
    ctx->pc = 0x2537fcu;
    // NOP
label_253800:
    // 0x253800: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x253800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x253804: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x253804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x253808: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x253808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x25380c: 0x28410200  slti        $at, $v0, 0x200
    ctx->pc = 0x25380cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x253810: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x253810u;
    {
        const bool branch_taken_0x253810 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x253810) {
            ctx->pc = 0x253840u;
            goto label_253840;
        }
    }
    ctx->pc = 0x253818u;
    // 0x253818: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x253818u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25381c: 0x28a10201  slti        $at, $a1, 0x201
    ctx->pc = 0x25381cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x253820: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x253820u;
    {
        const bool branch_taken_0x253820 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x253820) {
            ctx->pc = 0x253830u;
            goto label_253830;
        }
    }
    ctx->pc = 0x253828u;
    // 0x253828: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x253828u;
    {
        const bool branch_taken_0x253828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25382Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253828u;
            // 0x25382c: 0x26040088  addiu       $a0, $s0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253828) {
            ctx->pc = 0x253838u;
            goto label_253838;
        }
    }
    ctx->pc = 0x253830u;
label_253830:
    // 0x253830: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x253830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x253834: 0x26040088  addiu       $a0, $s0, 0x88
    ctx->pc = 0x253834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
label_253838:
    // 0x253838: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x253838u;
    SET_GPR_U32(ctx, 31, 0x253840u);
    ctx->pc = 0x25383Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253838u;
            // 0x25383c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253840u; }
        if (ctx->pc != 0x253840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253840u; }
        if (ctx->pc != 0x253840u) { return; }
    }
    ctx->pc = 0x253840u;
label_253840:
    // 0x253840: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x253840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x253844: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x253844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x253848: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x253848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x25384c: 0x28410200  slti        $at, $v0, 0x200
    ctx->pc = 0x25384cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x253850: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x253850u;
    {
        const bool branch_taken_0x253850 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x253850) {
            ctx->pc = 0x253880u;
            goto label_253880;
        }
    }
    ctx->pc = 0x253858u;
    // 0x253858: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x253858u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25385c: 0x28a10201  slti        $at, $a1, 0x201
    ctx->pc = 0x25385cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x253860: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x253860u;
    {
        const bool branch_taken_0x253860 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x253860) {
            ctx->pc = 0x253870u;
            goto label_253870;
        }
    }
    ctx->pc = 0x253868u;
    // 0x253868: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x253868u;
    {
        const bool branch_taken_0x253868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25386Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253868u;
            // 0x25386c: 0x26040094  addiu       $a0, $s0, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253868) {
            ctx->pc = 0x253878u;
            goto label_253878;
        }
    }
    ctx->pc = 0x253870u;
label_253870:
    // 0x253870: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x253870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x253874: 0x26040094  addiu       $a0, $s0, 0x94
    ctx->pc = 0x253874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
label_253878:
    // 0x253878: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x253878u;
    SET_GPR_U32(ctx, 31, 0x253880u);
    ctx->pc = 0x25387Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253878u;
            // 0x25387c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253880u; }
        if (ctx->pc != 0x253880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253880u; }
        if (ctx->pc != 0x253880u) { return; }
    }
    ctx->pc = 0x253880u;
label_253880:
    // 0x253880: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x253880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x253884: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x253884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253888: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x253888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x25388c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x25388cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x253890: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x253890u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x253894: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x253894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x253898: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x253898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25389c: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x25389cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2538a0: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x2538a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x2538a4: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x2538a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2538a8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2538a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2538ac: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x2538acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x2538b0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2538b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2538b4: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x2538b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2538b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2538b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2538bc: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x2538bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2538c0: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x2538c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x2538c4: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x2538c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x2538c8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2538c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2538cc: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x2538ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x2538d0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2538d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2538d4: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x2538d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2538d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2538d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2538dc: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x2538dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2538e0: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x2538e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x2538e4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2538e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2538e8: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x2538e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x2538ec: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x2538ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x2538f0: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x2538f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2538f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2538f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2538f8: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x2538f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
    // 0x2538fc: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x2538fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x253900: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x253900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x253904: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x253904u;
    {
        const bool branch_taken_0x253904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253904) {
            ctx->pc = 0x253928u;
            goto label_253928;
        }
    }
    ctx->pc = 0x25390Cu;
    // 0x25390c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x25390cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x253910: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x253910u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x253914: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x253914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x253918: 0xc0a7a34  jal         func_29E8D0
    ctx->pc = 0x253918u;
    SET_GPR_U32(ctx, 31, 0x253920u);
    ctx->pc = 0x25391Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253918u;
            // 0x25391c: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E8D0u;
    if (runtime->hasFunction(0x29E8D0u)) {
        auto targetFn = runtime->lookupFunction(0x29E8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253920u; }
        if (ctx->pc != 0x253920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E8D0_0x29e8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253920u; }
        if (ctx->pc != 0x253920u) { return; }
    }
    ctx->pc = 0x253920u;
label_253920:
    // 0x253920: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x253920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x253924: 0x0  nop
    ctx->pc = 0x253924u;
    // NOP
label_253928:
    // 0x253928: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x253928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x25392c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x25392cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x253930: 0x10200049  beqz        $at, . + 4 + (0x49 << 2)
    ctx->pc = 0x253930u;
    {
        const bool branch_taken_0x253930 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x253934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253930u;
            // 0x253934: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253930) {
            ctx->pc = 0x253A58u;
            goto label_253a58;
        }
    }
    ctx->pc = 0x253938u;
    // 0x253938: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x253938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25393c: 0x0  nop
    ctx->pc = 0x25393cu;
    // NOP
label_253940:
    // 0x253940: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x253940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x253944: 0x513021  addu        $a2, $v0, $s1
    ctx->pc = 0x253944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x253948: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x253948u;
    {
        const bool branch_taken_0x253948 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x253948) {
            ctx->pc = 0x253968u;
            goto label_253968;
        }
    }
    ctx->pc = 0x253950u;
    // 0x253950: 0xafbd0134  sw          $sp, 0x134($sp)
    ctx->pc = 0x253950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 29));
    // 0x253954: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x253954u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x253958: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x253958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x25395c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x25395cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x253960: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x253960u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x253964: 0x0  nop
    ctx->pc = 0x253964u;
    // NOP
label_253968:
    // 0x253968: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x253968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x25396c: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x25396cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x253970: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x253970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x253974: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x253974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x253978: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x253978u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x25397c: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x25397cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x253980: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x253980u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x253984: 0xa4c20002  sh          $v0, 0x2($a2)
    ctx->pc = 0x253984u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x253988: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x253988u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25398c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x25398cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x253990: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x253990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x253994: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x253994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x253998: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x253998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x25399c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25399Cu;
    {
        const bool branch_taken_0x25399c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2539A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25399Cu;
            // 0x2539a0: 0x3093ffff  andi        $s3, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25399c) {
            ctx->pc = 0x2539B0u;
            goto label_2539b0;
        }
    }
    ctx->pc = 0x2539A4u;
    // 0x2539a4: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x2539A4u;
    SET_GPR_U32(ctx, 31, 0x2539ACu);
    ctx->pc = 0x2539A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2539A4u;
            // 0x2539a8: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2539ACu; }
        if (ctx->pc != 0x2539ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2539ACu; }
        if (ctx->pc != 0x2539ACu) { return; }
    }
    ctx->pc = 0x2539ACu;
label_2539ac:
    // 0x2539ac: 0x0  nop
    ctx->pc = 0x2539acu;
    // NOP
label_2539b0:
    // 0x2539b0: 0x8e060074  lw          $a2, 0x74($s0)
    ctx->pc = 0x2539b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2539b4: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x2539b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x2539b8: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x2539b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2539bc: 0x34640001  ori         $a0, $v1, 0x1
    ctx->pc = 0x2539bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2539c0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2539c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2539c4: 0x34430001  ori         $v1, $v0, 0x1
    ctx->pc = 0x2539c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2539c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2539c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2539cc: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x2539ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2539d0: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x2539d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2539d4: 0xae050074  sw          $a1, 0x74($s0)
    ctx->pc = 0x2539d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 5));
    // 0x2539d8: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x2539d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2539dc: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x2539dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2539e0: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x2539e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2539e4: 0xa4e50008  sh          $a1, 0x8($a3)
    ctx->pc = 0x2539e4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x2539e8: 0x8e060080  lw          $a2, 0x80($s0)
    ctx->pc = 0x2539e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2539ec: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x2539ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2539f0: 0xae050080  sw          $a1, 0x80($s0)
    ctx->pc = 0x2539f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 5));
    // 0x2539f4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2539f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2539f8: 0x8e05007c  lw          $a1, 0x7C($s0)
    ctx->pc = 0x2539f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2539fc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2539fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x253a00: 0xa4b20000  sh          $s2, 0x0($a1)
    ctx->pc = 0x253a00u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x253a04: 0xa4b30002  sh          $s3, 0x2($a1)
    ctx->pc = 0x253a04u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 19));
    // 0x253a08: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x253a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x253a0c: 0xa4e5000a  sh          $a1, 0xA($a3)
    ctx->pc = 0x253a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 5));
    // 0x253a10: 0x8e060080  lw          $a2, 0x80($s0)
    ctx->pc = 0x253a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x253a14: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x253a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x253a18: 0xae050080  sw          $a1, 0x80($s0)
    ctx->pc = 0x253a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 5));
    // 0x253a1c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x253a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x253a20: 0x8e05007c  lw          $a1, 0x7C($s0)
    ctx->pc = 0x253a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x253a24: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x253a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x253a28: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x253a28u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x253a2c: 0xa4b30002  sh          $s3, 0x2($a1)
    ctx->pc = 0x253a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 19));
    // 0x253a30: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x253a30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x253a34: 0xa4e00002  sh          $zero, 0x2($a3)
    ctx->pc = 0x253a34u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x253a38: 0xa4e00000  sh          $zero, 0x0($a3)
    ctx->pc = 0x253a38u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x253a3c: 0xa4e20006  sh          $v0, 0x6($a3)
    ctx->pc = 0x253a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x253a40: 0xa4e20004  sh          $v0, 0x4($a3)
    ctx->pc = 0x253a40u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x253a44: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x253a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x253a48: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x253a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x253a4c: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x253A4Cu;
    {
        const bool branch_taken_0x253a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253A4Cu;
            // 0x253a50: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253a4c) {
            ctx->pc = 0x253940u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_253940;
        }
    }
    ctx->pc = 0x253A54u;
    // 0x253a54: 0x0  nop
    ctx->pc = 0x253a54u;
    // NOP
label_253a58:
    // 0x253a58: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x253a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x253a5c: 0x3405fffd  ori         $a1, $zero, 0xFFFD
    ctx->pc = 0x253a5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x253a60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x253a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a64: 0xa683000a  sh          $v1, 0xA($s4)
    ctx->pc = 0x253a64u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x253a68: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x253a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x253a6c: 0xa6830004  sh          $v1, 0x4($s4)
    ctx->pc = 0x253a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x253a70: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x253a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x253a74: 0xa6830006  sh          $v1, 0x6($s4)
    ctx->pc = 0x253a74u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x253a78: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x253a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x253a7c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x253a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x253a80: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x253a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x253a84: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x253a84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x253a88: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x253a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x253a8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x253a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x253a90: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x253a90u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x253a94: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x253a94u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x253a98: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x253a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x253a9c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x253a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x253aa0: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x253aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
    // 0x253aa4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x253aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x253aa8: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x253aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x253aac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x253aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x253ab0: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x253ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x253ab4: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x253ab4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x253ab8: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x253ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x253abc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x253abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x253ac0: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x253ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
    // 0x253ac4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x253ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x253ac8: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x253ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x253acc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x253accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x253ad0: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x253ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x253ad4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x253AD4u;
    {
        const bool branch_taken_0x253ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253AD4u;
            // 0x253ad8: 0xa4600002  sh          $zero, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253ad4) {
            ctx->pc = 0x253B68u;
            goto label_253b68;
        }
    }
    ctx->pc = 0x253ADCu;
    // 0x253adc: 0x0  nop
    ctx->pc = 0x253adcu;
    // NOP
label_253ae0:
    // 0x253ae0: 0x3c153f00  lui         $s5, 0x3F00
    ctx->pc = 0x253ae0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16128 << 16));
    // 0x253ae4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x253ae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253ae8: 0x3c0f0060  lui         $t7, 0x60
    ctx->pc = 0x253ae8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)96 << 16));
    // 0x253aec: 0x3c0e0060  lui         $t6, 0x60
    ctx->pc = 0x253aecu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)96 << 16));
    // 0x253af0: 0x3c0d0060  lui         $t5, 0x60
    ctx->pc = 0x253af0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)96 << 16));
    // 0x253af4: 0x3c0c0064  lui         $t4, 0x64
    ctx->pc = 0x253af4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)100 << 16));
    // 0x253af8: 0x3c0b0064  lui         $t3, 0x64
    ctx->pc = 0x253af8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)100 << 16));
    // 0x253afc: 0x3c0a0064  lui         $t2, 0x64
    ctx->pc = 0x253afcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)100 << 16));
    // 0x253b00: 0x3c090064  lui         $t1, 0x64
    ctx->pc = 0x253b00u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)100 << 16));
    // 0x253b04: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x253b04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
    // 0x253b08: 0x3c070064  lui         $a3, 0x64
    ctx->pc = 0x253b08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
    // 0x253b0c: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x253b0cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x253b10: 0x27b300f0  addiu       $s3, $sp, 0xF0
    ctx->pc = 0x253b10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x253b14: 0x27b200d0  addiu       $s2, $sp, 0xD0
    ctx->pc = 0x253b14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x253b18: 0x27b100f4  addiu       $s1, $sp, 0xF4
    ctx->pc = 0x253b18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x253b1c: 0x27b900f8  addiu       $t9, $sp, 0xF8
    ctx->pc = 0x253b1cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x253b20: 0x27b800fc  addiu       $t8, $sp, 0xFC
    ctx->pc = 0x253b20u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x253b24: 0x25efcf94  addiu       $t7, $t7, -0x306C
    ctx->pc = 0x253b24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954900));
    // 0x253b28: 0x25cecf98  addiu       $t6, $t6, -0x3068
    ctx->pc = 0x253b28u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294954904));
    // 0x253b2c: 0x25adcf9c  addiu       $t5, $t5, -0x3064
    ctx->pc = 0x253b2cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294954908));
    // 0x253b30: 0x258cf934  addiu       $t4, $t4, -0x6CC
    ctx->pc = 0x253b30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294965556));
    // 0x253b34: 0x256bf938  addiu       $t3, $t3, -0x6C8
    ctx->pc = 0x253b34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294965560));
    // 0x253b38: 0x254af93c  addiu       $t2, $t2, -0x6C4
    ctx->pc = 0x253b38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294965564));
    // 0x253b3c: 0x2529f904  addiu       $t1, $t1, -0x6FC
    ctx->pc = 0x253b3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965508));
    // 0x253b40: 0x2508f908  addiu       $t0, $t0, -0x6F8
    ctx->pc = 0x253b40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965512));
    // 0x253b44: 0x24e7f90c  addiu       $a3, $a3, -0x6F4
    ctx->pc = 0x253b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965516));
    // 0x253b48: 0x27a600e4  addiu       $a2, $sp, 0xE4
    ctx->pc = 0x253b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x253b4c: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x253b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x253b50: 0x27b700ec  addiu       $s7, $sp, 0xEC
    ctx->pc = 0x253b50u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x253b54: 0x27a400d4  addiu       $a0, $sp, 0xD4
    ctx->pc = 0x253b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x253b58: 0x27a300d8  addiu       $v1, $sp, 0xD8
    ctx->pc = 0x253b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x253b5c: 0x27a200dc  addiu       $v0, $sp, 0xDC
    ctx->pc = 0x253b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x253b60: 0x1000fea5  b           . + 4 + (-0x15B << 2)
    ctx->pc = 0x253B60u;
    {
        const bool branch_taken_0x253b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253B60u;
            // 0x253b64: 0x27be00c4  addiu       $fp, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253b60) {
            ctx->pc = 0x2535F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2535f8;
        }
    }
    ctx->pc = 0x253B68u;
label_253b68:
    // 0x253b68: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x253b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x253b6c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x253b6cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x253b70: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x253b70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x253b74: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x253b74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x253b78: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x253b78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x253b7c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x253b7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253b80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x253b80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253b84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x253b84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253b88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x253b88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253b8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x253b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253b90: 0x3e00008  jr          $ra
    ctx->pc = 0x253B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253B90u;
            // 0x253b94: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x253B98u;
    // 0x253b98: 0x0  nop
    ctx->pc = 0x253b98u;
    // NOP
    // 0x253b9c: 0x0  nop
    ctx->pc = 0x253b9cu;
    // NOP
    // 0x253ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x253ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x253ba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x253ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x253ba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x253ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x253bac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x253bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253bb0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x253BB0u;
    {
        const bool branch_taken_0x253bb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x253bb0) {
            ctx->pc = 0x253BF8u;
            goto label_253bf8;
        }
    }
    ctx->pc = 0x253BB8u;
    // 0x253bb8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x253BB8u;
    {
        const bool branch_taken_0x253bb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x253bb8) {
            ctx->pc = 0x253BF8u;
            goto label_253bf8;
        }
    }
    ctx->pc = 0x253BC0u;
    // 0x253bc0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x253bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x253bc4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x253bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x253bc8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x253bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x253bcc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x253BCCu;
    {
        const bool branch_taken_0x253bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253bcc) {
            ctx->pc = 0x253BF8u;
            goto label_253bf8;
        }
    }
    ctx->pc = 0x253BD4u;
    // 0x253bd4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x253bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x253bd8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x253bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x253bdc: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x253bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x253be0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x253be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x253be4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x253be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x253be8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x253be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x253bec: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x253becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x253bf0: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x253BF0u;
    SET_GPR_U32(ctx, 31, 0x253BF8u);
    ctx->pc = 0x253BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253BF0u;
            // 0x253bf4: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253BF8u; }
        if (ctx->pc != 0x253BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253BF8u; }
        if (ctx->pc != 0x253BF8u) { return; }
    }
    ctx->pc = 0x253BF8u;
label_253bf8:
    // 0x253bf8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x253bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253bfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x253bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253c00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x253c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253c04: 0x3e00008  jr          $ra
    ctx->pc = 0x253C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253C04u;
            // 0x253c08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x253C0Cu;
    // 0x253c0c: 0x0  nop
    ctx->pc = 0x253c0cu;
    // NOP
    // 0x253c10: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x253c10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x253c14: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x253c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x253c18: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x253c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x253c1c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x253c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x253c20: 0x3e00008  jr          $ra
    ctx->pc = 0x253C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253C20u;
            // 0x253c24: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x253C28u;
    // 0x253c28: 0x0  nop
    ctx->pc = 0x253c28u;
    // NOP
    // 0x253c2c: 0x0  nop
    ctx->pc = 0x253c2cu;
    // NOP
    // 0x253c30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x253c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x253c34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x253c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x253c38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x253c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x253c3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x253c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x253c40: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x253c40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x253c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x253c48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x253c48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c4c: 0x1260004c  beqz        $s3, . + 4 + (0x4C << 2)
    ctx->pc = 0x253C4Cu;
    {
        const bool branch_taken_0x253c4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x253C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253C4Cu;
            // 0x253c50: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253c4c) {
            ctx->pc = 0x253D80u;
            goto label_253d80;
        }
    }
    ctx->pc = 0x253C54u;
    // 0x253c54: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x253c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x253c58: 0x2442f1e0  addiu       $v0, $v0, -0xE20
    ctx->pc = 0x253c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963680));
    // 0x253c5c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x253c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x253c60: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x253c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
    // 0x253c64: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x253c64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x253c68: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x253C68u;
    {
        const bool branch_taken_0x253c68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x253C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253C68u;
            // 0x253c6c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253c68) {
            ctx->pc = 0x253CE0u;
            goto label_253ce0;
        }
    }
    ctx->pc = 0x253C70u;
    // 0x253c70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x253c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c74: 0x0  nop
    ctx->pc = 0x253c74u;
    // NOP
label_253c78:
    // 0x253c78: 0x8e6200a8  lw          $v0, 0xA8($s3)
    ctx->pc = 0x253c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
    // 0x253c7c: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x253c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x253c80: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x253C80u;
    {
        const bool branch_taken_0x253c80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x253C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253C80u;
            // 0x253c84: 0x24820004  addiu       $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253c80) {
            ctx->pc = 0x253CC8u;
            goto label_253cc8;
        }
    }
    ctx->pc = 0x253C88u;
    // 0x253c88: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x253C88u;
    {
        const bool branch_taken_0x253c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253c88) {
            ctx->pc = 0x253CC8u;
            goto label_253cc8;
        }
    }
    ctx->pc = 0x253C90u;
    // 0x253c90: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x253c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x253c94: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x253c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x253c98: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x253c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x253c9c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x253C9Cu;
    {
        const bool branch_taken_0x253c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253c9c) {
            ctx->pc = 0x253CC8u;
            goto label_253cc8;
        }
    }
    ctx->pc = 0x253CA4u;
    // 0x253ca4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x253ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x253ca8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x253ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x253cac: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x253cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x253cb0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x253cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x253cb4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x253cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x253cb8: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x253cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x253cbc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x253cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x253cc0: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x253CC0u;
    SET_GPR_U32(ctx, 31, 0x253CC8u);
    ctx->pc = 0x253CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253CC0u;
            // 0x253cc4: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253CC8u; }
        if (ctx->pc != 0x253CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253CC8u; }
        if (ctx->pc != 0x253CC8u) { return; }
    }
    ctx->pc = 0x253CC8u;
label_253cc8:
    // 0x253cc8: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x253cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
    // 0x253ccc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x253cccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x253cd0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x253cd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x253cd4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x253CD4u;
    {
        const bool branch_taken_0x253cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253CD4u;
            // 0x253cd8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253cd4) {
            ctx->pc = 0x253C78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_253c78;
        }
    }
    ctx->pc = 0x253CDCu;
    // 0x253cdc: 0x0  nop
    ctx->pc = 0x253cdcu;
    // NOP
label_253ce0:
    // 0x253ce0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x253ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x253ce4: 0x8e6500a8  lw          $a1, 0xA8($s3)
    ctx->pc = 0x253ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
    // 0x253ce8: 0xc0a7a48  jal         func_29E920
    ctx->pc = 0x253CE8u;
    SET_GPR_U32(ctx, 31, 0x253CF0u);
    ctx->pc = 0x253CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253CE8u;
            // 0x253cec: 0x8c24ea40  lw          $a0, -0x15C0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E920u;
    if (runtime->hasFunction(0x29E920u)) {
        auto targetFn = runtime->lookupFunction(0x29E920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253CF0u; }
        if (ctx->pc != 0x253CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E920_0x29e920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253CF0u; }
        if (ctx->pc != 0x253CF0u) { return; }
    }
    ctx->pc = 0x253CF0u;
label_253cf0:
    // 0x253cf0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x253cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x253cf4: 0x2664007c  addiu       $a0, $s3, 0x7C
    ctx->pc = 0x253cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 124));
    // 0x253cf8: 0x24a53ba0  addiu       $a1, $a1, 0x3BA0
    ctx->pc = 0x253cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15264));
    // 0x253cfc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x253cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x253d00: 0xc0407e8  jal         func_101FA0
    ctx->pc = 0x253D00u;
    SET_GPR_U32(ctx, 31, 0x253D08u);
    ctx->pc = 0x253D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253D00u;
            // 0x253d04: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253D08u; }
        if (ctx->pc != 0x253D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253D08u; }
        if (ctx->pc != 0x253D08u) { return; }
    }
    ctx->pc = 0x253D08u;
label_253d08:
    // 0x253d08: 0x26620070  addiu       $v0, $s3, 0x70
    ctx->pc = 0x253d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x253d0c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x253D0Cu;
    {
        const bool branch_taken_0x253d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x253d0c) {
            ctx->pc = 0x253D50u;
            goto label_253d50;
        }
    }
    ctx->pc = 0x253D14u;
    // 0x253d14: 0x8e630078  lw          $v1, 0x78($s3)
    ctx->pc = 0x253d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x253d18: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x253d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x253d1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x253d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x253d20: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x253D20u;
    {
        const bool branch_taken_0x253d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253d20) {
            ctx->pc = 0x253D50u;
            goto label_253d50;
        }
    }
    ctx->pc = 0x253D28u;
    // 0x253d28: 0x8e620078  lw          $v0, 0x78($s3)
    ctx->pc = 0x253d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x253d2c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x253d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x253d30: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x253d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x253d34: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x253d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x253d38: 0x8e650070  lw          $a1, 0x70($s3)
    ctx->pc = 0x253d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x253d3c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x253d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x253d40: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x253d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x253d44: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x253D44u;
    SET_GPR_U32(ctx, 31, 0x253D4Cu);
    ctx->pc = 0x253D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253D44u;
            // 0x253d48: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253D4Cu; }
        if (ctx->pc != 0x253D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253D4Cu; }
        if (ctx->pc != 0x253D4Cu) { return; }
    }
    ctx->pc = 0x253D4Cu;
label_253d4c:
    // 0x253d4c: 0x0  nop
    ctx->pc = 0x253d4cu;
    // NOP
label_253d50:
    // 0x253d50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x253d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d54: 0xc097300  jal         func_25CC00
    ctx->pc = 0x253D54u;
    SET_GPR_U32(ctx, 31, 0x253D5Cu);
    ctx->pc = 0x253D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253D54u;
            // 0x253d58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CC00u;
    if (runtime->hasFunction(0x25CC00u)) {
        auto targetFn = runtime->lookupFunction(0x25CC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253D5Cu; }
        if (ctx->pc != 0x253D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CC00_0x25cc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253D5Cu; }
        if (ctx->pc != 0x253D5Cu) { return; }
    }
    ctx->pc = 0x253D5Cu;
label_253d5c:
    // 0x253d5c: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x253d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x253d60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x253d60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x253d64: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x253D64u;
    {
        const bool branch_taken_0x253d64 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x253D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253D64u;
            // 0x253d68: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d64) {
            ctx->pc = 0x253D80u;
            goto label_253d80;
        }
    }
    ctx->pc = 0x253D6Cu;
    // 0x253d6c: 0x96660004  lhu         $a2, 0x4($s3)
    ctx->pc = 0x253d6cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x253d70: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x253d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x253d74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x253d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d78: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x253D78u;
    SET_GPR_U32(ctx, 31, 0x253D80u);
    ctx->pc = 0x253D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253D78u;
            // 0x253d7c: 0x2407001f  addiu       $a3, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253D80u; }
        if (ctx->pc != 0x253D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253D80u; }
        if (ctx->pc != 0x253D80u) { return; }
    }
    ctx->pc = 0x253D80u;
label_253d80:
    // 0x253d80: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x253d80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d84: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x253d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253d88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x253d88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253d8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x253d8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253d90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x253d90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253d94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x253d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253d98: 0x3e00008  jr          $ra
    ctx->pc = 0x253D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253D98u;
            // 0x253d9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x253DA0u;
}
