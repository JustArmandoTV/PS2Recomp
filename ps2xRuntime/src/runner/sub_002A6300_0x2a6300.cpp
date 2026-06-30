#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A6300
// Address: 0x2a6300 - 0x2a63d0
void sub_002A6300_0x2a6300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6300_0x2a6300");
#endif

    switch (ctx->pc) {
        case 0x2a6320u: goto label_2a6320;
        case 0x2a6390u: goto label_2a6390;
        case 0x2a63b4u: goto label_2a63b4;
        default: break;
    }

    ctx->pc = 0x2a6300u;

    // 0x2a6300: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a6300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a6304: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a6304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a6308: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a6308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a630c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a630cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a6310: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a6310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a6314: 0x8c50e400  lw          $s0, -0x1C00($v0)
    ctx->pc = 0x2a6314u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
    // 0x2a6318: 0xc040180  jal         func_100600
    ctx->pc = 0x2A6318u;
    SET_GPR_U32(ctx, 31, 0x2A6320u);
    ctx->pc = 0x2A631Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6318u;
            // 0x2a631c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6320u; }
        if (ctx->pc != 0x2A6320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6320u; }
        if (ctx->pc != 0x2A6320u) { return; }
    }
    ctx->pc = 0x2A6320u;
label_2a6320:
    // 0x2a6320: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A6320u;
    {
        const bool branch_taken_0x2a6320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6320u;
            // 0x2a6324: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6320) {
            ctx->pc = 0x2A6358u;
            goto label_2a6358;
        }
    }
    ctx->pc = 0x2A6328u;
    // 0x2a6328: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a6328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2a632c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2a632cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a6330: 0x2463fb70  addiu       $v1, $v1, -0x490
    ctx->pc = 0x2a6330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966128));
    // 0x2a6334: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2a6334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2a6338: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x2a6338u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a633c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a633cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2a6340: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2a6340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2a6344: 0x24632f70  addiu       $v1, $v1, 0x2F70
    ctx->pc = 0x2a6344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12144));
    // 0x2a6348: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2a6348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x2a634c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2a634cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2a6350: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2a6350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2a6354: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2a6354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2a6358:
    // 0x2a6358: 0xafb1003c  sw          $s1, 0x3C($sp)
    ctx->pc = 0x2a6358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 17));
    // 0x2a635c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2a635cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2a6360: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2a6360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2a6364: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a6364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6368: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x2a6368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2a636c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2a636cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a6370: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2a6370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2a6374: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2a6374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2a6378: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2a6378u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x2a637c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2a637cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2a6380: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2a6380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a6384: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a6384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a6388: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2A6388u;
    SET_GPR_U32(ctx, 31, 0x2A6390u);
    ctx->pc = 0x2A638Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6388u;
            // 0x2a638c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6390u; }
        if (ctx->pc != 0x2A6390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6390u; }
        if (ctx->pc != 0x2A6390u) { return; }
    }
    ctx->pc = 0x2A6390u;
label_2a6390:
    // 0x2a6390: 0xafb10038  sw          $s1, 0x38($sp)
    ctx->pc = 0x2a6390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 17));
    // 0x2a6394: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x2a6394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x2a6398: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2a6398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a639c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a639cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a63a0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2a63a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2a63a4: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x2a63a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2a63a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a63a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a63ac: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2A63ACu;
    SET_GPR_U32(ctx, 31, 0x2A63B4u);
    ctx->pc = 0x2A63B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A63ACu;
            // 0x2a63b0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A63B4u; }
        if (ctx->pc != 0x2A63B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A63B4u; }
        if (ctx->pc != 0x2A63B4u) { return; }
    }
    ctx->pc = 0x2A63B4u;
label_2a63b4:
    // 0x2a63b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a63b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a63b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a63b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a63bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a63bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a63c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a63c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a63c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A63C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A63C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A63C4u;
            // 0x2a63c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A63CCu;
    // 0x2a63cc: 0x0  nop
    ctx->pc = 0x2a63ccu;
    // NOP
}
