#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D2910
// Address: 0x1d2910 - 0x1d2a90
void sub_001D2910_0x1d2910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2910_0x1d2910");
#endif

    switch (ctx->pc) {
        case 0x1d293cu: goto label_1d293c;
        case 0x1d2974u: goto label_1d2974;
        case 0x1d29ecu: goto label_1d29ec;
        case 0x1d2a04u: goto label_1d2a04;
        case 0x1d2a20u: goto label_1d2a20;
        case 0x1d2a28u: goto label_1d2a28;
        case 0x1d2a34u: goto label_1d2a34;
        default: break;
    }

    ctx->pc = 0x1d2910u;

    // 0x1d2910: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d2910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d2914: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d2914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d2918: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d2918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d291c: 0x27a30048  addiu       $v1, $sp, 0x48
    ctx->pc = 0x1d291cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1d2920: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d2920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d2924: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d2924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d2928: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d2928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d292c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d292cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d2930: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d2930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2934: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2934u;
    {
        const bool branch_taken_0x1d2934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2934u;
            // 0x1d2938: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2934) {
            ctx->pc = 0x1D2958u;
            goto label_1d2958;
        }
    }
    ctx->pc = 0x1D293Cu;
label_1d293c:
    // 0x1d293c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1d293cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d2940: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d2940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d2944: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2948: 0x0  nop
    ctx->pc = 0x1d2948u;
    // NOP
    // 0x1d294c: 0x0  nop
    ctx->pc = 0x1d294cu;
    // NOP
    // 0x1d2950: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D2950u;
    {
        const bool branch_taken_0x1d2950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2950) {
            ctx->pc = 0x1D293Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d293c;
        }
    }
    ctx->pc = 0x1D2958u;
label_1d2958:
    // 0x1d2958: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d2958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d295c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1d295cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1d2960: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x1D2960u;
    {
        const bool branch_taken_0x1d2960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2960) {
            ctx->pc = 0x1D2964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2960u;
            // 0x1d2964: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D2A3Cu;
            goto label_1d2a3c;
        }
    }
    ctx->pc = 0x1D2968u;
    // 0x1d2968: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d2968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d296c: 0xc056420  jal         func_159080
    ctx->pc = 0x1D296Cu;
    SET_GPR_U32(ctx, 31, 0x1D2974u);
    ctx->pc = 0x1D2970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D296Cu;
            // 0x1d2970: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159080u;
    if (runtime->hasFunction(0x159080u)) {
        auto targetFn = runtime->lookupFunction(0x159080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2974u; }
        if (ctx->pc != 0x1D2974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159080_0x159080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2974u; }
        if (ctx->pc != 0x1D2974u) { return; }
    }
    ctx->pc = 0x1D2974u;
label_1d2974:
    // 0x1d2974: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d2974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2978: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1d2978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1d297c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D297Cu;
    {
        const bool branch_taken_0x1d297c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d297c) {
            ctx->pc = 0x1D2980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D297Cu;
            // 0x1d2980: 0x96220008  lhu         $v0, 0x8($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D2990u;
            goto label_1d2990;
        }
    }
    ctx->pc = 0x1D2984u;
    // 0x1d2984: 0xa6400048  sh          $zero, 0x48($s2)
    ctx->pc = 0x1d2984u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 72), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d2988: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2988u;
    {
        const bool branch_taken_0x1d2988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D298Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2988u;
            // 0x1d298c: 0xa640004a  sh          $zero, 0x4A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 74), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2988) {
            ctx->pc = 0x1D299Cu;
            goto label_1d299c;
        }
    }
    ctx->pc = 0x1D2990u;
label_1d2990:
    // 0x1d2990: 0xa6420048  sh          $v0, 0x48($s2)
    ctx->pc = 0x1d2990u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 72), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d2994: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x1d2994u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1d2998: 0xa642004a  sh          $v0, 0x4A($s2)
    ctx->pc = 0x1d2998u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 74), (uint16_t)GPR_U32(ctx, 2));
label_1d299c:
    // 0x1d299c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d299cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d29a0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1d29a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1d29a4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D29A4u;
    {
        const bool branch_taken_0x1d29a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d29a4) {
            ctx->pc = 0x1D29A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D29A4u;
            // 0x1d29a8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D29B8u;
            goto label_1d29b8;
        }
    }
    ctx->pc = 0x1D29ACu;
    // 0x1d29ac: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1d29acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d29b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D29B0u;
    {
        const bool branch_taken_0x1d29b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D29B0u;
            // 0x1d29b4: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29b0) {
            ctx->pc = 0x1D29BCu;
            goto label_1d29bc;
        }
    }
    ctx->pc = 0x1D29B8u;
label_1d29b8:
    // 0x1d29b8: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x1d29b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_1d29bc:
    // 0x1d29bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d29bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d29c0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1d29c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x1d29c4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D29C4u;
    {
        const bool branch_taken_0x1d29c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d29c4) {
            ctx->pc = 0x1D29C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D29C4u;
            // 0x1d29c8: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D29D8u;
            goto label_1d29d8;
        }
    }
    ctx->pc = 0x1D29CCu;
    // 0x1d29cc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1d29ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d29d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D29D0u;
    {
        const bool branch_taken_0x1d29d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D29D0u;
            // 0x1d29d4: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29d0) {
            ctx->pc = 0x1D29DCu;
            goto label_1d29dc;
        }
    }
    ctx->pc = 0x1D29D8u;
label_1d29d8:
    // 0x1d29d8: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x1d29d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
label_1d29dc:
    // 0x1d29dc: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x1d29dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1d29e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d29e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29e4: 0xc056964  jal         func_15A590
    ctx->pc = 0x1D29E4u;
    SET_GPR_U32(ctx, 31, 0x1D29ECu);
    ctx->pc = 0x1D29E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D29E4u;
            // 0x1d29e8: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A590u;
    if (runtime->hasFunction(0x15A590u)) {
        auto targetFn = runtime->lookupFunction(0x15A590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D29ECu; }
        if (ctx->pc != 0x1D29ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A590_0x15a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D29ECu; }
        if (ctx->pc != 0x1D29ECu) { return; }
    }
    ctx->pc = 0x1D29ECu;
label_1d29ec:
    // 0x1d29ec: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D29ECu;
    {
        const bool branch_taken_0x1d29ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d29ec) {
            ctx->pc = 0x1D29F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D29ECu;
            // 0x1d29f0: 0x9648004a  lhu         $t0, 0x4A($s2) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 74)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D2A08u;
            goto label_1d2a08;
        }
    }
    ctx->pc = 0x1D29F4u;
    // 0x1d29f4: 0x8e460044  lw          $a2, 0x44($s2)
    ctx->pc = 0x1d29f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x1d29f8: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1d29f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1d29fc: 0xc056978  jal         func_15A5E0
    ctx->pc = 0x1D29FCu;
    SET_GPR_U32(ctx, 31, 0x1D2A04u);
    ctx->pc = 0x1D2A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D29FCu;
            // 0x1d2a00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A5E0u;
    if (runtime->hasFunction(0x15A5E0u)) {
        auto targetFn = runtime->lookupFunction(0x15A5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2A04u; }
        if (ctx->pc != 0x1D2A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A5E0_0x15a5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2A04u; }
        if (ctx->pc != 0x1D2A04u) { return; }
    }
    ctx->pc = 0x1D2A04u;
label_1d2a04:
    // 0x1d2a04: 0x9648004a  lhu         $t0, 0x4A($s2)
    ctx->pc = 0x1d2a04u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 74)));
label_1d2a08:
    // 0x1d2a08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d2a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a0c: 0x96490048  lhu         $t1, 0x48($s2)
    ctx->pc = 0x1d2a0cu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x1d2a10: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1d2a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d2a14: 0x8fa7004c  lw          $a3, 0x4C($sp)
    ctx->pc = 0x1d2a14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1d2a18: 0xc0564a4  jal         func_159290
    ctx->pc = 0x1D2A18u;
    SET_GPR_U32(ctx, 31, 0x1D2A20u);
    ctx->pc = 0x1D2A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2A18u;
            // 0x1d2a1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159290u;
    if (runtime->hasFunction(0x159290u)) {
        auto targetFn = runtime->lookupFunction(0x159290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2A20u; }
        if (ctx->pc != 0x1D2A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159290_0x159290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2A20u; }
        if (ctx->pc != 0x1D2A20u) { return; }
    }
    ctx->pc = 0x1D2A20u;
label_1d2a20:
    // 0x1d2a20: 0xc05646c  jal         func_1591B0
    ctx->pc = 0x1D2A20u;
    SET_GPR_U32(ctx, 31, 0x1D2A28u);
    ctx->pc = 0x1D2A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2A20u;
            // 0x1d2a24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1591B0u;
    if (runtime->hasFunction(0x1591B0u)) {
        auto targetFn = runtime->lookupFunction(0x1591B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2A28u; }
        if (ctx->pc != 0x1D2A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001591B0_0x1591b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2A28u; }
        if (ctx->pc != 0x1D2A28u) { return; }
    }
    ctx->pc = 0x1D2A28u;
label_1d2a28:
    // 0x1d2a28: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x1d2a28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    // 0x1d2a2c: 0xc04e814  jal         func_13A050
    ctx->pc = 0x1D2A2Cu;
    SET_GPR_U32(ctx, 31, 0x1D2A34u);
    ctx->pc = 0x1D2A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2A2Cu;
            // 0x1d2a30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A050u;
    if (runtime->hasFunction(0x13A050u)) {
        auto targetFn = runtime->lookupFunction(0x13A050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2A34u; }
        if (ctx->pc != 0x1D2A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A050_0x13a050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2A34u; }
        if (ctx->pc != 0x1D2A34u) { return; }
    }
    ctx->pc = 0x1D2A34u;
label_1d2a34:
    // 0x1d2a34: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D2A34u;
    {
        const bool branch_taken_0x1d2a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2A34u;
            // 0x1d2a38: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a34) {
            ctx->pc = 0x1D2A74u;
            goto label_1d2a74;
        }
    }
    ctx->pc = 0x1D2A3Cu;
label_1d2a3c:
    // 0x1d2a3c: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x1d2a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    // 0x1d2a40: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1d2a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d2a44: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x1d2a44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x1d2a48: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d2a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2a4c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1d2a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1d2a50: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2A50u;
    {
        const bool branch_taken_0x1d2a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2a50) {
            ctx->pc = 0x1D2A54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2A50u;
            // 0x1d2a54: 0x96220008  lhu         $v0, 0x8($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D2A64u;
            goto label_1d2a64;
        }
    }
    ctx->pc = 0x1D2A58u;
    // 0x1d2a58: 0xa6400048  sh          $zero, 0x48($s2)
    ctx->pc = 0x1d2a58u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 72), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d2a5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2A5Cu;
    {
        const bool branch_taken_0x1d2a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2A5Cu;
            // 0x1d2a60: 0xa640004a  sh          $zero, 0x4A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 74), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a5c) {
            ctx->pc = 0x1D2A70u;
            goto label_1d2a70;
        }
    }
    ctx->pc = 0x1D2A64u;
label_1d2a64:
    // 0x1d2a64: 0xa6420048  sh          $v0, 0x48($s2)
    ctx->pc = 0x1d2a64u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 72), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d2a68: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x1d2a68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1d2a6c: 0xa642004a  sh          $v0, 0x4A($s2)
    ctx->pc = 0x1d2a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 74), (uint16_t)GPR_U32(ctx, 2));
label_1d2a70:
    // 0x1d2a70: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x1d2a70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
label_1d2a74:
    // 0x1d2a74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d2a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d2a78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d2a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2a7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d2a7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2a80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d2a80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2a84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d2a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2a88: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2A88u;
            // 0x1d2a8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D2A90u;
}
