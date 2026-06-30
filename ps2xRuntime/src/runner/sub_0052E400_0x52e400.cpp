#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0052E400
// Address: 0x52e400 - 0x52e5d0
void sub_0052E400_0x52e400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0052E400_0x52e400");
#endif

    switch (ctx->pc) {
        case 0x52e42cu: goto label_52e42c;
        case 0x52e44cu: goto label_52e44c;
        case 0x52e470u: goto label_52e470;
        case 0x52e4c0u: goto label_52e4c0;
        case 0x52e4ccu: goto label_52e4cc;
        case 0x52e500u: goto label_52e500;
        case 0x52e560u: goto label_52e560;
        case 0x52e56cu: goto label_52e56c;
        case 0x52e578u: goto label_52e578;
        case 0x52e584u: goto label_52e584;
        case 0x52e590u: goto label_52e590;
        case 0x52e59cu: goto label_52e59c;
        case 0x52e5b4u: goto label_52e5b4;
        default: break;
    }

    ctx->pc = 0x52e400u;

    // 0x52e400: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x52e400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x52e404: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x52e404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x52e408: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x52e408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x52e40c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x52e40cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x52e410: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52e410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x52e414: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52e414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x52e418: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x52e418u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52e41c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x52e41cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52e420: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52e420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x52e424: 0xc14b9ac  jal         func_52E6B0
    ctx->pc = 0x52E424u;
    SET_GPR_U32(ctx, 31, 0x52E42Cu);
    ctx->pc = 0x52E428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E424u;
            // 0x52e428: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52E6B0u;
    if (runtime->hasFunction(0x52E6B0u)) {
        auto targetFn = runtime->lookupFunction(0x52E6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E42Cu; }
        if (ctx->pc != 0x52E42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052E6B0_0x52e6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E42Cu; }
        if (ctx->pc != 0x52E42Cu) { return; }
    }
    ctx->pc = 0x52E42Cu;
label_52e42c:
    // 0x52e42c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52e42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x52e430: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52e430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x52e434: 0x24636b90  addiu       $v1, $v1, 0x6B90
    ctx->pc = 0x52e434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27536));
    // 0x52e438: 0x24426bc8  addiu       $v0, $v0, 0x6BC8
    ctx->pc = 0x52e438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27592));
    // 0x52e43c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x52e43cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x52e440: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x52e440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52e444: 0xc14b9a8  jal         func_52E6A0
    ctx->pc = 0x52E444u;
    SET_GPR_U32(ctx, 31, 0x52E44Cu);
    ctx->pc = 0x52E448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E444u;
            // 0x52e448: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52E6A0u;
    if (runtime->hasFunction(0x52E6A0u)) {
        auto targetFn = runtime->lookupFunction(0x52E6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E44Cu; }
        if (ctx->pc != 0x52E44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052E6A0_0x52e6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E44Cu; }
        if (ctx->pc != 0x52E44Cu) { return; }
    }
    ctx->pc = 0x52E44Cu;
label_52e44c:
    // 0x52e44c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x52e44cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x52e450: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x52e450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x52e454: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52e454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x52e458: 0x24426aa0  addiu       $v0, $v0, 0x6AA0
    ctx->pc = 0x52e458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27296));
    // 0x52e45c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x52e45cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x52e460: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52e460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x52e464: 0x24426ad8  addiu       $v0, $v0, 0x6AD8
    ctx->pc = 0x52e464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27352));
    // 0x52e468: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x52e468u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
    // 0x52e46c: 0x8e43007c  lw          $v1, 0x7C($s2)
    ctx->pc = 0x52e46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_52e470:
    // 0x52e470: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x52e470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
    // 0x52e474: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x52e474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x52e478: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x52e478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x52e47c: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x52e47cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x52e480: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x52e480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x52e484: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x52e484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x52e488: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x52e488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x52e48c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x52e48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x52e490: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x52e490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x52e494: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x52e494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x52e498: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x52e498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x52e49c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x52e49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x52e4a0: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x52e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x52e4a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x52e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x52e4a8: 0xae42007c  sw          $v0, 0x7C($s2)
    ctx->pc = 0x52e4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 2));
    // 0x52e4ac: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x52e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x52e4b0: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x52e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x52e4b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x52e4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x52e4b8: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x52E4B8u;
    SET_GPR_U32(ctx, 31, 0x52E4C0u);
    ctx->pc = 0x52E4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E4B8u;
            // 0x52e4bc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E4C0u; }
        if (ctx->pc != 0x52E4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E4C0u; }
        if (ctx->pc != 0x52E4C0u) { return; }
    }
    ctx->pc = 0x52E4C0u;
label_52e4c0:
    // 0x52e4c0: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x52e4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x52e4c4: 0xc0d879c  jal         func_361E70
    ctx->pc = 0x52E4C4u;
    SET_GPR_U32(ctx, 31, 0x52E4CCu);
    ctx->pc = 0x52E4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E4C4u;
            // 0x52e4c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E4CCu; }
        if (ctx->pc != 0x52E4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E4CCu; }
        if (ctx->pc != 0x52E4CCu) { return; }
    }
    ctx->pc = 0x52E4CCu;
label_52e4cc:
    // 0x52e4cc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x52e4ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x52e4d0: 0x5e00ffe7  bgtzl       $s0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x52E4D0u;
    {
        const bool branch_taken_0x52e4d0 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x52e4d0) {
            ctx->pc = 0x52E4D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52E4D0u;
            // 0x52e4d4: 0x8e43007c  lw          $v1, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52E470u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52e470;
        }
    }
    ctx->pc = 0x52E4D8u;
    // 0x52e4d8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x52e4d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52e4dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x52e4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x52e4e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x52e4e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x52e4e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52e4e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x52e4e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52e4e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x52e4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x52E4ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52E4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E4ECu;
            // 0x52e4f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52E4F4u;
    // 0x52e4f4: 0x0  nop
    ctx->pc = 0x52e4f4u;
    // NOP
    // 0x52e4f8: 0x0  nop
    ctx->pc = 0x52e4f8u;
    // NOP
    // 0x52e4fc: 0x0  nop
    ctx->pc = 0x52e4fcu;
    // NOP
label_52e500:
    // 0x52e500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x52e500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x52e504: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x52e504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x52e508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52e508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x52e50c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52e50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x52e510: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x52e510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52e514: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x52E514u;
    {
        const bool branch_taken_0x52e514 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x52E518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E514u;
            // 0x52e518: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52e514) {
            ctx->pc = 0x52E5B4u;
            goto label_52e5b4;
        }
    }
    ctx->pc = 0x52E51Cu;
    // 0x52e51c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52e51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x52e520: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52e520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x52e524: 0x24636b90  addiu       $v1, $v1, 0x6B90
    ctx->pc = 0x52e524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27536));
    // 0x52e528: 0x24426bc8  addiu       $v0, $v0, 0x6BC8
    ctx->pc = 0x52e528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27592));
    // 0x52e52c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52e52cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x52e530: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x52E530u;
    {
        const bool branch_taken_0x52e530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x52E534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E530u;
            // 0x52e534: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52e530) {
            ctx->pc = 0x52E59Cu;
            goto label_52e59c;
        }
    }
    ctx->pc = 0x52E538u;
    // 0x52e538: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52e538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x52e53c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52e53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x52e540: 0x24636b40  addiu       $v1, $v1, 0x6B40
    ctx->pc = 0x52e540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27456));
    // 0x52e544: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x52e544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
    // 0x52e548: 0x24426b78  addiu       $v0, $v0, 0x6B78
    ctx->pc = 0x52e548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27512));
    // 0x52e54c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52e54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x52e550: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x52e550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x52e554: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x52e554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x52e558: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x52E558u;
    SET_GPR_U32(ctx, 31, 0x52E560u);
    ctx->pc = 0x52E55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E558u;
            // 0x52e55c: 0x24a5dee0  addiu       $a1, $a1, -0x2120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E560u; }
        if (ctx->pc != 0x52E560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E560u; }
        if (ctx->pc != 0x52E560u) { return; }
    }
    ctx->pc = 0x52E560u;
label_52e560:
    // 0x52e560: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x52e560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x52e564: 0xc0a8c98  jal         func_2A3260
    ctx->pc = 0x52E564u;
    SET_GPR_U32(ctx, 31, 0x52E56Cu);
    ctx->pc = 0x52E568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E564u;
            // 0x52e568: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E56Cu; }
        if (ctx->pc != 0x52E56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E56Cu; }
        if (ctx->pc != 0x52E56Cu) { return; }
    }
    ctx->pc = 0x52E56Cu;
label_52e56c:
    // 0x52e56c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x52e56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x52e570: 0xc14b98c  jal         func_52E630
    ctx->pc = 0x52E570u;
    SET_GPR_U32(ctx, 31, 0x52E578u);
    ctx->pc = 0x52E574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E570u;
            // 0x52e574: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52E630u;
    if (runtime->hasFunction(0x52E630u)) {
        auto targetFn = runtime->lookupFunction(0x52E630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E578u; }
        if (ctx->pc != 0x52E578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052E630_0x52e630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E578u; }
        if (ctx->pc != 0x52E578u) { return; }
    }
    ctx->pc = 0x52E578u;
label_52e578:
    // 0x52e578: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x52e578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x52e57c: 0xc14b98c  jal         func_52E630
    ctx->pc = 0x52E57Cu;
    SET_GPR_U32(ctx, 31, 0x52E584u);
    ctx->pc = 0x52E580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E57Cu;
            // 0x52e580: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52E630u;
    if (runtime->hasFunction(0x52E630u)) {
        auto targetFn = runtime->lookupFunction(0x52E630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E584u; }
        if (ctx->pc != 0x52E584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052E630_0x52e630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E584u; }
        if (ctx->pc != 0x52E584u) { return; }
    }
    ctx->pc = 0x52E584u;
label_52e584:
    // 0x52e584: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x52e584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x52e588: 0xc14b974  jal         func_52E5D0
    ctx->pc = 0x52E588u;
    SET_GPR_U32(ctx, 31, 0x52E590u);
    ctx->pc = 0x52E58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E588u;
            // 0x52e58c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52E5D0u;
    if (runtime->hasFunction(0x52E5D0u)) {
        auto targetFn = runtime->lookupFunction(0x52E5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E590u; }
        if (ctx->pc != 0x52E590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052E5D0_0x52e5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E590u; }
        if (ctx->pc != 0x52E590u) { return; }
    }
    ctx->pc = 0x52E590u;
label_52e590:
    // 0x52e590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x52e590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52e594: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x52E594u;
    SET_GPR_U32(ctx, 31, 0x52E59Cu);
    ctx->pc = 0x52E598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E594u;
            // 0x52e598: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E59Cu; }
        if (ctx->pc != 0x52E59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E59Cu; }
        if (ctx->pc != 0x52E59Cu) { return; }
    }
    ctx->pc = 0x52E59Cu;
label_52e59c:
    // 0x52e59c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x52e59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x52e5a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x52e5a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x52e5a4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x52E5A4u;
    {
        const bool branch_taken_0x52e5a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x52e5a4) {
            ctx->pc = 0x52E5A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52E5A4u;
            // 0x52e5a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52E5B8u;
            goto label_52e5b8;
        }
    }
    ctx->pc = 0x52E5ACu;
    // 0x52e5ac: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x52E5ACu;
    SET_GPR_U32(ctx, 31, 0x52E5B4u);
    ctx->pc = 0x52E5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52E5ACu;
            // 0x52e5b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E5B4u; }
        if (ctx->pc != 0x52E5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52E5B4u; }
        if (ctx->pc != 0x52E5B4u) { return; }
    }
    ctx->pc = 0x52E5B4u;
label_52e5b4:
    // 0x52e5b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x52e5b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52e5b8:
    // 0x52e5b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52e5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x52e5bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52e5bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x52e5c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52e5c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x52e5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x52E5C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52E5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52E5C4u;
            // 0x52e5c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52E5CCu;
    // 0x52e5cc: 0x0  nop
    ctx->pc = 0x52e5ccu;
    // NOP
}
