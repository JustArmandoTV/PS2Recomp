#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A81E8
// Address: 0x1a81e8 - 0x1a8380
void sub_001A81E8_0x1a81e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A81E8_0x1a81e8");
#endif

    switch (ctx->pc) {
        case 0x1a822cu: goto label_1a822c;
        case 0x1a8244u: goto label_1a8244;
        case 0x1a825cu: goto label_1a825c;
        case 0x1a8284u: goto label_1a8284;
        case 0x1a8298u: goto label_1a8298;
        case 0x1a82c8u: goto label_1a82c8;
        case 0x1a82e0u: goto label_1a82e0;
        case 0x1a82f8u: goto label_1a82f8;
        case 0x1a8310u: goto label_1a8310;
        case 0x1a8328u: goto label_1a8328;
        case 0x1a8340u: goto label_1a8340;
        case 0x1a8358u: goto label_1a8358;
        default: break;
    }

    ctx->pc = 0x1a81e8u;

    // 0x1a81e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a81e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a81ec: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1a81ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1a81f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a81f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a81f4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a81f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a81f8: 0x2446b038  addiu       $a2, $v0, -0x4FC8
    ctx->pc = 0x1a81f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946872));
    // 0x1a81fc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a81fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a8200: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a8200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a8204: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a8204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8208: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1a8208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1a820c: 0x26130008  addiu       $s3, $s0, 0x8
    ctx->pc = 0x1a820cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1a8210: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1a8210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1a8214: 0x2614000c  addiu       $s4, $s0, 0xC
    ctx->pc = 0x1a8214u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1a8218: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1a8218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1a821c: 0x325500ff  andi        $s5, $s2, 0xFF
    ctx->pc = 0x1a821cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1a8220: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a8220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a8224: 0xc06a0ee  jal         func_1A83B8
    ctx->pc = 0x1A8224u;
    SET_GPR_U32(ctx, 31, 0x1A822Cu);
    ctx->pc = 0x1A8228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8224u;
            // 0x1a8228: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A83B8u;
    if (runtime->hasFunction(0x1A83B8u)) {
        auto targetFn = runtime->lookupFunction(0x1A83B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A822Cu; }
        if (ctx->pc != 0x1A822Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A83B8_0x1a83b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A822Cu; }
        if (ctx->pc != 0x1A822Cu) { return; }
    }
    ctx->pc = 0x1A822Cu;
label_1a822c:
    // 0x1a822c: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1a822cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1a8230: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a8230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a8234: 0x24c6b090  addiu       $a2, $a2, -0x4F70
    ctx->pc = 0x1a8234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946960));
    // 0x1a8238: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a823c: 0xc06a0ee  jal         func_1A83B8
    ctx->pc = 0x1A823Cu;
    SET_GPR_U32(ctx, 31, 0x1A8244u);
    ctx->pc = 0x1A8240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A823Cu;
            // 0x1a8240: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A83B8u;
    if (runtime->hasFunction(0x1A83B8u)) {
        auto targetFn = runtime->lookupFunction(0x1A83B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8244u; }
        if (ctx->pc != 0x1A8244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A83B8_0x1a83b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8244u; }
        if (ctx->pc != 0x1A8244u) { return; }
    }
    ctx->pc = 0x1A8244u;
label_1a8244:
    // 0x1a8244: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8248: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a8248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1a824c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1a824cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8250: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a8250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8254: 0xc06ec3a  jal         func_1BB0E8
    ctx->pc = 0x1A8254u;
    SET_GPR_U32(ctx, 31, 0x1A825Cu);
    ctx->pc = 0x1A8258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8254u;
            // 0x1a8258: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB0E8u;
    if (runtime->hasFunction(0x1BB0E8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB0E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A825Cu; }
        if (ctx->pc != 0x1A825Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB0E8_0x1bb0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A825Cu; }
        if (ctx->pc != 0x1A825Cu) { return; }
    }
    ctx->pc = 0x1A825Cu;
label_1a825c:
    // 0x1a825c: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1a825cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1a8260: 0x24c6b140  addiu       $a2, $a2, -0x4EC0
    ctx->pc = 0x1a8260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947136));
    // 0x1a8264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8268: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a8268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a826c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A826Cu;
    {
        const bool branch_taken_0x1a826c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A826Cu;
            // 0x1a8270: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a826c) {
            ctx->pc = 0x1A827Cu;
            goto label_1a827c;
        }
    }
    ctx->pc = 0x1A8274u;
    // 0x1a8274: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1a8274u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1a8278: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1a8278u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_1a827c:
    // 0x1a827c: 0xc06a0ee  jal         func_1A83B8
    ctx->pc = 0x1A827Cu;
    SET_GPR_U32(ctx, 31, 0x1A8284u);
    ctx->pc = 0x1A83B8u;
    if (runtime->hasFunction(0x1A83B8u)) {
        auto targetFn = runtime->lookupFunction(0x1A83B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8284u; }
        if (ctx->pc != 0x1A8284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A83B8_0x1a83b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8284u; }
        if (ctx->pc != 0x1A8284u) { return; }
    }
    ctx->pc = 0x1A8284u;
label_1a8284:
    // 0x1a8284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8288: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1a8288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1a828c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1a828cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8290: 0xc06e9a4  jal         func_1BA690
    ctx->pc = 0x1A8290u;
    SET_GPR_U32(ctx, 31, 0x1A8298u);
    ctx->pc = 0x1A8294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8290u;
            // 0x1a8294: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA690u;
    if (runtime->hasFunction(0x1BA690u)) {
        auto targetFn = runtime->lookupFunction(0x1BA690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8298u; }
        if (ctx->pc != 0x1A8298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA690_0x1ba690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8298u; }
        if (ctx->pc != 0x1A8298u) { return; }
    }
    ctx->pc = 0x1A8298u;
label_1a8298:
    // 0x1a8298: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1a8298u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1a829c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a829cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a82a0: 0x24c6b280  addiu       $a2, $a2, -0x4D80
    ctx->pc = 0x1a82a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947456));
    // 0x1a82a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a82a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a82a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a82a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a82ac: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1a82acu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1a82b0: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x1a82b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a82b4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a82b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1a82b8: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1A82B8u;
    {
        const bool branch_taken_0x1a82b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A82BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A82B8u;
            // 0x1a82bc: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a82b8) {
            ctx->pc = 0x1A835Cu;
            goto label_1a835c;
        }
    }
    ctx->pc = 0x1A82C0u;
    // 0x1a82c0: 0xc06a0ee  jal         func_1A83B8
    ctx->pc = 0x1A82C0u;
    SET_GPR_U32(ctx, 31, 0x1A82C8u);
    ctx->pc = 0x1A83B8u;
    if (runtime->hasFunction(0x1A83B8u)) {
        auto targetFn = runtime->lookupFunction(0x1A83B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A82C8u; }
        if (ctx->pc != 0x1A82C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A83B8_0x1a83b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A82C8u; }
        if (ctx->pc != 0x1A82C8u) { return; }
    }
    ctx->pc = 0x1A82C8u;
label_1a82c8:
    // 0x1a82c8: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1a82c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1a82cc: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1a82ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1a82d0: 0x24c6b2d8  addiu       $a2, $a2, -0x4D28
    ctx->pc = 0x1a82d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947544));
    // 0x1a82d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a82d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a82d8: 0xc06a0ee  jal         func_1A83B8
    ctx->pc = 0x1A82D8u;
    SET_GPR_U32(ctx, 31, 0x1A82E0u);
    ctx->pc = 0x1A82DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A82D8u;
            // 0x1a82dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A83B8u;
    if (runtime->hasFunction(0x1A83B8u)) {
        auto targetFn = runtime->lookupFunction(0x1A83B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A82E0u; }
        if (ctx->pc != 0x1A82E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A83B8_0x1a83b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A82E0u; }
        if (ctx->pc != 0x1A82E0u) { return; }
    }
    ctx->pc = 0x1A82E0u;
label_1a82e0:
    // 0x1a82e0: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1a82e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1a82e4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1a82e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1a82e8: 0x24c6b330  addiu       $a2, $a2, -0x4CD0
    ctx->pc = 0x1a82e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947632));
    // 0x1a82ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a82ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a82f0: 0xc06a0ee  jal         func_1A83B8
    ctx->pc = 0x1A82F0u;
    SET_GPR_U32(ctx, 31, 0x1A82F8u);
    ctx->pc = 0x1A82F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A82F0u;
            // 0x1a82f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A83B8u;
    if (runtime->hasFunction(0x1A83B8u)) {
        auto targetFn = runtime->lookupFunction(0x1A83B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A82F8u; }
        if (ctx->pc != 0x1A82F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A83B8_0x1a83b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A82F8u; }
        if (ctx->pc != 0x1A82F8u) { return; }
    }
    ctx->pc = 0x1A82F8u;
label_1a82f8:
    // 0x1a82f8: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1a82f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1a82fc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1a82fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1a8300: 0x24c6b388  addiu       $a2, $a2, -0x4C78
    ctx->pc = 0x1a8300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947720));
    // 0x1a8304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8308: 0xc06a0ee  jal         func_1A83B8
    ctx->pc = 0x1A8308u;
    SET_GPR_U32(ctx, 31, 0x1A8310u);
    ctx->pc = 0x1A830Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8308u;
            // 0x1a830c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A83B8u;
    if (runtime->hasFunction(0x1A83B8u)) {
        auto targetFn = runtime->lookupFunction(0x1A83B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8310u; }
        if (ctx->pc != 0x1A8310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A83B8_0x1a83b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8310u; }
        if (ctx->pc != 0x1A8310u) { return; }
    }
    ctx->pc = 0x1A8310u;
label_1a8310:
    // 0x1a8310: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1a8310u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1a8314: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1a8314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1a8318: 0x24c6b3e0  addiu       $a2, $a2, -0x4C20
    ctx->pc = 0x1a8318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947808));
    // 0x1a831c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a831cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8320: 0xc06a0ee  jal         func_1A83B8
    ctx->pc = 0x1A8320u;
    SET_GPR_U32(ctx, 31, 0x1A8328u);
    ctx->pc = 0x1A8324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8320u;
            // 0x1a8324: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A83B8u;
    if (runtime->hasFunction(0x1A83B8u)) {
        auto targetFn = runtime->lookupFunction(0x1A83B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8328u; }
        if (ctx->pc != 0x1A8328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A83B8_0x1a83b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8328u; }
        if (ctx->pc != 0x1A8328u) { return; }
    }
    ctx->pc = 0x1A8328u;
label_1a8328:
    // 0x1a8328: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1a8328u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1a832c: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1a832cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1a8330: 0x24c6b438  addiu       $a2, $a2, -0x4BC8
    ctx->pc = 0x1a8330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947896));
    // 0x1a8334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8338: 0xc06a0ee  jal         func_1A83B8
    ctx->pc = 0x1A8338u;
    SET_GPR_U32(ctx, 31, 0x1A8340u);
    ctx->pc = 0x1A833Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8338u;
            // 0x1a833c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A83B8u;
    if (runtime->hasFunction(0x1A83B8u)) {
        auto targetFn = runtime->lookupFunction(0x1A83B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8340u; }
        if (ctx->pc != 0x1A8340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A83B8_0x1a83b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8340u; }
        if (ctx->pc != 0x1A8340u) { return; }
    }
    ctx->pc = 0x1A8340u;
label_1a8340:
    // 0x1a8340: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1a8340u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1a8344: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1a8344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1a8348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a834c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a834cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8350: 0xc06a0ee  jal         func_1A83B8
    ctx->pc = 0x1A8350u;
    SET_GPR_U32(ctx, 31, 0x1A8358u);
    ctx->pc = 0x1A8354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8350u;
            // 0x1a8354: 0x24c6b490  addiu       $a2, $a2, -0x4B70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A83B8u;
    if (runtime->hasFunction(0x1A83B8u)) {
        auto targetFn = runtime->lookupFunction(0x1A83B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8358u; }
        if (ctx->pc != 0x1A8358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A83B8_0x1a83b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8358u; }
        if (ctx->pc != 0x1A8358u) { return; }
    }
    ctx->pc = 0x1A8358u;
label_1a8358:
    // 0x1a8358: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1a8358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1a835c:
    // 0x1a835c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a835cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8360: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a8360u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a8364: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a8364u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8368: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1a8368u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a836c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1a836cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8370: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1a8370u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a8374: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a8374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a8378: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A837Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8378u;
            // 0x1a837c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8380u;
}
