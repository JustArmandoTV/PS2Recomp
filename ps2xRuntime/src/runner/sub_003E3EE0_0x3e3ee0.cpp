#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E3EE0
// Address: 0x3e3ee0 - 0x3e3fd0
void sub_003E3EE0_0x3e3ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3EE0_0x3e3ee0");
#endif

    switch (ctx->pc) {
        case 0x3e3f38u: goto label_3e3f38;
        case 0x3e3f44u: goto label_3e3f44;
        case 0x3e3f50u: goto label_3e3f50;
        case 0x3e3f68u: goto label_3e3f68;
        case 0x3e3f7cu: goto label_3e3f7c;
        case 0x3e3facu: goto label_3e3fac;
        default: break;
    }

    ctx->pc = 0x3e3ee0u;

    // 0x3e3ee0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3e3ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3e3ee4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e3ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3e3ee8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3e3ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3e3eec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e3eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3e3ef0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e3ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3e3ef4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e3ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3e3ef8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e3ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3e3efc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e3efcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3f00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e3f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e3f04: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3e3f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3e3f08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e3f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e3f0c: 0x8c633da0  lw          $v1, 0x3DA0($v1)
    ctx->pc = 0x3e3f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15776)));
    // 0x3e3f10: 0x8c52e360  lw          $s2, -0x1CA0($v0)
    ctx->pc = 0x3e3f10u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
    // 0x3e3f14: 0x24710084  addiu       $s1, $v1, 0x84
    ctx->pc = 0x3e3f14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
    // 0x3e3f18: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3e3f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x3e3f1c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3e3f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e3f20: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x3e3f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
    // 0x3e3f24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e3f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e3f28: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e3f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e3f2c: 0x8c540008  lw          $s4, 0x8($v0)
    ctx->pc = 0x3e3f2cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3e3f30: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x3E3F30u;
    SET_GPR_U32(ctx, 31, 0x3E3F38u);
    ctx->pc = 0x3E3F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3F30u;
            // 0x3e3f34: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3F38u; }
        if (ctx->pc != 0x3E3F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3F38u; }
        if (ctx->pc != 0x3E3F38u) { return; }
    }
    ctx->pc = 0x3E3F38u;
label_3e3f38:
    // 0x3e3f38: 0x26640310  addiu       $a0, $s3, 0x310
    ctx->pc = 0x3e3f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
    // 0x3e3f3c: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x3E3F3Cu;
    SET_GPR_U32(ctx, 31, 0x3E3F44u);
    ctx->pc = 0x3E3F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3F3Cu;
            // 0x3e3f40: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3F44u; }
        if (ctx->pc != 0x3E3F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3F44u; }
        if (ctx->pc != 0x3E3F44u) { return; }
    }
    ctx->pc = 0x3E3F44u;
label_3e3f44:
    // 0x3e3f44: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3e3f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3e3f48: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x3E3F48u;
    SET_GPR_U32(ctx, 31, 0x3E3F50u);
    ctx->pc = 0x3E3F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3F48u;
            // 0x3e3f4c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3F50u; }
        if (ctx->pc != 0x3E3F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3F50u; }
        if (ctx->pc != 0x3E3F50u) { return; }
    }
    ctx->pc = 0x3E3F50u;
label_3e3f50:
    // 0x3e3f50: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3e3f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e3f54: 0xc60c0284  lwc1        $f12, 0x284($s0)
    ctx->pc = 0x3e3f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e3f58: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3e3f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3f5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e3f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3f60: 0xc0528ec  jal         func_14A3B0
    ctx->pc = 0x3E3F60u;
    SET_GPR_U32(ctx, 31, 0x3E3F68u);
    ctx->pc = 0x3E3F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3F60u;
            // 0x3e3f64: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A3B0u;
    if (runtime->hasFunction(0x14A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3F68u; }
        if (ctx->pc != 0x3E3F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A3B0_0x14a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3F68u; }
        if (ctx->pc != 0x3E3F68u) { return; }
    }
    ctx->pc = 0x3E3F68u;
label_3e3f68:
    // 0x3e3f68: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3e3f68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3e3f6c: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x3e3f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x3e3f70: 0x26640300  addiu       $a0, $s3, 0x300
    ctx->pc = 0x3e3f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
    // 0x3e3f74: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3E3F74u;
    SET_GPR_U32(ctx, 31, 0x3E3F7Cu);
    ctx->pc = 0x3E3F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3F74u;
            // 0x3e3f78: 0x24c6a080  addiu       $a2, $a2, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3F7Cu; }
        if (ctx->pc != 0x3E3F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3F7Cu; }
        if (ctx->pc != 0x3E3F7Cu) { return; }
    }
    ctx->pc = 0x3E3F7Cu;
label_3e3f7c:
    // 0x3e3f7c: 0x8e630354  lw          $v1, 0x354($s3)
    ctx->pc = 0x3e3f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 852)));
    // 0x3e3f80: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3E3F80u;
    {
        const bool branch_taken_0x3e3f80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3f80) {
            ctx->pc = 0x3E3F84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3F80u;
            // 0x3e3f84: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E3FB4u;
            goto label_3e3fb4;
        }
    }
    ctx->pc = 0x3E3F88u;
    // 0x3e3f88: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e3f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3e3f8c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3e3f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e3f90: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3e3f90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x3e3f94: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x3e3f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x3e3f98: 0x26660310  addiu       $a2, $s3, 0x310
    ctx->pc = 0x3e3f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
    // 0x3e3f9c: 0x26670300  addiu       $a3, $s3, 0x300
    ctx->pc = 0x3e3f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
    // 0x3e3fa0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e3fa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3fa4: 0xc0bb0e8  jal         func_2EC3A0
    ctx->pc = 0x3E3FA4u;
    SET_GPR_U32(ctx, 31, 0x3E3FACu);
    ctx->pc = 0x3E3FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3FA4u;
            // 0x3e3fa8: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3FACu; }
        if (ctx->pc != 0x3E3FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E3FACu; }
        if (ctx->pc != 0x3E3FACu) { return; }
    }
    ctx->pc = 0x3E3FACu;
label_3e3fac:
    // 0x3e3fac: 0xae620354  sw          $v0, 0x354($s3)
    ctx->pc = 0x3e3facu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 852), GPR_U32(ctx, 2));
    // 0x3e3fb0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3e3fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3e3fb4:
    // 0x3e3fb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e3fb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e3fb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e3fb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e3fbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e3fbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e3fc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e3fc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e3fc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e3fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e3fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3FC8u;
            // 0x3e3fcc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E3FD0u;
}
