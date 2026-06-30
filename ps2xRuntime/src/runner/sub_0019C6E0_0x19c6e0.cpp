#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019C6E0
// Address: 0x19c6e0 - 0x19c958
void sub_0019C6E0_0x19c6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C6E0_0x19c6e0");
#endif

    switch (ctx->pc) {
        case 0x19c700u: goto label_19c700;
        case 0x19c724u: goto label_19c724;
        case 0x19c750u: goto label_19c750;
        case 0x19c77cu: goto label_19c77c;
        case 0x19c7b8u: goto label_19c7b8;
        case 0x19c7f8u: goto label_19c7f8;
        case 0x19c804u: goto label_19c804;
        case 0x19c844u: goto label_19c844;
        case 0x19c8a0u: goto label_19c8a0;
        case 0x19c8acu: goto label_19c8ac;
        case 0x19c8f0u: goto label_19c8f0;
        case 0x19c938u: goto label_19c938;
        case 0x19c940u: goto label_19c940;
        default: break;
    }

    ctx->pc = 0x19c6e0u;

    // 0x19c6e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c6e4: 0x3c077fff  lui         $a3, 0x7FFF
    ctx->pc = 0x19c6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32767 << 16));
    // 0x19c6e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c6ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c6ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c6f0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x19c6f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x19c6f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c6f8: 0x80671c0  j           func_19C700
    ctx->pc = 0x19C6F8u;
    ctx->pc = 0x19C6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C6F8u;
            // 0x19c6fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C700u;
    goto label_19c700;
    ctx->pc = 0x19C700u;
label_19c700:
    // 0x19c700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19c704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19c708: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c70c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19c70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19c710: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19c710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c714: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19c714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19c718: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19c718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19c71c: 0xc06719a  jal         func_19C668
    ctx->pc = 0x19C71Cu;
    SET_GPR_U32(ctx, 31, 0x19C724u);
    ctx->pc = 0x19C720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C71Cu;
            // 0x19c720: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C668u;
    if (runtime->hasFunction(0x19C668u)) {
        auto targetFn = runtime->lookupFunction(0x19C668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C724u; }
        if (ctx->pc != 0x19C724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C668_0x19c668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C724u; }
        if (ctx->pc != 0x19C724u) { return; }
    }
    ctx->pc = 0x19C724u;
label_19c724:
    // 0x19c724: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c728: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19c728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19c72c: 0xae110428  sw          $s1, 0x428($s0)
    ctx->pc = 0x19c72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1064), GPR_U32(ctx, 17));
    // 0x19c730: 0xae12042c  sw          $s2, 0x42C($s0)
    ctx->pc = 0x19c730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1068), GPR_U32(ctx, 18));
    // 0x19c734: 0xae020420  sw          $v0, 0x420($s0)
    ctx->pc = 0x19c734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 2));
    // 0x19c738: 0xae000424  sw          $zero, 0x424($s0)
    ctx->pc = 0x19c738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1060), GPR_U32(ctx, 0));
    // 0x19c73c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19c73cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19c740: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c744: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19c744u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c748: 0x3e00008  jr          $ra
    ctx->pc = 0x19C748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C748u;
            // 0x19c74c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C750u;
label_19c750:
    // 0x19c750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c754: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19c754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19c758: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c75c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19c75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19c760: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19c760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c764: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x19c764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c768: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x19c768u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c76c: 0x8e060418  lw          $a2, 0x418($s0)
    ctx->pc = 0x19c76cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x19c770: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x19c770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x19c774: 0xc05ac40  jal         func_16B100
    ctx->pc = 0x19C774u;
    SET_GPR_U32(ctx, 31, 0x19C77Cu);
    ctx->pc = 0x19C778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C774u;
            // 0x19c778: 0x27a90008  addiu       $t1, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B100u;
    if (runtime->hasFunction(0x16B100u)) {
        auto targetFn = runtime->lookupFunction(0x16B100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C77Cu; }
        if (ctx->pc != 0x19C77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B100_0x16b100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C77Cu; }
        if (ctx->pc != 0x19C77Cu) { return; }
    }
    ctx->pc = 0x19C77Cu;
label_19c77c:
    // 0x19c77c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19c77cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19c780: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19C780u;
    {
        const bool branch_taken_0x19c780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C780u;
            // 0x19c784: 0x24849628  addiu       $a0, $a0, -0x69D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c780) {
            ctx->pc = 0x19C7B0u;
            goto label_19c7b0;
        }
    }
    ctx->pc = 0x19C788u;
    // 0x19c788: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19c788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c78c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c790: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x19c790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19c794: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x19c794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19c798: 0xae020420  sw          $v0, 0x420($s0)
    ctx->pc = 0x19c798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 2));
    // 0x19c79c: 0xae030424  sw          $v1, 0x424($s0)
    ctx->pc = 0x19c79cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1060), GPR_U32(ctx, 3));
    // 0x19c7a0: 0xae040428  sw          $a0, 0x428($s0)
    ctx->pc = 0x19c7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1064), GPR_U32(ctx, 4));
    // 0x19c7a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19C7A4u;
    {
        const bool branch_taken_0x19c7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C7A4u;
            // 0x19c7a8: 0xae05042c  sw          $a1, 0x42C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1068), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c7a4) {
            ctx->pc = 0x19C7B8u;
            goto label_19c7b8;
        }
    }
    ctx->pc = 0x19C7ACu;
    // 0x19c7ac: 0x0  nop
    ctx->pc = 0x19c7acu;
    // NOP
label_19c7b0:
    // 0x19c7b0: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19C7B0u;
    SET_GPR_U32(ctx, 31, 0x19C7B8u);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C7B8u; }
        if (ctx->pc != 0x19C7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C7B8u; }
        if (ctx->pc != 0x19C7B8u) { return; }
    }
    ctx->pc = 0x19C7B8u;
label_19c7b8:
    // 0x19c7b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19c7b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c7bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19c7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19c7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x19C7C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C7C0u;
            // 0x19c7c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C7C8u;
    // 0x19c7c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19c7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19c7cc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19c7ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c7d0: 0x24c707ff  addiu       $a3, $a2, 0x7FF
    ctx->pc = 0x19c7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 2047));
    // 0x19c7d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x19c7d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c7d8: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x19c7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x19c7dc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x19c7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x19c7e0: 0x73ac2  srl         $a3, $a3, 11
    ctx->pc = 0x19c7e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 11));
    // 0x19c7e4: 0x24a59650  addiu       $a1, $a1, -0x69B0
    ctx->pc = 0x19c7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940240));
    // 0x19c7e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c7e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c7ec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x19c7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x19c7f0: 0xc04ae62  jal         func_12B988
    ctx->pc = 0x19C7F0u;
    SET_GPR_U32(ctx, 31, 0x19C7F8u);
    ctx->pc = 0x19C7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C7F0u;
            // 0x19c7f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B988u;
    if (runtime->hasFunction(0x12B988u)) {
        auto targetFn = runtime->lookupFunction(0x12B988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C7F8u; }
        if (ctx->pc != 0x19C7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B988_0x12b988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C7F8u; }
        if (ctx->pc != 0x19C7F8u) { return; }
    }
    ctx->pc = 0x19C7F8u;
label_19c7f8:
    // 0x19c7f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19c7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c7fc: 0xc066fc6  jal         func_19BF18
    ctx->pc = 0x19C7FCu;
    SET_GPR_U32(ctx, 31, 0x19C804u);
    ctx->pc = 0x19C800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C7FCu;
            // 0x19c800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BF18u;
    if (runtime->hasFunction(0x19BF18u)) {
        auto targetFn = runtime->lookupFunction(0x19BF18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C804u; }
        if (ctx->pc != 0x19C804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BF18_0x19bf18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C804u; }
        if (ctx->pc != 0x19C804u) { return; }
    }
    ctx->pc = 0x19C804u;
label_19c804:
    // 0x19c804: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x19c804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c808: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x19c808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19c80c: 0x3e00008  jr          $ra
    ctx->pc = 0x19C80Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C80Cu;
            // 0x19c810: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C814u;
    // 0x19c814: 0x0  nop
    ctx->pc = 0x19c814u;
    // NOP
    // 0x19c818: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19c818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19c81c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19c81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19c820: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c824: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19c824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19c828: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19c828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c82c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19c82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19c830: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x19c830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c834: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x19c834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x19c838: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19c838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19c83c: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19C83Cu;
    SET_GPR_U32(ctx, 31, 0x19C844u);
    ctx->pc = 0x19C840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C83Cu;
            // 0x19c840: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C844u; }
        if (ctx->pc != 0x19C844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C844u; }
        if (ctx->pc != 0x19C844u) { return; }
    }
    ctx->pc = 0x19C844u;
label_19c844:
    // 0x19c844: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19c844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19c848: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19c848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c84c: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19C84Cu;
    {
        const bool branch_taken_0x19c84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19C850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C84Cu;
            // 0x19c850: 0x24849660  addiu       $a0, $a0, -0x69A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c84c) {
            ctx->pc = 0x19C870u;
            goto label_19c870;
        }
    }
    ctx->pc = 0x19C854u;
    // 0x19c854: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c858: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19c858u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19c85c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19c85cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c860: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19c860u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19c864: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19c864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c868: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19C868u;
    ctx->pc = 0x19C86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C868u;
            // 0x19c86c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19C870u;
label_19c870:
    // 0x19c870: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19C870u;
    {
        const bool branch_taken_0x19c870 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C870u;
            // 0x19c874: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c870) {
            ctx->pc = 0x19C898u;
            goto label_19c898;
        }
    }
    ctx->pc = 0x19C878u;
    // 0x19c878: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19c878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19c87c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c87cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c880: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19c880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19c884: 0x24849698  addiu       $a0, $a0, -0x6968
    ctx->pc = 0x19c884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940312));
    // 0x19c888: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19c888u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c88c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19c88cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19c890: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19C890u;
    ctx->pc = 0x19C894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C890u;
            // 0x19c894: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19C898u;
label_19c898:
    // 0x19c898: 0xc06785e  jal         func_19E178
    ctx->pc = 0x19C898u;
    SET_GPR_U32(ctx, 31, 0x19C8A0u);
    ctx->pc = 0x19C89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C898u;
            // 0x19c89c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E178u;
    if (runtime->hasFunction(0x19E178u)) {
        auto targetFn = runtime->lookupFunction(0x19E178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C8A0u; }
        if (ctx->pc != 0x19C8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E178_0x19e178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C8A0u; }
        if (ctx->pc != 0x19C8A0u) { return; }
    }
    ctx->pc = 0x19C8A0u;
label_19c8a0:
    // 0x19c8a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c8a4: 0xc067054  jal         func_19C150
    ctx->pc = 0x19C8A4u;
    SET_GPR_U32(ctx, 31, 0x19C8ACu);
    ctx->pc = 0x19C8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C8A4u;
            // 0x19c8a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C150u;
    if (runtime->hasFunction(0x19C150u)) {
        auto targetFn = runtime->lookupFunction(0x19C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C8ACu; }
        if (ctx->pc != 0x19C8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C150_0x19c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C8ACu; }
        if (ctx->pc != 0x19C8ACu) { return; }
    }
    ctx->pc = 0x19C8ACu;
label_19c8ac:
    // 0x19c8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c8b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19c8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c8b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19c8b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19c8b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19c8b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c8bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19c8bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c8c0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x19c8c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c8c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19c8c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19c8c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c8c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c8cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19c8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c8d0: 0x80671c0  j           func_19C700
    ctx->pc = 0x19C8D0u;
    ctx->pc = 0x19C8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C8D0u;
            // 0x19c8d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C700u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_19c700;
    ctx->pc = 0x19C8D8u;
    // 0x19c8d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c8dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19c8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19c8e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19c8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19c8e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19c8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19c8e8: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19C8E8u;
    SET_GPR_U32(ctx, 31, 0x19C8F0u);
    ctx->pc = 0x19C8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C8E8u;
            // 0x19c8ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C8F0u; }
        if (ctx->pc != 0x19C8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C8F0u; }
        if (ctx->pc != 0x19C8F0u) { return; }
    }
    ctx->pc = 0x19C8F0u;
label_19c8f0:
    // 0x19c8f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19c8f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c8f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c8f8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19c8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19c8fc: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C8FCu;
    {
        const bool branch_taken_0x19c8fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x19C900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C8FCu;
            // 0x19c900: 0x248496c8  addiu       $a0, $a0, -0x6938 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8fc) {
            ctx->pc = 0x19C918u;
            goto label_19c918;
        }
    }
    ctx->pc = 0x19C904u;
    // 0x19c904: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c908: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19c908u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19c90c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19c90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c910: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19C910u;
    ctx->pc = 0x19C914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C910u;
            // 0x19c914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19C918u;
label_19c918:
    // 0x19c918: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x19c918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19c91c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x19C91Cu;
    {
        const bool branch_taken_0x19c91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c91c) {
            ctx->pc = 0x19C920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19C91Cu;
            // 0x19c920: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19C948u;
            goto label_19c948;
        }
    }
    ctx->pc = 0x19C924u;
    // 0x19c924: 0x8e020590  lw          $v0, 0x590($s0)
    ctx->pc = 0x19c924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1424)));
    // 0x19c928: 0x50510007  beql        $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19C928u;
    {
        const bool branch_taken_0x19c928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x19c928) {
            ctx->pc = 0x19C92Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19C928u;
            // 0x19c92c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19C948u;
            goto label_19c948;
        }
    }
    ctx->pc = 0x19C930u;
    // 0x19c930: 0xc06d10a  jal         func_1B4428
    ctx->pc = 0x19C930u;
    SET_GPR_U32(ctx, 31, 0x19C938u);
    ctx->pc = 0x19C934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C930u;
            // 0x19c934: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4428u;
    if (runtime->hasFunction(0x1B4428u)) {
        auto targetFn = runtime->lookupFunction(0x1B4428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C938u; }
        if (ctx->pc != 0x19C938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4428_0x1b4428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C938u; }
        if (ctx->pc != 0x19C938u) { return; }
    }
    ctx->pc = 0x19C938u;
label_19c938:
    // 0x19c938: 0xc068a5c  jal         func_1A2970
    ctx->pc = 0x19C938u;
    SET_GPR_U32(ctx, 31, 0x19C940u);
    ctx->pc = 0x19C93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C938u;
            // 0x19c93c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2970u;
    if (runtime->hasFunction(0x1A2970u)) {
        auto targetFn = runtime->lookupFunction(0x1A2970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C940u; }
        if (ctx->pc != 0x19C940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2970_0x1a2970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C940u; }
        if (ctx->pc != 0x19C940u) { return; }
    }
    ctx->pc = 0x19C940u;
label_19c940:
    // 0x19c940: 0xae110590  sw          $s1, 0x590($s0)
    ctx->pc = 0x19c940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 17));
    // 0x19c944: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19c948:
    // 0x19c948: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19c948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19c94c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19c94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c950: 0x3e00008  jr          $ra
    ctx->pc = 0x19C950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C950u;
            // 0x19c954: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C958u;
}
