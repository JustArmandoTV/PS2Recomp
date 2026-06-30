#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00144BD0
// Address: 0x144bd0 - 0x144f30
void sub_00144BD0_0x144bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144BD0_0x144bd0");
#endif

    switch (ctx->pc) {
        case 0x144c38u: goto label_144c38;
        case 0x144c4cu: goto label_144c4c;
        case 0x144c88u: goto label_144c88;
        case 0x144cd0u: goto label_144cd0;
        case 0x144ea0u: goto label_144ea0;
        case 0x144ef4u: goto label_144ef4;
        case 0x144f08u: goto label_144f08;
        default: break;
    }

    ctx->pc = 0x144bd0u;

    // 0x144bd0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x144bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x144bd4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x144bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x144bd8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x144bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x144bdc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x144bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x144be0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x144be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x144be4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x144be4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144be8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x144be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x144bec: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x144becu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144bf0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x144bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x144bf4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x144bf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144bf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x144bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x144bfc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x144bfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c00: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x144c00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144c04: 0x12510005  beq         $s2, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x144C04u;
    {
        const bool branch_taken_0x144c04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x144C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144C04u;
            // 0x144c08: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c04) {
            ctx->pc = 0x144C1Cu;
            goto label_144c1c;
        }
    }
    ctx->pc = 0x144C0Cu;
    // 0x144c0c: 0x52400008  beql        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x144C0Cu;
    {
        const bool branch_taken_0x144c0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x144c0c) {
            ctx->pc = 0x144C10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x144C0Cu;
            // 0x144c10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x144C30u;
            goto label_144c30;
        }
    }
    ctx->pc = 0x144C14u;
    // 0x144c14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x144C14u;
    {
        const bool branch_taken_0x144c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144c14) {
            ctx->pc = 0x144C24u;
            goto label_144c24;
        }
    }
    ctx->pc = 0x144C1Cu;
label_144c1c:
    // 0x144c1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x144C1Cu;
    {
        const bool branch_taken_0x144c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144C1Cu;
            // 0x144c20: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c1c) {
            ctx->pc = 0x144C2Cu;
            goto label_144c2c;
        }
    }
    ctx->pc = 0x144C24u;
label_144c24:
    // 0x144c24: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x144C24u;
    {
        const bool branch_taken_0x144c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144C24u;
            // 0x144c28: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c24) {
            ctx->pc = 0x144F0Cu;
            goto label_144f0c;
        }
    }
    ctx->pc = 0x144C2Cu;
label_144c2c:
    // 0x144c2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x144c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_144c30:
    // 0x144c30: 0xc0571a4  jal         func_15C690
    ctx->pc = 0x144C30u;
    SET_GPR_U32(ctx, 31, 0x144C38u);
    ctx->pc = 0x144C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144C30u;
            // 0x144c34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C690u;
    if (runtime->hasFunction(0x15C690u)) {
        auto targetFn = runtime->lookupFunction(0x15C690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C38u; }
        if (ctx->pc != 0x144C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C690_0x15c690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C38u; }
        if (ctx->pc != 0x144C38u) { return; }
    }
    ctx->pc = 0x144C38u;
label_144c38:
    // 0x144c38: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x144c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x144c3c: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x144c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x144c40: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x144c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x144c44: 0x928023  subu        $s0, $a0, $s2
    ctx->pc = 0x144c44u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x144c48: 0x3b080  sll         $s6, $v1, 2
    ctx->pc = 0x144c48u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_144c4c:
    // 0x144c4c: 0x2a61001b  slti        $at, $s3, 0x1B
    ctx->pc = 0x144c4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x144c50: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x144C50u;
    {
        const bool branch_taken_0x144c50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x144c50) {
            ctx->pc = 0x144C68u;
            goto label_144c68;
        }
    }
    ctx->pc = 0x144C58u;
    // 0x144c58: 0x2412001a  addiu       $s2, $zero, 0x1A
    ctx->pc = 0x144c58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x144c5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x144C5Cu;
    {
        const bool branch_taken_0x144c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144C5Cu;
            // 0x144c60: 0x2709823  subu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c5c) {
            ctx->pc = 0x144C70u;
            goto label_144c70;
        }
    }
    ctx->pc = 0x144C64u;
    // 0x144c64: 0x0  nop
    ctx->pc = 0x144c64u;
    // NOP
label_144c68:
    // 0x144c68: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x144c68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c6c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x144c6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144c70:
    // 0x144c70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x144c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x144c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c78: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x144c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c7c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x144c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x144c80: 0xc0571c0  jal         func_15C700
    ctx->pc = 0x144C80u;
    SET_GPR_U32(ctx, 31, 0x144C88u);
    ctx->pc = 0x144C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144C80u;
            // 0x144c84: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C700u;
    if (runtime->hasFunction(0x15C700u)) {
        auto targetFn = runtime->lookupFunction(0x15C700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C88u; }
        if (ctx->pc != 0x144C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C700_0x15c700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C88u; }
        if (ctx->pc != 0x144C88u) { return; }
    }
    ctx->pc = 0x144C88u;
label_144c88:
    // 0x144c88: 0x1a400097  blez        $s2, . + 4 + (0x97 << 2)
    ctx->pc = 0x144C88u;
    {
        const bool branch_taken_0x144c88 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x144C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144C88u;
            // 0x144c8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c88) {
            ctx->pc = 0x144EE8u;
            goto label_144ee8;
        }
    }
    ctx->pc = 0x144C90u;
    // 0x144c90: 0x2a410009  slti        $at, $s2, 0x9
    ctx->pc = 0x144c90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x144c94: 0x1420007c  bnez        $at, . + 4 + (0x7C << 2)
    ctx->pc = 0x144C94u;
    {
        const bool branch_taken_0x144c94 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x144C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144C94u;
            // 0x144c98: 0x2646fff8  addiu       $a2, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c94) {
            ctx->pc = 0x144E88u;
            goto label_144e88;
        }
    }
    ctx->pc = 0x144C9Cu;
    // 0x144c9c: 0x6400008  bltz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x144C9Cu;
    {
        const bool branch_taken_0x144c9c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x144CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144C9Cu;
            // 0x144ca0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c9c) {
            ctx->pc = 0x144CC0u;
            goto label_144cc0;
        }
    }
    ctx->pc = 0x144CA4u;
    // 0x144ca4: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x144ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x144ca8: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x144ca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x144cac: 0x241082a  slt         $at, $s2, $at
    ctx->pc = 0x144cacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x144cb0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x144CB0u;
    {
        const bool branch_taken_0x144cb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x144cb0) {
            ctx->pc = 0x144CC0u;
            goto label_144cc0;
        }
    }
    ctx->pc = 0x144CB8u;
    // 0x144cb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x144cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144cbc: 0x0  nop
    ctx->pc = 0x144cbcu;
    // NOP
label_144cc0:
    // 0x144cc0: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x144CC0u;
    {
        const bool branch_taken_0x144cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x144cc0) {
            ctx->pc = 0x144E88u;
            goto label_144e88;
        }
    }
    ctx->pc = 0x144CC8u;
    // 0x144cc8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x144cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x144ccc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x144cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_144cd0:
    // 0x144cd0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x144cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x144cd4: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x144cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144cd8: 0xe6182a  slt         $v1, $a3, $a2
    ctx->pc = 0x144cd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x144cdc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x144cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x144ce0: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x144ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144ce4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x144ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x144ce8: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x144ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144cec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x144cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x144cf0: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x144cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x144cf4: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x144cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x144cf8: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x144cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x144cfc: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x144cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x144d00: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x144d00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x144d04: 0xac450028  sw          $a1, 0x28($v0)
    ctx->pc = 0x144d04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 5));
    // 0x144d08: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x144d08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x144d0c: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x144d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144d10: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x144d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x144d14: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x144d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144d18: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x144d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x144d1c: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x144d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144d20: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x144d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x144d24: 0xac45003c  sw          $a1, 0x3C($v0)
    ctx->pc = 0x144d24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
    // 0x144d28: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x144d28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
    // 0x144d2c: 0xac440044  sw          $a0, 0x44($v0)
    ctx->pc = 0x144d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 4));
    // 0x144d30: 0xac440048  sw          $a0, 0x48($v0)
    ctx->pc = 0x144d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 4));
    // 0x144d34: 0xac44004c  sw          $a0, 0x4C($v0)
    ctx->pc = 0x144d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 4));
    // 0x144d38: 0xac450058  sw          $a1, 0x58($v0)
    ctx->pc = 0x144d38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 5));
    // 0x144d3c: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x144d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x144d40: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x144d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144d44: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x144d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x144d48: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x144d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144d4c: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x144d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x144d50: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x144d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144d54: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x144d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x144d58: 0xac45006c  sw          $a1, 0x6C($v0)
    ctx->pc = 0x144d58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 5));
    // 0x144d5c: 0xac440070  sw          $a0, 0x70($v0)
    ctx->pc = 0x144d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 4));
    // 0x144d60: 0xac440074  sw          $a0, 0x74($v0)
    ctx->pc = 0x144d60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 4));
    // 0x144d64: 0xac440078  sw          $a0, 0x78($v0)
    ctx->pc = 0x144d64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 4));
    // 0x144d68: 0xac44007c  sw          $a0, 0x7C($v0)
    ctx->pc = 0x144d68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 4));
    // 0x144d6c: 0xac450088  sw          $a1, 0x88($v0)
    ctx->pc = 0x144d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 5));
    // 0x144d70: 0xac40008c  sw          $zero, 0x8C($v0)
    ctx->pc = 0x144d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 0));
    // 0x144d74: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x144d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144d78: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x144d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x144d7c: 0xc6800028  lwc1        $f0, 0x28($s4)
    ctx->pc = 0x144d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144d80: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x144d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x144d84: 0xc680002c  lwc1        $f0, 0x2C($s4)
    ctx->pc = 0x144d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144d88: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x144d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x144d8c: 0xac45009c  sw          $a1, 0x9C($v0)
    ctx->pc = 0x144d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 5));
    // 0x144d90: 0xac4400a0  sw          $a0, 0xA0($v0)
    ctx->pc = 0x144d90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 4));
    // 0x144d94: 0xac4400a4  sw          $a0, 0xA4($v0)
    ctx->pc = 0x144d94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 4));
    // 0x144d98: 0xac4400a8  sw          $a0, 0xA8($v0)
    ctx->pc = 0x144d98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 4));
    // 0x144d9c: 0xac4400ac  sw          $a0, 0xAC($v0)
    ctx->pc = 0x144d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 4));
    // 0x144da0: 0xac4500b8  sw          $a1, 0xB8($v0)
    ctx->pc = 0x144da0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 5));
    // 0x144da4: 0xac4000bc  sw          $zero, 0xBC($v0)
    ctx->pc = 0x144da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 0));
    // 0x144da8: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x144da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144dac: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x144dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
    // 0x144db0: 0xc6800034  lwc1        $f0, 0x34($s4)
    ctx->pc = 0x144db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144db4: 0xe44000c4  swc1        $f0, 0xC4($v0)
    ctx->pc = 0x144db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 196), bits); }
    // 0x144db8: 0xc6800038  lwc1        $f0, 0x38($s4)
    ctx->pc = 0x144db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144dbc: 0xe44000c8  swc1        $f0, 0xC8($v0)
    ctx->pc = 0x144dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 200), bits); }
    // 0x144dc0: 0xac4500cc  sw          $a1, 0xCC($v0)
    ctx->pc = 0x144dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 5));
    // 0x144dc4: 0xac4400d0  sw          $a0, 0xD0($v0)
    ctx->pc = 0x144dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 4));
    // 0x144dc8: 0xac4400d4  sw          $a0, 0xD4($v0)
    ctx->pc = 0x144dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 4));
    // 0x144dcc: 0xac4400d8  sw          $a0, 0xD8($v0)
    ctx->pc = 0x144dccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 4));
    // 0x144dd0: 0xac4400dc  sw          $a0, 0xDC($v0)
    ctx->pc = 0x144dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 4));
    // 0x144dd4: 0xac4500e8  sw          $a1, 0xE8($v0)
    ctx->pc = 0x144dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 5));
    // 0x144dd8: 0xac4000ec  sw          $zero, 0xEC($v0)
    ctx->pc = 0x144dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 236), GPR_U32(ctx, 0));
    // 0x144ddc: 0xc680003c  lwc1        $f0, 0x3C($s4)
    ctx->pc = 0x144ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144de0: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x144de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
    // 0x144de4: 0xc6800040  lwc1        $f0, 0x40($s4)
    ctx->pc = 0x144de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144de8: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x144de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x144dec: 0xc6800044  lwc1        $f0, 0x44($s4)
    ctx->pc = 0x144decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144df0: 0xe44000f8  swc1        $f0, 0xF8($v0)
    ctx->pc = 0x144df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 248), bits); }
    // 0x144df4: 0xac4500fc  sw          $a1, 0xFC($v0)
    ctx->pc = 0x144df4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 5));
    // 0x144df8: 0xac440100  sw          $a0, 0x100($v0)
    ctx->pc = 0x144df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 4));
    // 0x144dfc: 0xac440104  sw          $a0, 0x104($v0)
    ctx->pc = 0x144dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 4));
    // 0x144e00: 0xac440108  sw          $a0, 0x108($v0)
    ctx->pc = 0x144e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 4));
    // 0x144e04: 0xac44010c  sw          $a0, 0x10C($v0)
    ctx->pc = 0x144e04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 268), GPR_U32(ctx, 4));
    // 0x144e08: 0xac450118  sw          $a1, 0x118($v0)
    ctx->pc = 0x144e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 5));
    // 0x144e0c: 0xac40011c  sw          $zero, 0x11C($v0)
    ctx->pc = 0x144e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 0));
    // 0x144e10: 0xc6800048  lwc1        $f0, 0x48($s4)
    ctx->pc = 0x144e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144e14: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x144e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x144e18: 0xc680004c  lwc1        $f0, 0x4C($s4)
    ctx->pc = 0x144e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144e1c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x144e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x144e20: 0xc6800050  lwc1        $f0, 0x50($s4)
    ctx->pc = 0x144e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144e24: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x144e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x144e28: 0xac45012c  sw          $a1, 0x12C($v0)
    ctx->pc = 0x144e28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 5));
    // 0x144e2c: 0xac440130  sw          $a0, 0x130($v0)
    ctx->pc = 0x144e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 4));
    // 0x144e30: 0xac440134  sw          $a0, 0x134($v0)
    ctx->pc = 0x144e30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 4));
    // 0x144e34: 0xac440138  sw          $a0, 0x138($v0)
    ctx->pc = 0x144e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 4));
    // 0x144e38: 0xac44013c  sw          $a0, 0x13C($v0)
    ctx->pc = 0x144e38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 4));
    // 0x144e3c: 0xac450148  sw          $a1, 0x148($v0)
    ctx->pc = 0x144e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 5));
    // 0x144e40: 0xac40014c  sw          $zero, 0x14C($v0)
    ctx->pc = 0x144e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 0));
    // 0x144e44: 0xc6800054  lwc1        $f0, 0x54($s4)
    ctx->pc = 0x144e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144e48: 0xe4400150  swc1        $f0, 0x150($v0)
    ctx->pc = 0x144e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 336), bits); }
    // 0x144e4c: 0xc6800058  lwc1        $f0, 0x58($s4)
    ctx->pc = 0x144e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144e50: 0xe4400154  swc1        $f0, 0x154($v0)
    ctx->pc = 0x144e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 340), bits); }
    // 0x144e54: 0xc680005c  lwc1        $f0, 0x5C($s4)
    ctx->pc = 0x144e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144e58: 0xe4400158  swc1        $f0, 0x158($v0)
    ctx->pc = 0x144e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 344), bits); }
    // 0x144e5c: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x144e5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x144e60: 0xac45015c  sw          $a1, 0x15C($v0)
    ctx->pc = 0x144e60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 5));
    // 0x144e64: 0xac440160  sw          $a0, 0x160($v0)
    ctx->pc = 0x144e64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 4));
    // 0x144e68: 0xac440164  sw          $a0, 0x164($v0)
    ctx->pc = 0x144e68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 356), GPR_U32(ctx, 4));
    // 0x144e6c: 0xac440168  sw          $a0, 0x168($v0)
    ctx->pc = 0x144e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 360), GPR_U32(ctx, 4));
    // 0x144e70: 0xac44016c  sw          $a0, 0x16C($v0)
    ctx->pc = 0x144e70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 364), GPR_U32(ctx, 4));
    // 0x144e74: 0xac450178  sw          $a1, 0x178($v0)
    ctx->pc = 0x144e74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 376), GPR_U32(ctx, 5));
    // 0x144e78: 0xac40017c  sw          $zero, 0x17C($v0)
    ctx->pc = 0x144e78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 380), GPR_U32(ctx, 0));
    // 0x144e7c: 0x1460ff94  bnez        $v1, . + 4 + (-0x6C << 2)
    ctx->pc = 0x144E7Cu;
    {
        const bool branch_taken_0x144e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x144E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144E7Cu;
            // 0x144e80: 0x24420180  addiu       $v0, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e7c) {
            ctx->pc = 0x144CD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_144cd0;
        }
    }
    ctx->pc = 0x144E84u;
    // 0x144e84: 0x0  nop
    ctx->pc = 0x144e84u;
    // NOP
label_144e88:
    // 0x144e88: 0xf2082a  slt         $at, $a3, $s2
    ctx->pc = 0x144e88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x144e8c: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x144E8Cu;
    {
        const bool branch_taken_0x144e8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x144e8c) {
            ctx->pc = 0x144EE8u;
            goto label_144ee8;
        }
    }
    ctx->pc = 0x144E94u;
    // 0x144e94: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x144e94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x144e98: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x144e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x144e9c: 0x0  nop
    ctx->pc = 0x144e9cu;
    // NOP
label_144ea0:
    // 0x144ea0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x144ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x144ea4: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x144ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144ea8: 0xf2182a  slt         $v1, $a3, $s2
    ctx->pc = 0x144ea8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x144eac: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x144eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x144eb0: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x144eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144eb4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x144eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x144eb8: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x144eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144ebc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x144ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x144ec0: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x144ec0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x144ec4: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x144ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x144ec8: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x144ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x144ecc: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x144eccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x144ed0: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x144ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x144ed4: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x144ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x144ed8: 0xac450028  sw          $a1, 0x28($v0)
    ctx->pc = 0x144ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 5));
    // 0x144edc: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x144edcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x144ee0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x144EE0u;
    {
        const bool branch_taken_0x144ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x144EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144EE0u;
            // 0x144ee4: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144ee0) {
            ctx->pc = 0x144EA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_144ea0;
        }
    }
    ctx->pc = 0x144EE8u;
label_144ee8:
    // 0x144ee8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x144ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144eec: 0xc0571f0  jal         func_15C7C0
    ctx->pc = 0x144EECu;
    SET_GPR_U32(ctx, 31, 0x144EF4u);
    ctx->pc = 0x144EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144EECu;
            // 0x144ef0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C7C0u;
    if (runtime->hasFunction(0x15C7C0u)) {
        auto targetFn = runtime->lookupFunction(0x15C7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144EF4u; }
        if (ctx->pc != 0x144EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C7C0_0x15c7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144EF4u; }
        if (ctx->pc != 0x144EF4u) { return; }
    }
    ctx->pc = 0x144EF4u;
label_144ef4:
    // 0x144ef4: 0x1e60ff55  bgtz        $s3, . + 4 + (-0xAB << 2)
    ctx->pc = 0x144EF4u;
    {
        const bool branch_taken_0x144ef4 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x144EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144EF4u;
            // 0x144ef8: 0x296a023  subu        $s4, $s4, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144ef4) {
            ctx->pc = 0x144C4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_144c4c;
        }
    }
    ctx->pc = 0x144EFCu;
    // 0x144efc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x144efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144f00: 0xc0571a8  jal         func_15C6A0
    ctx->pc = 0x144F00u;
    SET_GPR_U32(ctx, 31, 0x144F08u);
    ctx->pc = 0x144F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144F00u;
            // 0x144f04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C6A0u;
    if (runtime->hasFunction(0x15C6A0u)) {
        auto targetFn = runtime->lookupFunction(0x15C6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144F08u; }
        if (ctx->pc != 0x144F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C6A0_0x15c6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144F08u; }
        if (ctx->pc != 0x144F08u) { return; }
    }
    ctx->pc = 0x144F08u;
label_144f08:
    // 0x144f08: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x144f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_144f0c:
    // 0x144f0c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x144f0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x144f10: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x144f10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x144f14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x144f14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144f18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x144f18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144f1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x144f1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144f20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144f20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144f24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144f28: 0x3e00008  jr          $ra
    ctx->pc = 0x144F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144F28u;
            // 0x144f2c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144F30u;
}
