#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012F420
// Address: 0x12f420 - 0x12f5c8
void sub_0012F420_0x12f420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F420_0x12f420");
#endif

    switch (ctx->pc) {
        case 0x12f4acu: goto label_12f4ac;
        case 0x12f4d8u: goto label_12f4d8;
        case 0x12f520u: goto label_12f520;
        case 0x12f544u: goto label_12f544;
        case 0x12f568u: goto label_12f568;
        case 0x12f584u: goto label_12f584;
        default: break;
    }

    ctx->pc = 0x12f420u;

    // 0x12f420: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12f420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12f424: 0x240f0066  addiu       $t7, $zero, 0x66
    ctx->pc = 0x12f424u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x12f428: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12f428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12f42c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12f42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12f430: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12f430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12f434: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x12f434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f438: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x12f438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x12f43c: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x12f43cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f440: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x12f440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x12f444: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x12f444u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12f448: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x12f448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x12f44c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12f44cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f450: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x12f450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x12f454: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x12f454u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f458: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x12f458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x12f45c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x12f45cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f460: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x12f460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x12f464: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x12f464u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f468: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x12f468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x12f46c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x12f46cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f470: 0x114f0008  beq         $t2, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x12F470u;
    {
        const bool branch_taken_0x12f470 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 15));
        ctx->pc = 0x12F474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F470u;
            // 0x12f474: 0x160f02d  daddu       $fp, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f470) {
            ctx->pc = 0x12F494u;
            goto label_12f494;
        }
    }
    ctx->pc = 0x12F478u;
    // 0x12f478: 0x240f0065  addiu       $t7, $zero, 0x65
    ctx->pc = 0x12f478u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x12f47c: 0x114f0003  beq         $t2, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F47Cu;
    {
        const bool branch_taken_0x12f47c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 15));
        ctx->pc = 0x12F480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F47Cu;
            // 0x12f480: 0x240f0045  addiu       $t7, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f47c) {
            ctx->pc = 0x12F48Cu;
            goto label_12f48c;
        }
    }
    ctx->pc = 0x12F484u;
    // 0x12f484: 0x154f0003  bne         $t2, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F484u;
    {
        const bool branch_taken_0x12f484 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 15));
        ctx->pc = 0x12F488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F484u;
            // 0x12f488: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f484) {
            ctx->pc = 0x12F494u;
            goto label_12f494;
        }
    }
    ctx->pc = 0x12F48Cu;
label_12f48c:
    // 0x12f48c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x12f48cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x12f490: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x12f490u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12f494:
    // 0x12f494: 0x13783f  dsra32      $t7, $s3, 0
    ctx->pc = 0x12f494u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x12f498: 0x5e30007  bgezl       $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12F498u;
    {
        const bool branch_taken_0x12f498 = (GPR_S32(ctx, 15) >= 0);
        if (branch_taken_0x12f498) {
            ctx->pc = 0x12F49Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12F498u;
            // 0x12f49c: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F4B8u;
            goto label_12f4b8;
        }
    }
    ctx->pc = 0x12F4A0u;
    // 0x12f4a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12f4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4a4: 0xc049622  jal         func_125888
    ctx->pc = 0x12F4A4u;
    SET_GPR_U32(ctx, 31, 0x12F4ACu);
    ctx->pc = 0x12F4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F4A4u;
            // 0x12f4a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F4ACu; }
        if (ctx->pc != 0x12F4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F4ACu; }
        if (ctx->pc != 0x12F4ACu) { return; }
    }
    ctx->pc = 0x12F4ACu;
label_12f4ac:
    // 0x12f4ac: 0x240f002d  addiu       $t7, $zero, 0x2D
    ctx->pc = 0x12f4acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12f4b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12f4b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4b4: 0xa20f0000  sb          $t7, 0x0($s0)
    ctx->pc = 0x12f4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 15));
label_12f4b8:
    // 0x12f4b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12f4b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12f4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12f4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4c4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x12f4c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4c8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x12f4c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4cc: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x12f4ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4d0: 0xc049916  jal         func_126458
    ctx->pc = 0x12F4D0u;
    SET_GPR_U32(ctx, 31, 0x12F4D8u);
    ctx->pc = 0x12F4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F4D0u;
            // 0x12f4d4: 0x27aa0004  addiu       $t2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126458u;
    if (runtime->hasFunction(0x126458u)) {
        auto targetFn = runtime->lookupFunction(0x126458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F4D8u; }
        if (ctx->pc != 0x12F4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126458_0x126458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F4D8u; }
        if (ctx->pc != 0x12F4D8u) { return; }
    }
    ctx->pc = 0x12F4D8u;
label_12f4d8:
    // 0x12f4d8: 0x240f0067  addiu       $t7, $zero, 0x67
    ctx->pc = 0x12f4d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x12f4dc: 0x122f0004  beq         $s1, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F4DCu;
    {
        const bool branch_taken_0x12f4dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 15));
        ctx->pc = 0x12F4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F4DCu;
            // 0x12f4e0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f4dc) {
            ctx->pc = 0x12F4F0u;
            goto label_12f4f0;
        }
    }
    ctx->pc = 0x12F4E4u;
    // 0x12f4e4: 0x240f0047  addiu       $t7, $zero, 0x47
    ctx->pc = 0x12f4e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x12f4e8: 0x162f0004  bne         $s1, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F4E8u;
    {
        const bool branch_taken_0x12f4e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 15));
        ctx->pc = 0x12F4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F4E8u;
            // 0x12f4ec: 0x240f0066  addiu       $t7, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f4e8) {
            ctx->pc = 0x12F4FCu;
            goto label_12f4fc;
        }
    }
    ctx->pc = 0x12F4F0u;
label_12f4f0:
    // 0x12f4f0: 0x32ef0001  andi        $t7, $s7, 0x1
    ctx->pc = 0x12f4f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x12f4f4: 0x11e00032  beqz        $t7, . + 4 + (0x32 << 2)
    ctx->pc = 0x12F4F4u;
    {
        const bool branch_taken_0x12f4f4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F4F4u;
            // 0x12f4f8: 0x240f0066  addiu       $t7, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f4f4) {
            ctx->pc = 0x12F5C0u;
            goto label_12f5c0;
        }
    }
    ctx->pc = 0x12F4FCu;
label_12f4fc:
    // 0x12f4fc: 0x162f000e  bne         $s1, $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x12F4FCu;
    {
        const bool branch_taken_0x12f4fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 15));
        ctx->pc = 0x12F500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F4FCu;
            // 0x12f500: 0x2548021  addu        $s0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f4fc) {
            ctx->pc = 0x12F538u;
            goto label_12f538;
        }
    }
    ctx->pc = 0x12F504u;
    // 0x12f504: 0x824e0000  lb          $t6, 0x0($s2)
    ctx->pc = 0x12f504u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12f508: 0x240f0030  addiu       $t7, $zero, 0x30
    ctx->pc = 0x12f508u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12f50c: 0x55cf0009  bnel        $t6, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x12F50Cu;
    {
        const bool branch_taken_0x12f50c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x12f50c) {
            ctx->pc = 0x12F510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12F50Cu;
            // 0x12f510: 0x8eaf0000  lw          $t7, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F534u;
            goto label_12f534;
        }
    }
    ctx->pc = 0x12F514u;
    // 0x12f514: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12f514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f518: 0xc049760  jal         func_125D80
    ctx->pc = 0x12F518u;
    SET_GPR_U32(ctx, 31, 0x12F520u);
    ctx->pc = 0x12F51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F518u;
            // 0x12f51c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F520u; }
        if (ctx->pc != 0x12F520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F520u; }
        if (ctx->pc != 0x12F520u) { return; }
    }
    ctx->pc = 0x12F520u;
label_12f520:
    // 0x12f520: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F520u;
    {
        const bool branch_taken_0x12f520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F520u;
            // 0x12f524: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f520) {
            ctx->pc = 0x12F530u;
            goto label_12f530;
        }
    }
    ctx->pc = 0x12F528u;
    // 0x12f528: 0x1f47823  subu        $t7, $t7, $s4
    ctx->pc = 0x12f528u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
    // 0x12f52c: 0xaeaf0000  sw          $t7, 0x0($s5)
    ctx->pc = 0x12f52cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 15));
label_12f530:
    // 0x12f530: 0x8eaf0000  lw          $t7, 0x0($s5)
    ctx->pc = 0x12f530u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_12f534:
    // 0x12f534: 0x20f8021  addu        $s0, $s0, $t7
    ctx->pc = 0x12f534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
label_12f538:
    // 0x12f538: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12f538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f53c: 0xc049760  jal         func_125D80
    ctx->pc = 0x12F53Cu;
    SET_GPR_U32(ctx, 31, 0x12F544u);
    ctx->pc = 0x12F540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F53Cu;
            // 0x12f540: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F544u; }
        if (ctx->pc != 0x12F544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F544u; }
        if (ctx->pc != 0x12F544u) { return; }
    }
    ctx->pc = 0x12F544u;
label_12f544:
    // 0x12f544: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x12f544u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12f548: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x12f548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x12f54c: 0x202780a  movz        $t7, $s0, $v0
    ctx->pc = 0x12f54cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 16));
    // 0x12f550: 0xafaf0004  sw          $t7, 0x4($sp)
    ctx->pc = 0x12f550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 15));
    // 0x12f554: 0x8fae0004  lw          $t6, 0x4($sp)
    ctx->pc = 0x12f554u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12f558: 0x1d0782b  sltu        $t7, $t6, $s0
    ctx->pc = 0x12f558u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12f55c: 0x11e00009  beqz        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x12F55Cu;
    {
        const bool branch_taken_0x12f55c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F55Cu;
            // 0x12f560: 0x1c0682d  daddu       $t5, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f55c) {
            ctx->pc = 0x12F584u;
            goto label_12f584;
        }
    }
    ctx->pc = 0x12F564u;
    // 0x12f564: 0x240c0030  addiu       $t4, $zero, 0x30
    ctx->pc = 0x12f564u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_12f568:
    // 0x12f568: 0xa1ac0000  sb          $t4, 0x0($t5)
    ctx->pc = 0x12f568u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 12));
    // 0x12f56c: 0x25ae0001  addiu       $t6, $t5, 0x1
    ctx->pc = 0x12f56cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x12f570: 0x1d0782b  sltu        $t7, $t6, $s0
    ctx->pc = 0x12f570u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12f574: 0xafae0004  sw          $t6, 0x4($sp)
    ctx->pc = 0x12f574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 14));
    // 0x12f578: 0x0  nop
    ctx->pc = 0x12f578u;
    // NOP
    // 0x12f57c: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12F57Cu;
    {
        const bool branch_taken_0x12f57c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F57Cu;
            // 0x12f580: 0x1c0682d  daddu       $t5, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f57c) {
            ctx->pc = 0x12F568u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f568;
        }
    }
    ctx->pc = 0x12F584u;
label_12f584:
    // 0x12f584: 0x1d27823  subu        $t7, $t6, $s2
    ctx->pc = 0x12f584u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 18)));
    // 0x12f588: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12f588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f58c: 0xafcf0000  sw          $t7, 0x0($fp)
    ctx->pc = 0x12f58cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 15));
    // 0x12f590: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x12f590u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f594: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12f594u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12f598: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12f598u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f59c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x12f59cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f5a0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x12f5a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f5a4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x12f5a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12f5a8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x12f5a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12f5ac: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x12f5acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f5b0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x12f5b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12f5b4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x12f5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12f5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x12F5B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F5B8u;
            // 0x12f5bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F5C0u;
label_12f5c0:
    // 0x12f5c0: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x12F5C0u;
    {
        const bool branch_taken_0x12f5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F5C0u;
            // 0x12f5c4: 0x8fae0004  lw          $t6, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5c0) {
            ctx->pc = 0x12F584u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f584;
        }
    }
    ctx->pc = 0x12F5C8u;
}
