#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F7920
// Address: 0x2f7920 - 0x2f7ac0
void sub_002F7920_0x2f7920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7920_0x2f7920");
#endif

    switch (ctx->pc) {
        case 0x2f7920u: goto label_2f7920;
        case 0x2f7924u: goto label_2f7924;
        case 0x2f7928u: goto label_2f7928;
        case 0x2f792cu: goto label_2f792c;
        case 0x2f7930u: goto label_2f7930;
        case 0x2f7934u: goto label_2f7934;
        case 0x2f7938u: goto label_2f7938;
        case 0x2f793cu: goto label_2f793c;
        case 0x2f7940u: goto label_2f7940;
        case 0x2f7944u: goto label_2f7944;
        case 0x2f7948u: goto label_2f7948;
        case 0x2f794cu: goto label_2f794c;
        case 0x2f7950u: goto label_2f7950;
        case 0x2f7954u: goto label_2f7954;
        case 0x2f7958u: goto label_2f7958;
        case 0x2f795cu: goto label_2f795c;
        case 0x2f7960u: goto label_2f7960;
        case 0x2f7964u: goto label_2f7964;
        case 0x2f7968u: goto label_2f7968;
        case 0x2f796cu: goto label_2f796c;
        case 0x2f7970u: goto label_2f7970;
        case 0x2f7974u: goto label_2f7974;
        case 0x2f7978u: goto label_2f7978;
        case 0x2f797cu: goto label_2f797c;
        case 0x2f7980u: goto label_2f7980;
        case 0x2f7984u: goto label_2f7984;
        case 0x2f7988u: goto label_2f7988;
        case 0x2f798cu: goto label_2f798c;
        case 0x2f7990u: goto label_2f7990;
        case 0x2f7994u: goto label_2f7994;
        case 0x2f7998u: goto label_2f7998;
        case 0x2f799cu: goto label_2f799c;
        case 0x2f79a0u: goto label_2f79a0;
        case 0x2f79a4u: goto label_2f79a4;
        case 0x2f79a8u: goto label_2f79a8;
        case 0x2f79acu: goto label_2f79ac;
        case 0x2f79b0u: goto label_2f79b0;
        case 0x2f79b4u: goto label_2f79b4;
        case 0x2f79b8u: goto label_2f79b8;
        case 0x2f79bcu: goto label_2f79bc;
        case 0x2f79c0u: goto label_2f79c0;
        case 0x2f79c4u: goto label_2f79c4;
        case 0x2f79c8u: goto label_2f79c8;
        case 0x2f79ccu: goto label_2f79cc;
        case 0x2f79d0u: goto label_2f79d0;
        case 0x2f79d4u: goto label_2f79d4;
        case 0x2f79d8u: goto label_2f79d8;
        case 0x2f79dcu: goto label_2f79dc;
        case 0x2f79e0u: goto label_2f79e0;
        case 0x2f79e4u: goto label_2f79e4;
        case 0x2f79e8u: goto label_2f79e8;
        case 0x2f79ecu: goto label_2f79ec;
        case 0x2f79f0u: goto label_2f79f0;
        case 0x2f79f4u: goto label_2f79f4;
        case 0x2f79f8u: goto label_2f79f8;
        case 0x2f79fcu: goto label_2f79fc;
        case 0x2f7a00u: goto label_2f7a00;
        case 0x2f7a04u: goto label_2f7a04;
        case 0x2f7a08u: goto label_2f7a08;
        case 0x2f7a0cu: goto label_2f7a0c;
        case 0x2f7a10u: goto label_2f7a10;
        case 0x2f7a14u: goto label_2f7a14;
        case 0x2f7a18u: goto label_2f7a18;
        case 0x2f7a1cu: goto label_2f7a1c;
        case 0x2f7a20u: goto label_2f7a20;
        case 0x2f7a24u: goto label_2f7a24;
        case 0x2f7a28u: goto label_2f7a28;
        case 0x2f7a2cu: goto label_2f7a2c;
        case 0x2f7a30u: goto label_2f7a30;
        case 0x2f7a34u: goto label_2f7a34;
        case 0x2f7a38u: goto label_2f7a38;
        case 0x2f7a3cu: goto label_2f7a3c;
        case 0x2f7a40u: goto label_2f7a40;
        case 0x2f7a44u: goto label_2f7a44;
        case 0x2f7a48u: goto label_2f7a48;
        case 0x2f7a4cu: goto label_2f7a4c;
        case 0x2f7a50u: goto label_2f7a50;
        case 0x2f7a54u: goto label_2f7a54;
        case 0x2f7a58u: goto label_2f7a58;
        case 0x2f7a5cu: goto label_2f7a5c;
        case 0x2f7a60u: goto label_2f7a60;
        case 0x2f7a64u: goto label_2f7a64;
        case 0x2f7a68u: goto label_2f7a68;
        case 0x2f7a6cu: goto label_2f7a6c;
        case 0x2f7a70u: goto label_2f7a70;
        case 0x2f7a74u: goto label_2f7a74;
        case 0x2f7a78u: goto label_2f7a78;
        case 0x2f7a7cu: goto label_2f7a7c;
        case 0x2f7a80u: goto label_2f7a80;
        case 0x2f7a84u: goto label_2f7a84;
        case 0x2f7a88u: goto label_2f7a88;
        case 0x2f7a8cu: goto label_2f7a8c;
        case 0x2f7a90u: goto label_2f7a90;
        case 0x2f7a94u: goto label_2f7a94;
        case 0x2f7a98u: goto label_2f7a98;
        case 0x2f7a9cu: goto label_2f7a9c;
        case 0x2f7aa0u: goto label_2f7aa0;
        case 0x2f7aa4u: goto label_2f7aa4;
        case 0x2f7aa8u: goto label_2f7aa8;
        case 0x2f7aacu: goto label_2f7aac;
        case 0x2f7ab0u: goto label_2f7ab0;
        case 0x2f7ab4u: goto label_2f7ab4;
        case 0x2f7ab8u: goto label_2f7ab8;
        case 0x2f7abcu: goto label_2f7abc;
        default: break;
    }

    ctx->pc = 0x2f7920u;

label_2f7920:
    // 0x2f7920: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f7920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2f7924:
    // 0x2f7924: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f7924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7928:
    // 0x2f7928: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f7928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2f792c:
    // 0x2f792c: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x2f792cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_2f7930:
    // 0x2f7930: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2f7930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2f7934:
    // 0x2f7934: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2f7934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2f7938:
    // 0x2f7938: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f7938u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f793c:
    // 0x2f793c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f793cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2f7940:
    // 0x2f7940: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f7940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2f7944:
    // 0x2f7944: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f7944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2f7948:
    // 0x2f7948: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2f7948u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2f794c:
    // 0x2f794c: 0x8c900104  lw          $s0, 0x104($a0)
    ctx->pc = 0x2f794cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_2f7950:
    // 0x2f7950: 0xc04a576  jal         func_1295D8
label_2f7954:
    if (ctx->pc == 0x2F7954u) {
        ctx->pc = 0x2F7954u;
            // 0x2f7954: 0x268400e8  addiu       $a0, $s4, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 232));
        ctx->pc = 0x2F7958u;
        goto label_2f7958;
    }
    ctx->pc = 0x2F7950u;
    SET_GPR_U32(ctx, 31, 0x2F7958u);
    ctx->pc = 0x2F7954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7950u;
            // 0x2f7954: 0x268400e8  addiu       $a0, $s4, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7958u; }
        if (ctx->pc != 0x2F7958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7958u; }
        if (ctx->pc != 0x2F7958u) { return; }
    }
    ctx->pc = 0x2F7958u;
label_2f7958:
    // 0x2f7958: 0xae900104  sw          $s0, 0x104($s4)
    ctx->pc = 0x2f7958u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 260), GPR_U32(ctx, 16));
label_2f795c:
    // 0x2f795c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2f795cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2f7960:
    // 0x2f7960: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x2f7960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_2f7964:
    // 0x2f7964: 0x8e900054  lw          $s0, 0x54($s4)
    ctx->pc = 0x2f7964u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_2f7968:
    // 0x2f7968: 0x8e8200c8  lw          $v0, 0xC8($s4)
    ctx->pc = 0x2f7968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
label_2f796c:
    // 0x2f796c: 0xc4740018  lwc1        $f20, 0x18($v1)
    ctx->pc = 0x2f796cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f7970:
    // 0x2f7970: 0x8c420a68  lw          $v0, 0xA68($v0)
    ctx->pc = 0x2f7970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2664)));
label_2f7974:
    // 0x2f7974: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2f7978:
    if (ctx->pc == 0x2F7978u) {
        ctx->pc = 0x2F7978u;
            // 0x2f7978: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F797Cu;
        goto label_2f797c;
    }
    ctx->pc = 0x2F7974u;
    {
        const bool branch_taken_0x2f7974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7974u;
            // 0x2f7978: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7974) {
            ctx->pc = 0x2F7988u;
            goto label_2f7988;
        }
    }
    ctx->pc = 0x2F797Cu;
label_2f797c:
    // 0x2f797c: 0x8e8200cc  lw          $v0, 0xCC($s4)
    ctx->pc = 0x2f797cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
label_2f7980:
    // 0x2f7980: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2f7984:
    if (ctx->pc == 0x2F7984u) {
        ctx->pc = 0x2F7984u;
            // 0x2f7984: 0x928200d8  lbu         $v0, 0xD8($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 216)));
        ctx->pc = 0x2F7988u;
        goto label_2f7988;
    }
    ctx->pc = 0x2F7980u;
    {
        const bool branch_taken_0x2f7980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7980) {
            ctx->pc = 0x2F7984u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7980u;
            // 0x2f7984: 0x928200d8  lbu         $v0, 0xD8($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F79A0u;
            goto label_2f79a0;
        }
    }
    ctx->pc = 0x2F7988u;
label_2f7988:
    // 0x2f7988: 0x2602ffcf  addiu       $v0, $s0, -0x31
    ctx->pc = 0x2f7988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967247));
label_2f798c:
    // 0x2f798c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2f798cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2f7990:
    // 0x2f7990: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2f7994:
    if (ctx->pc == 0x2F7994u) {
        ctx->pc = 0x2F7998u;
        goto label_2f7998;
    }
    ctx->pc = 0x2F7990u;
    {
        const bool branch_taken_0x2f7990 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7990) {
            ctx->pc = 0x2F799Cu;
            goto label_2f799c;
        }
    }
    ctx->pc = 0x2F7998u;
label_2f7998:
    // 0x2f7998: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x2f7998u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2f799c:
    // 0x2f799c: 0x928200d8  lbu         $v0, 0xD8($s4)
    ctx->pc = 0x2f799cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 216)));
label_2f79a0:
    // 0x2f79a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f79a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2f79a4:
    // 0x2f79a4: 0xa2820108  sb          $v0, 0x108($s4)
    ctx->pc = 0x2f79a4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 264), (uint8_t)GPR_U32(ctx, 2));
label_2f79a8:
    // 0x2f79a8: 0x928200d8  lbu         $v0, 0xD8($s4)
    ctx->pc = 0x2f79a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 216)));
label_2f79ac:
    // 0x2f79ac: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x2f79acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2f79b0:
    // 0x2f79b0: 0x14200037  bnez        $at, . + 4 + (0x37 << 2)
label_2f79b4:
    if (ctx->pc == 0x2F79B4u) {
        ctx->pc = 0x2F79B4u;
            // 0x2f79b4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F79B8u;
        goto label_2f79b8;
    }
    ctx->pc = 0x2F79B0u;
    {
        const bool branch_taken_0x2f79b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F79B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F79B0u;
            // 0x2f79b4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f79b0) {
            ctx->pc = 0x2F7A90u;
            goto label_2f7a90;
        }
    }
    ctx->pc = 0x2F79B8u;
label_2f79b8:
    // 0x2f79b8: 0x26910004  addiu       $s1, $s4, 0x4
    ctx->pc = 0x2f79b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_2f79bc:
    // 0x2f79bc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2f79bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2f79c0:
    // 0x2f79c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f79c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f79c4:
    // 0x2f79c4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2f79c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2f79c8:
    // 0x2f79c8: 0x320f809  jalr        $t9
label_2f79cc:
    if (ctx->pc == 0x2F79CCu) {
        ctx->pc = 0x2F79D0u;
        goto label_2f79d0;
    }
    ctx->pc = 0x2F79C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F79D0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F79D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F79D0u; }
            if (ctx->pc != 0x2F79D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2F79D0u;
label_2f79d0:
    // 0x2f79d0: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x2f79d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
label_2f79d4:
    // 0x2f79d4: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x2f79d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_2f79d8:
    // 0x2f79d8: 0x90620018  lbu         $v0, 0x18($v1)
    ctx->pc = 0x2f79d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_2f79dc:
    // 0x2f79dc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_2f79e0:
    if (ctx->pc == 0x2F79E0u) {
        ctx->pc = 0x2F79E4u;
        goto label_2f79e4;
    }
    ctx->pc = 0x2F79DCu;
    {
        const bool branch_taken_0x2f79dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f79dc) {
            ctx->pc = 0x2F7A40u;
            goto label_2f7a40;
        }
    }
    ctx->pc = 0x2F79E4u;
label_2f79e4:
    // 0x2f79e4: 0x9062001c  lbu         $v0, 0x1C($v1)
    ctx->pc = 0x2f79e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_2f79e8:
    // 0x2f79e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f79ec:
    if (ctx->pc == 0x2F79ECu) {
        ctx->pc = 0x2F79F0u;
        goto label_2f79f0;
    }
    ctx->pc = 0x2F79E8u;
    {
        const bool branch_taken_0x2f79e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f79e8) {
            ctx->pc = 0x2F7A00u;
            goto label_2f7a00;
        }
    }
    ctx->pc = 0x2F79F0u;
label_2f79f0:
    // 0x2f79f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f79f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f79f4:
    // 0x2f79f4: 0x10000020  b           . + 4 + (0x20 << 2)
label_2f79f8:
    if (ctx->pc == 0x2F79F8u) {
        ctx->pc = 0x2F79F8u;
            // 0x2f79f8: 0xae2200e4  sw          $v0, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 2));
        ctx->pc = 0x2F79FCu;
        goto label_2f79fc;
    }
    ctx->pc = 0x2F79F4u;
    {
        const bool branch_taken_0x2f79f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F79F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F79F4u;
            // 0x2f79f8: 0xae2200e4  sw          $v0, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f79f4) {
            ctx->pc = 0x2F7A78u;
            goto label_2f7a78;
        }
    }
    ctx->pc = 0x2F79FCu;
label_2f79fc:
    // 0x2f79fc: 0x0  nop
    ctx->pc = 0x2f79fcu;
    // NOP
label_2f7a00:
    // 0x2f7a00: 0x1260001d  beqz        $s3, . + 4 + (0x1D << 2)
label_2f7a04:
    if (ctx->pc == 0x2F7A04u) {
        ctx->pc = 0x2F7A04u;
            // 0x2f7a04: 0xae2000e4  sw          $zero, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
        ctx->pc = 0x2F7A08u;
        goto label_2f7a08;
    }
    ctx->pc = 0x2F7A00u;
    {
        const bool branch_taken_0x2f7a00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7A00u;
            // 0x2f7a04: 0xae2000e4  sw          $zero, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a00) {
            ctx->pc = 0x2F7A78u;
            goto label_2f7a78;
        }
    }
    ctx->pc = 0x2F7A08u;
label_2f7a08:
    // 0x2f7a08: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2f7a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_2f7a0c:
    // 0x2f7a0c: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_2f7a10:
    if (ctx->pc == 0x2F7A10u) {
        ctx->pc = 0x2F7A10u;
            // 0x2f7a10: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x2F7A14u;
        goto label_2f7a14;
    }
    ctx->pc = 0x2F7A0Cu;
    {
        const bool branch_taken_0x2f7a0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F7A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7A0Cu;
            // 0x2f7a10: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a0c) {
            ctx->pc = 0x2F7A30u;
            goto label_2f7a30;
        }
    }
    ctx->pc = 0x2F7A14u;
label_2f7a14:
    // 0x2f7a14: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2f7a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_2f7a18:
    // 0x2f7a18: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_2f7a1c:
    if (ctx->pc == 0x2F7A1Cu) {
        ctx->pc = 0x2F7A20u;
        goto label_2f7a20;
    }
    ctx->pc = 0x2F7A18u;
    {
        const bool branch_taken_0x2f7a18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f7a18) {
            ctx->pc = 0x2F7A28u;
            goto label_2f7a28;
        }
    }
    ctx->pc = 0x2F7A20u;
label_2f7a20:
    // 0x2f7a20: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f7a24:
    if (ctx->pc == 0x2F7A24u) {
        ctx->pc = 0x2F7A28u;
        goto label_2f7a28;
    }
    ctx->pc = 0x2F7A20u;
    {
        const bool branch_taken_0x2f7a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7a20) {
            ctx->pc = 0x2F7A38u;
            goto label_2f7a38;
        }
    }
    ctx->pc = 0x2F7A28u;
label_2f7a28:
    // 0x2f7a28: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f7a2c:
    if (ctx->pc == 0x2F7A2Cu) {
        ctx->pc = 0x2F7A2Cu;
            // 0x2f7a2c: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x2F7A30u;
        goto label_2f7a30;
    }
    ctx->pc = 0x2F7A28u;
    {
        const bool branch_taken_0x2f7a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7A28u;
            // 0x2f7a2c: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a28) {
            ctx->pc = 0x2F7A38u;
            goto label_2f7a38;
        }
    }
    ctx->pc = 0x2F7A30u;
label_2f7a30:
    // 0x2f7a30: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2f7a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2f7a34:
    // 0x2f7a34: 0x0  nop
    ctx->pc = 0x2f7a34u;
    // NOP
label_2f7a38:
    // 0x2f7a38: 0x1000000f  b           . + 4 + (0xF << 2)
label_2f7a3c:
    if (ctx->pc == 0x2F7A3Cu) {
        ctx->pc = 0x2F7A3Cu;
            // 0x2f7a3c: 0xae2300f0  sw          $v1, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
        ctx->pc = 0x2F7A40u;
        goto label_2f7a40;
    }
    ctx->pc = 0x2F7A38u;
    {
        const bool branch_taken_0x2f7a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7A38u;
            // 0x2f7a3c: 0xae2300f0  sw          $v1, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a38) {
            ctx->pc = 0x2F7A78u;
            goto label_2f7a78;
        }
    }
    ctx->pc = 0x2F7A40u;
label_2f7a40:
    // 0x2f7a40: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x2f7a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f7a44:
    // 0x2f7a44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f7a44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f7a48:
    // 0x2f7a48: 0x0  nop
    ctx->pc = 0x2f7a48u;
    // NOP
label_2f7a4c:
    // 0x2f7a4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f7a4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f7a50:
    // 0x2f7a50: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2f7a54:
    if (ctx->pc == 0x2F7A54u) {
        ctx->pc = 0x2F7A58u;
        goto label_2f7a58;
    }
    ctx->pc = 0x2F7A50u;
    {
        const bool branch_taken_0x2f7a50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f7a50) {
            ctx->pc = 0x2F7A68u;
            goto label_2f7a68;
        }
    }
    ctx->pc = 0x2F7A58u;
label_2f7a58:
    // 0x2f7a58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f7a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f7a5c:
    // 0x2f7a5c: 0x10000006  b           . + 4 + (0x6 << 2)
label_2f7a60:
    if (ctx->pc == 0x2F7A60u) {
        ctx->pc = 0x2F7A60u;
            // 0x2f7a60: 0xae2200e4  sw          $v0, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 2));
        ctx->pc = 0x2F7A64u;
        goto label_2f7a64;
    }
    ctx->pc = 0x2F7A5Cu;
    {
        const bool branch_taken_0x2f7a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7A5Cu;
            // 0x2f7a60: 0xae2200e4  sw          $v0, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a5c) {
            ctx->pc = 0x2F7A78u;
            goto label_2f7a78;
        }
    }
    ctx->pc = 0x2F7A64u;
label_2f7a64:
    // 0x2f7a64: 0x0  nop
    ctx->pc = 0x2f7a64u;
    // NOP
label_2f7a68:
    // 0x2f7a68: 0x46140801  sub.s       $f0, $f1, $f20
    ctx->pc = 0x2f7a68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_2f7a6c:
    // 0x2f7a6c: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x2f7a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_2f7a70:
    // 0x2f7a70: 0xae2000e4  sw          $zero, 0xE4($s1)
    ctx->pc = 0x2f7a70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
label_2f7a74:
    // 0x2f7a74: 0x0  nop
    ctx->pc = 0x2f7a74u;
    // NOP
label_2f7a78:
    // 0x2f7a78: 0x928200d8  lbu         $v0, 0xD8($s4)
    ctx->pc = 0x2f7a78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 216)));
label_2f7a7c:
    // 0x2f7a7c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f7a7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2f7a80:
    // 0x2f7a80: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2f7a80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2f7a84:
    // 0x2f7a84: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_2f7a88:
    if (ctx->pc == 0x2F7A88u) {
        ctx->pc = 0x2F7A88u;
            // 0x2f7a88: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x2F7A8Cu;
        goto label_2f7a8c;
    }
    ctx->pc = 0x2F7A84u;
    {
        const bool branch_taken_0x2f7a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7A84u;
            // 0x2f7a88: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a84) {
            ctx->pc = 0x2F79BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f79bc;
        }
    }
    ctx->pc = 0x2F7A8Cu;
label_2f7a8c:
    // 0x2f7a8c: 0x0  nop
    ctx->pc = 0x2f7a8cu;
    // NOP
label_2f7a90:
    // 0x2f7a90: 0xc0be0b4  jal         func_2F82D0
label_2f7a94:
    if (ctx->pc == 0x2F7A94u) {
        ctx->pc = 0x2F7A94u;
            // 0x2f7a94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7A98u;
        goto label_2f7a98;
    }
    ctx->pc = 0x2F7A90u;
    SET_GPR_U32(ctx, 31, 0x2F7A98u);
    ctx->pc = 0x2F7A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7A90u;
            // 0x2f7a94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F82D0u;
    if (runtime->hasFunction(0x2F82D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F82D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7A98u; }
        if (ctx->pc != 0x2F7A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F82D0_0x2f82d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7A98u; }
        if (ctx->pc != 0x2F7A98u) { return; }
    }
    ctx->pc = 0x2F7A98u;
label_2f7a98:
    // 0x2f7a98: 0xae820100  sw          $v0, 0x100($s4)
    ctx->pc = 0x2f7a98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 256), GPR_U32(ctx, 2));
label_2f7a9c:
    // 0x2f7a9c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f7a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2f7aa0:
    // 0x2f7aa0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2f7aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f7aa4:
    // 0x2f7aa4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2f7aa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f7aa8:
    // 0x2f7aa8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f7aa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f7aac:
    // 0x2f7aac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f7aacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f7ab0:
    // 0x2f7ab0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f7ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f7ab4:
    // 0x2f7ab4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f7ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f7ab8:
    // 0x2f7ab8: 0x3e00008  jr          $ra
label_2f7abc:
    if (ctx->pc == 0x2F7ABCu) {
        ctx->pc = 0x2F7ABCu;
            // 0x2f7abc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2F7AC0u;
        goto label_fallthrough_0x2f7ab8;
    }
    ctx->pc = 0x2F7AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7AB8u;
            // 0x2f7abc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2f7ab8:
    ctx->pc = 0x2F7AC0u;
}
