#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029D300
// Address: 0x29d300 - 0x29d410
void sub_0029D300_0x29d300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D300_0x29d300");
#endif

    switch (ctx->pc) {
        case 0x29d358u: goto label_29d358;
        case 0x29d36cu: goto label_29d36c;
        case 0x29d38cu: goto label_29d38c;
        case 0x29d3a4u: goto label_29d3a4;
        case 0x29d3e0u: goto label_29d3e0;
        default: break;
    }

    ctx->pc = 0x29d300u;

    // 0x29d300: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x29d300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x29d304: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29d304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x29d308: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x29d308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x29d30c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x29d30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x29d310: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29d310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29d314: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29d314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29d318: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x29d318u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d31c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29d31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29d320: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29d320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29d324: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29d328: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29d328u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d32c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29d330: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x29d330u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x29d334: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x29d334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29d338: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x29d338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29d33c: 0x8c960000  lw          $s6, 0x0($a0)
    ctx->pc = 0x29d33cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29d340: 0xc28824  and         $s1, $a2, $v0
    ctx->pc = 0x29d340u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x29d344: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29d344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x29d348: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x29d348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29d34c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29d34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x29d350: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x29D350u;
    SET_GPR_U32(ctx, 31, 0x29D358u);
    ctx->pc = 0x29D354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D350u;
            // 0x29d354: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D358u; }
        if (ctx->pc != 0x29D358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D358u; }
        if (ctx->pc != 0x29D358u) { return; }
    }
    ctx->pc = 0x29D358u;
label_29d358:
    // 0x29d358: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x29d358u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x29d35c: 0x1230c0  sll         $a2, $s2, 3
    ctx->pc = 0x29d35cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x29d360: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29d360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d364: 0xc0a8458  jal         func_2A1160
    ctx->pc = 0x29D364u;
    SET_GPR_U32(ctx, 31, 0x29D36Cu);
    ctx->pc = 0x29D368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D364u;
            // 0x29d368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1160u;
    if (runtime->hasFunction(0x2A1160u)) {
        auto targetFn = runtime->lookupFunction(0x2A1160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D36Cu; }
        if (ctx->pc != 0x29D36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1160_0x2a1160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D36Cu; }
        if (ctx->pc != 0x29D36Cu) { return; }
    }
    ctx->pc = 0x29D36Cu;
label_29d36c:
    // 0x29d36c: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x29d36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x29d370: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x29d370u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x29d374: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x29d374u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    // 0x29d378: 0x1a000011  blez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29D378u;
    {
        const bool branch_taken_0x29d378 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x29D37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D378u;
            // 0x29d37c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d378) {
            ctx->pc = 0x29D3C0u;
            goto label_29d3c0;
        }
    }
    ctx->pc = 0x29D380u;
    // 0x29d380: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x29d380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x29d384: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x29d384u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d388: 0x2c39021  addu        $s2, $s6, $v1
    ctx->pc = 0x29d388u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_29d38c:
    // 0x29d38c: 0xde650000  ld          $a1, 0x0($s3)
    ctx->pc = 0x29d38cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29d390: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D390u;
    {
        const bool branch_taken_0x29d390 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d390) {
            ctx->pc = 0x29D3A8u;
            goto label_29d3a8;
        }
    }
    ctx->pc = 0x29D398u;
    // 0x29d398: 0xde460000  ld          $a2, 0x0($s2)
    ctx->pc = 0x29d398u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29d39c: 0xc0a75bc  jal         func_29D6F0
    ctx->pc = 0x29D39Cu;
    SET_GPR_U32(ctx, 31, 0x29D3A4u);
    ctx->pc = 0x29D3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D39Cu;
            // 0x29d3a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D6F0u;
    if (runtime->hasFunction(0x29D6F0u)) {
        auto targetFn = runtime->lookupFunction(0x29D6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D3A4u; }
        if (ctx->pc != 0x29D3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D6F0_0x29d6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D3A4u; }
        if (ctx->pc != 0x29D3A4u) { return; }
    }
    ctx->pc = 0x29D3A4u;
label_29d3a4:
    // 0x29d3a4: 0x0  nop
    ctx->pc = 0x29d3a4u;
    // NOP
label_29d3a8:
    // 0x29d3a8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x29d3a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x29d3ac: 0x290182a  slt         $v1, $s4, $s0
    ctx->pc = 0x29d3acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x29d3b0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x29d3b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x29d3b4: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x29D3B4u;
    {
        const bool branch_taken_0x29d3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D3B4u;
            // 0x29d3b8: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d3b4) {
            ctx->pc = 0x29D38Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d38c;
        }
    }
    ctx->pc = 0x29D3BCu;
    // 0x29d3bc: 0x0  nop
    ctx->pc = 0x29d3bcu;
    // NOP
label_29d3c0:
    // 0x29d3c0: 0x56200008  bnel        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x29D3C0u;
    {
        const bool branch_taken_0x29d3c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d3c0) {
            ctx->pc = 0x29D3C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29D3C0u;
            // 0x29d3c4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29D3E4u;
            goto label_29d3e4;
        }
    }
    ctx->pc = 0x29D3C8u;
    // 0x29d3c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29d3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x29d3cc: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x29d3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x29d3d0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29d3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x29d3d4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x29d3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d3d8: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x29D3D8u;
    SET_GPR_U32(ctx, 31, 0x29D3E0u);
    ctx->pc = 0x29D3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D3D8u;
            // 0x29d3dc: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D3E0u; }
        if (ctx->pc != 0x29D3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D3E0u; }
        if (ctx->pc != 0x29D3E0u) { return; }
    }
    ctx->pc = 0x29D3E0u;
label_29d3e0:
    // 0x29d3e0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x29d3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_29d3e4:
    // 0x29d3e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29d3e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d3e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29d3e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29d3ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29d3ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29d3f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29d3f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29d3f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29d3f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d3f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d3f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d3fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d3fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d400: 0x3e00008  jr          $ra
    ctx->pc = 0x29D400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D400u;
            // 0x29d404: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29D408u;
    // 0x29d408: 0x0  nop
    ctx->pc = 0x29d408u;
    // NOP
    // 0x29d40c: 0x0  nop
    ctx->pc = 0x29d40cu;
    // NOP
}
