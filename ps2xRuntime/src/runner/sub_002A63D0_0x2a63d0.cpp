#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A63D0
// Address: 0x2a63d0 - 0x2a64b0
void sub_002A63D0_0x2a63d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A63D0_0x2a63d0");
#endif

    switch (ctx->pc) {
        case 0x2a63f0u: goto label_2a63f0;
        case 0x2a646cu: goto label_2a646c;
        case 0x2a6490u: goto label_2a6490;
        default: break;
    }

    ctx->pc = 0x2a63d0u;

    // 0x2a63d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a63d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a63d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a63d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a63d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a63d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a63dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a63dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a63e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a63e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a63e4: 0x8c50e400  lw          $s0, -0x1C00($v0)
    ctx->pc = 0x2a63e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
    // 0x2a63e8: 0xc040180  jal         func_100600
    ctx->pc = 0x2A63E8u;
    SET_GPR_U32(ctx, 31, 0x2A63F0u);
    ctx->pc = 0x2A63ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A63E8u;
            // 0x2a63ec: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A63F0u; }
        if (ctx->pc != 0x2A63F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A63F0u; }
        if (ctx->pc != 0x2A63F0u) { return; }
    }
    ctx->pc = 0x2A63F0u;
label_2a63f0:
    // 0x2a63f0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A63F0u;
    {
        const bool branch_taken_0x2a63f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A63F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A63F0u;
            // 0x2a63f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a63f0) {
            ctx->pc = 0x2A6434u;
            goto label_2a6434;
        }
    }
    ctx->pc = 0x2A63F8u;
    // 0x2a63f8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a63f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2a63fc: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2a63fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x2a6400: 0x2463fb70  addiu       $v1, $v1, -0x490
    ctx->pc = 0x2a6400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966128));
    // 0x2a6404: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2a6404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a6408: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2a6408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2a640c: 0x2484fbb0  addiu       $a0, $a0, -0x450
    ctx->pc = 0x2a640cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966192));
    // 0x2a6410: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x2a6410u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a6414: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a6414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a6418: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2a6418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2a641c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2a641cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2a6420: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2a6420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x2a6424: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2a6424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2a6428: 0xae2300a4  sw          $v1, 0xA4($s1)
    ctx->pc = 0x2a6428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 3));
    // 0x2a642c: 0xa22000b4  sb          $zero, 0xB4($s1)
    ctx->pc = 0x2a642cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 180), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a6430: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2a6430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2a6434:
    // 0x2a6434: 0xafb1003c  sw          $s1, 0x3C($sp)
    ctx->pc = 0x2a6434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 17));
    // 0x2a6438: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2a6438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2a643c: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2a643cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2a6440: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a6440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6444: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x2a6444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2a6448: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2a6448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a644c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2a644cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2a6450: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2a6450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2a6454: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2a6454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x2a6458: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2a6458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2a645c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2a645cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a6460: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a6460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a6464: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2A6464u;
    SET_GPR_U32(ctx, 31, 0x2A646Cu);
    ctx->pc = 0x2A6468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6464u;
            // 0x2a6468: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A646Cu; }
        if (ctx->pc != 0x2A646Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A646Cu; }
        if (ctx->pc != 0x2A646Cu) { return; }
    }
    ctx->pc = 0x2A646Cu;
label_2a646c:
    // 0x2a646c: 0xafb10038  sw          $s1, 0x38($sp)
    ctx->pc = 0x2a646cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 17));
    // 0x2a6470: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2a6470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2a6474: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2a6474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2a6478: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a6478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a647c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2a647cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2a6480: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x2a6480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2a6484: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a6484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a6488: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2A6488u;
    SET_GPR_U32(ctx, 31, 0x2A6490u);
    ctx->pc = 0x2A648Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6488u;
            // 0x2a648c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6490u; }
        if (ctx->pc != 0x2A6490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6490u; }
        if (ctx->pc != 0x2A6490u) { return; }
    }
    ctx->pc = 0x2A6490u;
label_2a6490:
    // 0x2a6490: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a6490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6494: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a6494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a6498: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a6498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a649c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a649cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a64a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A64A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A64A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A64A0u;
            // 0x2a64a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A64A8u;
    // 0x2a64a8: 0x0  nop
    ctx->pc = 0x2a64a8u;
    // NOP
    // 0x2a64ac: 0x0  nop
    ctx->pc = 0x2a64acu;
    // NOP
}
