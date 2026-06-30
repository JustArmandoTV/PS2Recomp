#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BB430
// Address: 0x3bb430 - 0x3bb560
void sub_003BB430_0x3bb430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB430_0x3bb430");
#endif

    switch (ctx->pc) {
        case 0x3bb49cu: goto label_3bb49c;
        case 0x3bb4d4u: goto label_3bb4d4;
        case 0x3bb4e0u: goto label_3bb4e0;
        case 0x3bb4f0u: goto label_3bb4f0;
        case 0x3bb504u: goto label_3bb504;
        case 0x3bb50cu: goto label_3bb50c;
        case 0x3bb524u: goto label_3bb524;
        case 0x3bb538u: goto label_3bb538;
        case 0x3bb540u: goto label_3bb540;
        default: break;
    }

    ctx->pc = 0x3bb430u;

    // 0x3bb430: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3bb430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3bb434: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3bb434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3bb438: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3bb438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3bb43c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bb43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3bb440: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bb440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bb444: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3bb444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bb448: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x3bb448u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bb44c: 0x8e23069c  lw          $v1, 0x69C($s1)
    ctx->pc = 0x3bb44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
    // 0x3bb450: 0x54620030  bnel        $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3BB450u;
    {
        const bool branch_taken_0x3bb450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3bb450) {
            ctx->pc = 0x3BB454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB450u;
            // 0x3bb454: 0x26250560  addiu       $a1, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BB514u;
            goto label_3bb514;
        }
    }
    ctx->pc = 0x3BB458u;
    // 0x3bb458: 0x8e250630  lw          $a1, 0x630($s1)
    ctx->pc = 0x3bb458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1584)));
    // 0x3bb45c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3bb45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3bb460: 0x96260642  lhu         $a2, 0x642($s1)
    ctx->pc = 0x3bb460u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1602)));
    // 0x3bb464: 0x263005f0  addiu       $s0, $s1, 0x5F0
    ctx->pc = 0x3bb464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1520));
    // 0x3bb468: 0x96230640  lhu         $v1, 0x640($s1)
    ctx->pc = 0x3bb468u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1600)));
    // 0x3bb46c: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x3bb46cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3bb470: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x3bb470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3bb474: 0x38650001  xori        $a1, $v1, 0x1
    ctx->pc = 0x3bb474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3bb478: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x3bb478u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3bb47c: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x3bb47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x3bb480: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x3bb480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3bb484: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3bb484u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3bb488: 0xe23021  addu        $a2, $a3, $v0
    ctx->pc = 0x3bb488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3bb48c: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x3bb48cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3bb490: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3bb490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3bb494: 0xc04cc90  jal         func_133240
    ctx->pc = 0x3BB494u;
    SET_GPR_U32(ctx, 31, 0x3BB49Cu);
    ctx->pc = 0x3BB498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB494u;
            // 0x3bb498: 0xe22821  addu        $a1, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB49Cu; }
        if (ctx->pc != 0x3BB49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB49Cu; }
        if (ctx->pc != 0x3BB49Cu) { return; }
    }
    ctx->pc = 0x3BB49Cu;
label_3bb49c:
    // 0x3bb49c: 0x8e220630  lw          $v0, 0x630($s1)
    ctx->pc = 0x3bb49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1584)));
    // 0x3bb4a0: 0x84420024  lh          $v0, 0x24($v0)
    ctx->pc = 0x3bb4a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x3bb4a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3bb4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3bb4a8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3BB4A8u;
    {
        const bool branch_taken_0x3bb4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb4a8) {
            ctx->pc = 0x3BB4ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB4A8u;
            // 0x3bb4ac: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BB4D8u;
            goto label_3bb4d8;
        }
    }
    ctx->pc = 0x3BB4B0u;
    // 0x3bb4b0: 0x96030050  lhu         $v1, 0x50($s0)
    ctx->pc = 0x3bb4b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3bb4b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3bb4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3bb4b8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BB4B8u;
    {
        const bool branch_taken_0x3bb4b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3bb4b8) {
            ctx->pc = 0x3BB4D4u;
            goto label_3bb4d4;
        }
    }
    ctx->pc = 0x3BB4C0u;
    // 0x3bb4c0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3bb4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3bb4c4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3bb4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3bb4c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3bb4c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bb4cc: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x3BB4CCu;
    SET_GPR_U32(ctx, 31, 0x3BB4D4u);
    ctx->pc = 0x3BB4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB4CCu;
            // 0x3bb4d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB4D4u; }
        if (ctx->pc != 0x3BB4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB4D4u; }
        if (ctx->pc != 0x3BB4D4u) { return; }
    }
    ctx->pc = 0x3BB4D4u;
label_3bb4d4:
    // 0x3bb4d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3bb4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3bb4d8:
    // 0x3bb4d8: 0xc04cc44  jal         func_133110
    ctx->pc = 0x3BB4D8u;
    SET_GPR_U32(ctx, 31, 0x3BB4E0u);
    ctx->pc = 0x3BB4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB4D8u;
            // 0x3bb4dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB4E0u; }
        if (ctx->pc != 0x3BB4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB4E0u; }
        if (ctx->pc != 0x3BB4E0u) { return; }
    }
    ctx->pc = 0x3BB4E0u;
label_3bb4e0:
    // 0x3bb4e0: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x3bb4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    // 0x3bb4e4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3bb4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3bb4e8: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x3BB4E8u;
    SET_GPR_U32(ctx, 31, 0x3BB4F0u);
    ctx->pc = 0x3BB4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB4E8u;
            // 0x3bb4ec: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB4F0u; }
        if (ctx->pc != 0x3BB4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB4F0u; }
        if (ctx->pc != 0x3BB4F0u) { return; }
    }
    ctx->pc = 0x3BB4F0u;
label_3bb4f0:
    // 0x3bb4f0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3bb4f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3bb4f4: 0x2624087c  addiu       $a0, $s1, 0x87C
    ctx->pc = 0x3bb4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2172));
    // 0x3bb4f8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3bb4f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x3bb4fc: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x3BB4FCu;
    SET_GPR_U32(ctx, 31, 0x3BB504u);
    ctx->pc = 0x3BB500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB4FCu;
            // 0x3bb500: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB504u; }
        if (ctx->pc != 0x3BB504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB504u; }
        if (ctx->pc != 0x3BB504u) { return; }
    }
    ctx->pc = 0x3BB504u;
label_3bb504:
    // 0x3bb504: 0xc0b9210  jal         func_2E4840
    ctx->pc = 0x3BB504u;
    SET_GPR_U32(ctx, 31, 0x3BB50Cu);
    ctx->pc = 0x3BB508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB504u;
            // 0x3bb508: 0x262407e0  addiu       $a0, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB50Cu; }
        if (ctx->pc != 0x3BB50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB50Cu; }
        if (ctx->pc != 0x3BB50Cu) { return; }
    }
    ctx->pc = 0x3BB50Cu;
label_3bb50c:
    // 0x3bb50c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3BB50Cu;
    {
        const bool branch_taken_0x3bb50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB50Cu;
            // 0x3bb510: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb50c) {
            ctx->pc = 0x3BB544u;
            goto label_3bb544;
        }
    }
    ctx->pc = 0x3BB514u;
label_3bb514:
    // 0x3bb514: 0x26240840  addiu       $a0, $s1, 0x840
    ctx->pc = 0x3bb514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
    // 0x3bb518: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3bb518u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bb51c: 0xc0c6250  jal         func_318940
    ctx->pc = 0x3BB51Cu;
    SET_GPR_U32(ctx, 31, 0x3BB524u);
    ctx->pc = 0x3BB520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB51Cu;
            // 0x3bb520: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB524u; }
        if (ctx->pc != 0x3BB524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB524u; }
        if (ctx->pc != 0x3BB524u) { return; }
    }
    ctx->pc = 0x3BB524u;
label_3bb524:
    // 0x3bb524: 0xc62c0930  lwc1        $f12, 0x930($s1)
    ctx->pc = 0x3bb524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3bb528: 0x2624087c  addiu       $a0, $s1, 0x87C
    ctx->pc = 0x3bb528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2172));
    // 0x3bb52c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3bb52cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3bb530: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x3BB530u;
    SET_GPR_U32(ctx, 31, 0x3BB538u);
    ctx->pc = 0x3BB534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB530u;
            // 0x3bb534: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB538u; }
        if (ctx->pc != 0x3BB538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB538u; }
        if (ctx->pc != 0x3BB538u) { return; }
    }
    ctx->pc = 0x3BB538u;
label_3bb538:
    // 0x3bb538: 0xc0b9210  jal         func_2E4840
    ctx->pc = 0x3BB538u;
    SET_GPR_U32(ctx, 31, 0x3BB540u);
    ctx->pc = 0x3BB53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB538u;
            // 0x3bb53c: 0x262407e0  addiu       $a0, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB540u; }
        if (ctx->pc != 0x3BB540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB540u; }
        if (ctx->pc != 0x3BB540u) { return; }
    }
    ctx->pc = 0x3BB540u;
label_3bb540:
    // 0x3bb540: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3bb540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3bb544:
    // 0x3bb544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bb544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bb548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bb54c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB54Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB54Cu;
            // 0x3bb550: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BB554u;
    // 0x3bb554: 0x0  nop
    ctx->pc = 0x3bb554u;
    // NOP
    // 0x3bb558: 0x0  nop
    ctx->pc = 0x3bb558u;
    // NOP
    // 0x3bb55c: 0x0  nop
    ctx->pc = 0x3bb55cu;
    // NOP
}
