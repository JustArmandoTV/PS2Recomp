#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017F920
// Address: 0x17f920 - 0x17fb18
void sub_0017F920_0x17f920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F920_0x17f920");
#endif

    switch (ctx->pc) {
        case 0x17f980u: goto label_17f980;
        case 0x17f9acu: goto label_17f9ac;
        case 0x17f9c0u: goto label_17f9c0;
        case 0x17f9c8u: goto label_17f9c8;
        case 0x17f9d4u: goto label_17f9d4;
        case 0x17f9e8u: goto label_17f9e8;
        case 0x17f9f8u: goto label_17f9f8;
        case 0x17fa14u: goto label_17fa14;
        case 0x17fa1cu: goto label_17fa1c;
        case 0x17fa50u: goto label_17fa50;
        case 0x17fa98u: goto label_17fa98;
        case 0x17fac0u: goto label_17fac0;
        default: break;
    }

    ctx->pc = 0x17f920u;

    // 0x17f920: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x17f920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x17f924: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17f924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17f928: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x17f928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x17f92c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x17f92cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f930: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x17f930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x17f934: 0x24436b00  addiu       $v1, $v0, 0x6B00
    ctx->pc = 0x17f934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27392));
    // 0x17f938: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x17f938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x17f93c: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x17f93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x17f940: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x17f940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x17f944: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x17f944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x17f948: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x17f948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x17f94c: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x17f94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x17f950: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x17f950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x17f954: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x17f954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x17f958: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x17f958u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17f95c: 0x12600030  beqz        $s3, . + 4 + (0x30 << 2)
    ctx->pc = 0x17F95Cu;
    {
        const bool branch_taken_0x17f95c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F95Cu;
            // 0x17f960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f95c) {
            ctx->pc = 0x17FA20u;
            goto label_17fa20;
        }
    }
    ctx->pc = 0x17F964u;
    // 0x17f964: 0x8c740004  lw          $s4, 0x4($v1)
    ctx->pc = 0x17f964u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17f968: 0x12800026  beqz        $s4, . + 4 + (0x26 << 2)
    ctx->pc = 0x17F968u;
    {
        const bool branch_taken_0x17f968 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F968u;
            // 0x17f96c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f968) {
            ctx->pc = 0x17FA04u;
            goto label_17fa04;
        }
    }
    ctx->pc = 0x17F970u;
    // 0x17f970: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x17f970u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f974: 0x3c1e0063  lui         $fp, 0x63
    ctx->pc = 0x17f974u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)99 << 16));
    // 0x17f978: 0x3c170063  lui         $s7, 0x63
    ctx->pc = 0x17f978u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)99 << 16));
    // 0x17f97c: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x17f97cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17f980:
    // 0x17f980: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x17f980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x17f984: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17f984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f988: 0x8eb00008  lw          $s0, 0x8($s5)
    ctx->pc = 0x17f988u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17f98c: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x17f98cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17f990: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x17f990u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x17f994: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x17f994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x17f998: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17f998u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17f99c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x17f99cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17f9a0: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x17f9a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x17f9a4: 0xc05fc92  jal         func_17F248
    ctx->pc = 0x17F9A4u;
    SET_GPR_U32(ctx, 31, 0x17F9ACu);
    ctx->pc = 0x17F9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F9A4u;
            // 0x17f9a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F248u;
    if (runtime->hasFunction(0x17F248u)) {
        auto targetFn = runtime->lookupFunction(0x17F248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F9ACu; }
        if (ctx->pc != 0x17F9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F248_0x17f248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F9ACu; }
        if (ctx->pc != 0x17F9ACu) { return; }
    }
    ctx->pc = 0x17F9ACu;
label_17f9ac:
    // 0x17f9ac: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x17f9acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f9b0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17F9B0u;
    {
        const bool branch_taken_0x17f9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F9B0u;
            // 0x17f9b4: 0x24046900  addiu       $a0, $zero, 0x6900 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f9b0) {
            ctx->pc = 0x17F9F8u;
            goto label_17f9f8;
        }
    }
    ctx->pc = 0x17F9B8u;
    // 0x17f9b8: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17F9B8u;
    SET_GPR_U32(ctx, 31, 0x17F9C0u);
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F9C0u; }
        if (ctx->pc != 0x17F9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F9C0u; }
        if (ctx->pc != 0x17F9C0u) { return; }
    }
    ctx->pc = 0x17F9C0u;
label_17f9c0:
    // 0x17f9c0: 0xc05ee18  jal         func_17B860
    ctx->pc = 0x17F9C0u;
    SET_GPR_U32(ctx, 31, 0x17F9C8u);
    ctx->pc = 0x17F9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F9C0u;
            // 0x17f9c4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B860u;
    if (runtime->hasFunction(0x17B860u)) {
        auto targetFn = runtime->lookupFunction(0x17B860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F9C8u; }
        if (ctx->pc != 0x17F9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B860_0x17b860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F9C8u; }
        if (ctx->pc != 0x17F9C8u) { return; }
    }
    ctx->pc = 0x17F9C8u;
label_17f9c8:
    // 0x17f9c8: 0x24046901  addiu       $a0, $zero, 0x6901
    ctx->pc = 0x17f9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26881));
    // 0x17f9cc: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17F9CCu;
    SET_GPR_U32(ctx, 31, 0x17F9D4u);
    ctx->pc = 0x17F9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F9CCu;
            // 0x17f9d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F9D4u; }
        if (ctx->pc != 0x17F9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F9D4u; }
        if (ctx->pc != 0x17F9D4u) { return; }
    }
    ctx->pc = 0x17F9D4u;
label_17f9d4:
    // 0x17f9d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17f9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f9d8: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17F9D8u;
    {
        const bool branch_taken_0x17f9d8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x17F9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F9D8u;
            // 0x17f9dc: 0x26e46600  addiu       $a0, $s7, 0x6600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 26112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f9d8) {
            ctx->pc = 0x17F9F0u;
            goto label_17f9f0;
        }
    }
    ctx->pc = 0x17F9E0u;
    // 0x17f9e0: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x17F9E0u;
    SET_GPR_U32(ctx, 31, 0x17F9E8u);
    ctx->pc = 0x17F9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F9E0u;
            // 0x17f9e4: 0x27c465d8  addiu       $a0, $fp, 0x65D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 26072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F9E8u; }
        if (ctx->pc != 0x17F9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F9E8u; }
        if (ctx->pc != 0x17F9E8u) { return; }
    }
    ctx->pc = 0x17F9E8u;
label_17f9e8:
    // 0x17f9e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17F9E8u;
    {
        const bool branch_taken_0x17f9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F9E8u;
            // 0x17f9ec: 0x234102b  sltu        $v0, $s1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f9e8) {
            ctx->pc = 0x17F9FCu;
            goto label_17f9fc;
        }
    }
    ctx->pc = 0x17F9F0u;
label_17f9f0:
    // 0x17f9f0: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x17F9F0u;
    SET_GPR_U32(ctx, 31, 0x17F9F8u);
    ctx->pc = 0x17F9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F9F0u;
            // 0x17f9f4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F9F8u; }
        if (ctx->pc != 0x17F9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F9F8u; }
        if (ctx->pc != 0x17F9F8u) { return; }
    }
    ctx->pc = 0x17F9F8u;
label_17f9f8:
    // 0x17f9f8: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x17f9f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_17f9fc:
    // 0x17f9fc: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x17F9FCu;
    {
        const bool branch_taken_0x17f9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F9FCu;
            // 0x17fa00: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f9fc) {
            ctx->pc = 0x17F980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17f980;
        }
    }
    ctx->pc = 0x17FA04u;
label_17fa04:
    // 0x17fa04: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17fa04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17fa08: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x17fa08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa0c: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x17FA0Cu;
    SET_GPR_U32(ctx, 31, 0x17FA14u);
    ctx->pc = 0x17FA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FA0Cu;
            // 0x17fa10: 0x24846620  addiu       $a0, $a0, 0x6620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FA14u; }
        if (ctx->pc != 0x17FA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FA14u; }
        if (ctx->pc != 0x17FA14u) { return; }
    }
    ctx->pc = 0x17FA14u;
label_17fa14:
    // 0x17fa14: 0xc05fec6  jal         func_17FB18
    ctx->pc = 0x17FA14u;
    SET_GPR_U32(ctx, 31, 0x17FA1Cu);
    ctx->pc = 0x17FB18u;
    if (runtime->hasFunction(0x17FB18u)) {
        auto targetFn = runtime->lookupFunction(0x17FB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FA1Cu; }
        if (ctx->pc != 0x17FA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FB18_0x17fb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FA1Cu; }
        if (ctx->pc != 0x17FA1Cu) { return; }
    }
    ctx->pc = 0x17FA1Cu;
label_17fa1c:
    // 0x17fa1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17fa20:
    // 0x17fa20: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x17fa20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x17fa24: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x17fa24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x17fa28: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x17fa28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x17fa2c: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x17fa2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x17fa30: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x17fa30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17fa34: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x17fa34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x17fa38: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x17fa38u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x17fa3c: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x17fa3cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x17fa40: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x17fa40u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x17fa44: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x17fa44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x17fa48: 0x3e00008  jr          $ra
    ctx->pc = 0x17FA48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FA48u;
            // 0x17fa4c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17FA50u;
label_17fa50:
    // 0x17fa50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17fa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17fa54: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17fa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17fa58: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x17fa58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17fa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17fa60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17fa60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17fa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17fa68: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17fa68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa6c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17fa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17fa70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17fa70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa74: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x17fa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x17fa78: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x17fa78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17fa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17fa80: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17fa80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17fa84: 0x1a800018  blez        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x17FA84u;
    {
        const bool branch_taken_0x17fa84 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x17FA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FA84u;
            // 0x17fa88: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fa84) {
            ctx->pc = 0x17FAE8u;
            goto label_17fae8;
        }
    }
    ctx->pc = 0x17FA8Cu;
    // 0x17fa8c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17fa90: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x17fa90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa94: 0x24556b00  addiu       $s5, $v0, 0x6B00
    ctx->pc = 0x17fa94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 27392));
label_17fa98:
    // 0x17fa98: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x17fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x17fa9c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x17fa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17faa0: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x17faa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17faa4: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x17faa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17faa8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x17faa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17faac: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x17faacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17fab0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17fab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17fab4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x17fab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17fab8: 0xc05fcf4  jal         func_17F3D0
    ctx->pc = 0x17FAB8u;
    SET_GPR_U32(ctx, 31, 0x17FAC0u);
    ctx->pc = 0x17FABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FAB8u;
            // 0x17fabc: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F3D0u;
    if (runtime->hasFunction(0x17F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x17F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FAC0u; }
        if (ctx->pc != 0x17FAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F3D0_0x17f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FAC0u; }
        if (ctx->pc != 0x17FAC0u) { return; }
    }
    ctx->pc = 0x17FAC0u;
label_17fac0:
    // 0x17fac0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17FAC0u;
    {
        const bool branch_taken_0x17fac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FAC0u;
            // 0x17fac4: 0x214182a  slt         $v1, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fac0) {
            ctx->pc = 0x17FAE0u;
            goto label_17fae0;
        }
    }
    ctx->pc = 0x17FAC8u;
    // 0x17fac8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17facc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x17faccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x17fad0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x17fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17fad4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17FAD4u;
    {
        const bool branch_taken_0x17fad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FAD4u;
            // 0x17fad8: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fad4) {
            ctx->pc = 0x17FAF0u;
            goto label_17faf0;
        }
    }
    ctx->pc = 0x17FADCu;
    // 0x17fadc: 0x0  nop
    ctx->pc = 0x17fadcu;
    // NOP
label_17fae0:
    // 0x17fae0: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x17FAE0u;
    {
        const bool branch_taken_0x17fae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FAE0u;
            // 0x17fae4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fae0) {
            ctx->pc = 0x17FA98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17fa98;
        }
    }
    ctx->pc = 0x17FAE8u;
label_17fae8:
    // 0x17fae8: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x17fae8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x17faec: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x17faecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_17faf0:
    // 0x17faf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17faf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17faf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17faf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17faf8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17faf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fafc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17fafcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17fb00: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17fb00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fb04: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17fb04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17fb08: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17fb08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fb0c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x17fb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17fb10: 0x3e00008  jr          $ra
    ctx->pc = 0x17FB10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FB10u;
            // 0x17fb14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17FB18u;
}
