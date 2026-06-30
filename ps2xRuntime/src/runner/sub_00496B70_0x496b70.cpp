#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00496B70
// Address: 0x496b70 - 0x497100
void sub_00496B70_0x496b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00496B70_0x496b70");
#endif

    switch (ctx->pc) {
        case 0x496becu: goto label_496bec;
        case 0x496bf4u: goto label_496bf4;
        case 0x496c60u: goto label_496c60;
        case 0x496cccu: goto label_496ccc;
        case 0x496d4cu: goto label_496d4c;
        case 0x496df0u: goto label_496df0;
        case 0x496e40u: goto label_496e40;
        case 0x496eb8u: goto label_496eb8;
        case 0x496ef8u: goto label_496ef8;
        case 0x496f1cu: goto label_496f1c;
        case 0x496f24u: goto label_496f24;
        case 0x496f4cu: goto label_496f4c;
        case 0x496fb8u: goto label_496fb8;
        case 0x49701cu: goto label_49701c;
        case 0x4970c8u: goto label_4970c8;
        case 0x4970dcu: goto label_4970dc;
        default: break;
    }

    ctx->pc = 0x496b70u;

    // 0x496b70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x496b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x496b74: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x496b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x496b78: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x496b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x496b7c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x496b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x496b80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x496b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x496b84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x496b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x496b88: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x496b88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496b8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x496b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x496b90: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x496b90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496b94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x496b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x496b98: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x496b98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496b9c: 0x1220014f  beqz        $s1, . + 4 + (0x14F << 2)
    ctx->pc = 0x496B9Cu;
    {
        const bool branch_taken_0x496b9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x496BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496B9Cu;
            // 0x496ba0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496b9c) {
            ctx->pc = 0x4970DCu;
            goto label_4970dc;
        }
    }
    ctx->pc = 0x496BA4u;
    // 0x496ba4: 0x3c010924  lui         $at, 0x924
    ctx->pc = 0x496ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2340 << 16));
    // 0x496ba8: 0x3421924a  ori         $at, $at, 0x924A
    ctx->pc = 0x496ba8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37450);
    // 0x496bac: 0x221082b  sltu        $at, $s1, $at
    ctx->pc = 0x496bacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x496bb0: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x496BB0u;
    {
        const bool branch_taken_0x496bb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x496bb0) {
            ctx->pc = 0x496BD4u;
            goto label_496bd4;
        }
    }
    ctx->pc = 0x496BB8u;
    // 0x496bb8: 0x3c030924  lui         $v1, 0x924
    ctx->pc = 0x496bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2340 << 16));
    // 0x496bbc: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x496bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x496bc0: 0x34639249  ori         $v1, $v1, 0x9249
    ctx->pc = 0x496bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37449);
    // 0x496bc4: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x496bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x496bc8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x496bc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x496bcc: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x496BCCu;
    {
        const bool branch_taken_0x496bcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x496bcc) {
            ctx->pc = 0x496BD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x496BCCu;
            // 0x496bd0: 0x8e660004  lw          $a2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x496BF8u;
            goto label_496bf8;
        }
    }
    ctx->pc = 0x496BD4u;
label_496bd4:
    // 0x496bd4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x496bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x496bd8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x496bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x496bdc: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x496bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x496be0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x496be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x496be4: 0xc049e92  jal         func_127A48
    ctx->pc = 0x496BE4u;
    SET_GPR_U32(ctx, 31, 0x496BECu);
    ctx->pc = 0x496BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x496BE4u;
            // 0x496be8: 0x24a50910  addiu       $a1, $a1, 0x910 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x496BECu; }
        if (ctx->pc != 0x496BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x496BECu; }
        if (ctx->pc != 0x496BECu) { return; }
    }
    ctx->pc = 0x496BECu;
label_496bec:
    // 0x496bec: 0xc04981a  jal         func_126068
    ctx->pc = 0x496BECu;
    SET_GPR_U32(ctx, 31, 0x496BF4u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x496BF4u; }
        if (ctx->pc != 0x496BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x496BF4u; }
        if (ctx->pc != 0x496BF4u) { return; }
    }
    ctx->pc = 0x496BF4u;
label_496bf4:
    // 0x496bf4: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x496bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_496bf8:
    // 0x496bf8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x496bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x496bfc: 0xd12021  addu        $a0, $a2, $s1
    ctx->pc = 0x496bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x496c00: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x496c00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x496c04: 0x542000a1  bnel        $at, $zero, . + 4 + (0xA1 << 2)
    ctx->pc = 0x496C04u;
    {
        const bool branch_taken_0x496c04 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x496c04) {
            ctx->pc = 0x496C08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x496C04u;
            // 0x496c08: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x496E8Cu;
            goto label_496e8c;
        }
    }
    ctx->pc = 0x496C0Cu;
    // 0x496c0c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x496c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x496c10: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x496c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x496c14: 0x662023  subu        $a0, $v1, $a2
    ctx->pc = 0x496c14u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x496c18: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x496c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
    // 0x496c1c: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x496c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x496c20: 0x34642493  ori         $a0, $v1, 0x2493
    ctx->pc = 0x496c20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
    // 0x496c24: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x496c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x496c28: 0x723023  subu        $a2, $v1, $s2
    ctx->pc = 0x496c28u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x496c2c: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x496c2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x496c30: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x496c30u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x496c34: 0x0  nop
    ctx->pc = 0x496c34u;
    // NOP
    // 0x496c38: 0x2010  mfhi        $a0
    ctx->pc = 0x496c38u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x496c3c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x496c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x496c40: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x496c40u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x496c44: 0x853821  addu        $a3, $a0, $a1
    ctx->pc = 0x496c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x496c48: 0xf1082b  sltu        $at, $a3, $s1
    ctx->pc = 0x496c48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x496c4c: 0x50200039  beql        $at, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x496C4Cu;
    {
        const bool branch_taken_0x496c4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x496c4c) {
            ctx->pc = 0x496C50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x496C4Cu;
            // 0x496c50: 0x1120c0  sll         $a0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x496D34u;
            goto label_496d34;
        }
    }
    ctx->pc = 0x496C54u;
    // 0x496c54: 0xf1082b  sltu        $at, $a3, $s1
    ctx->pc = 0x496c54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x496c58: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x496C58u;
    {
        const bool branch_taken_0x496c58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x496C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496C58u;
            // 0x496c5c: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496c58) {
            ctx->pc = 0x496CC0u;
            goto label_496cc0;
        }
    }
    ctx->pc = 0x496C60u;
label_496c60:
    // 0x496c60: 0x1100000f  beqz        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x496C60u;
    {
        const bool branch_taken_0x496c60 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x496c60) {
            ctx->pc = 0x496CA0u;
            goto label_496ca0;
        }
    }
    ctx->pc = 0x496C68u;
    // 0x496c68: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x496c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x496c6c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x496c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x496c70: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x496c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x496c74: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x496c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x496c78: 0xe5030000  swc1        $f3, 0x0($t0)
    ctx->pc = 0x496c78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x496c7c: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x496c7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x496c80: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x496c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x496c84: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x496c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x496c88: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x496c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x496c8c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x496c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x496c90: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x496c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x496c94: 0xe5020010  swc1        $f2, 0x10($t0)
    ctx->pc = 0x496c94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x496c98: 0xe5010014  swc1        $f1, 0x14($t0)
    ctx->pc = 0x496c98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x496c9c: 0xe5000018  swc1        $f0, 0x18($t0)
    ctx->pc = 0x496c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
label_496ca0:
    // 0x496ca0: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x496ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x496ca4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x496ca4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x496ca8: 0x2508001c  addiu       $t0, $t0, 0x1C
    ctx->pc = 0x496ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
    // 0x496cac: 0xf1082b  sltu        $at, $a3, $s1
    ctx->pc = 0x496cacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x496cb0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x496cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x496cb4: 0x1420ffea  bnez        $at, . + 4 + (-0x16 << 2)
    ctx->pc = 0x496CB4u;
    {
        const bool branch_taken_0x496cb4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x496CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496CB4u;
            // 0x496cb8: 0xae640004  sw          $a0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496cb4) {
            ctx->pc = 0x496C60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_496c60;
        }
    }
    ctx->pc = 0x496CBCu;
    // 0x496cbc: 0x0  nop
    ctx->pc = 0x496cbcu;
    // NOP
label_496cc0:
    // 0x496cc0: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x496cc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x496cc4: 0x1020005c  beqz        $at, . + 4 + (0x5C << 2)
    ctx->pc = 0x496CC4u;
    {
        const bool branch_taken_0x496cc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x496CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496CC4u;
            // 0x496cc8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496cc4) {
            ctx->pc = 0x496E38u;
            goto label_496e38;
        }
    }
    ctx->pc = 0x496CCCu;
label_496ccc:
    // 0x496ccc: 0x11000010  beqz        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x496CCCu;
    {
        const bool branch_taken_0x496ccc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x496ccc) {
            ctx->pc = 0x496D10u;
            goto label_496d10;
        }
    }
    ctx->pc = 0x496CD4u;
    // 0x496cd4: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x496cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x496cd8: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x496cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x496cdc: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x496cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x496ce0: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x496ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x496ce4: 0xe5030000  swc1        $f3, 0x0($t0)
    ctx->pc = 0x496ce4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x496ce8: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x496ce8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x496cec: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x496cecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x496cf0: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x496cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x496cf4: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x496cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x496cf8: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x496cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x496cfc: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x496cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x496d00: 0xe5020010  swc1        $f2, 0x10($t0)
    ctx->pc = 0x496d00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x496d04: 0xe5010014  swc1        $f1, 0x14($t0)
    ctx->pc = 0x496d04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x496d08: 0xe5000018  swc1        $f0, 0x18($t0)
    ctx->pc = 0x496d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x496d0c: 0x0  nop
    ctx->pc = 0x496d0cu;
    // NOP
label_496d10:
    // 0x496d10: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x496d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x496d14: 0x24c6001c  addiu       $a2, $a2, 0x1C
    ctx->pc = 0x496d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
    // 0x496d18: 0x2508001c  addiu       $t0, $t0, 0x1C
    ctx->pc = 0x496d18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
    // 0x496d1c: 0xc3202b  sltu        $a0, $a2, $v1
    ctx->pc = 0x496d1cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x496d20: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x496d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x496d24: 0x1480ffe9  bnez        $a0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x496D24u;
    {
        const bool branch_taken_0x496d24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x496D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496D24u;
            // 0x496d28: 0xae650004  sw          $a1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496d24) {
            ctx->pc = 0x496CCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_496ccc;
        }
    }
    ctx->pc = 0x496D2Cu;
    // 0x496d2c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x496D2Cu;
    {
        const bool branch_taken_0x496d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496d2c) {
            ctx->pc = 0x496E38u;
            goto label_496e38;
        }
    }
    ctx->pc = 0x496D34u;
label_496d34:
    // 0x496d34: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x496d34u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x496d38: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x496d38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x496d3c: 0x664823  subu        $t1, $v1, $a2
    ctx->pc = 0x496d3cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x496d40: 0x123082b  sltu        $at, $t1, $v1
    ctx->pc = 0x496d40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x496d44: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x496D44u;
    {
        const bool branch_taken_0x496d44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x496D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496D44u;
            // 0x496d48: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496d44) {
            ctx->pc = 0x496DB0u;
            goto label_496db0;
        }
    }
    ctx->pc = 0x496D4Cu;
label_496d4c:
    // 0x496d4c: 0x11000010  beqz        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x496D4Cu;
    {
        const bool branch_taken_0x496d4c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x496d4c) {
            ctx->pc = 0x496D90u;
            goto label_496d90;
        }
    }
    ctx->pc = 0x496D54u;
    // 0x496d54: 0xc5230000  lwc1        $f3, 0x0($t1)
    ctx->pc = 0x496d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x496d58: 0xc5220004  lwc1        $f2, 0x4($t1)
    ctx->pc = 0x496d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x496d5c: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x496d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x496d60: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x496d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x496d64: 0xe5030000  swc1        $f3, 0x0($t0)
    ctx->pc = 0x496d64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x496d68: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x496d68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x496d6c: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x496d6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x496d70: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x496d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x496d74: 0xc5220010  lwc1        $f2, 0x10($t1)
    ctx->pc = 0x496d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x496d78: 0xc5210014  lwc1        $f1, 0x14($t1)
    ctx->pc = 0x496d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x496d7c: 0xc5200018  lwc1        $f0, 0x18($t1)
    ctx->pc = 0x496d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x496d80: 0xe5020010  swc1        $f2, 0x10($t0)
    ctx->pc = 0x496d80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x496d84: 0xe5010014  swc1        $f1, 0x14($t0)
    ctx->pc = 0x496d84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x496d88: 0xe5000018  swc1        $f0, 0x18($t0)
    ctx->pc = 0x496d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x496d8c: 0x0  nop
    ctx->pc = 0x496d8cu;
    // NOP
label_496d90:
    // 0x496d90: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x496d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x496d94: 0x2529001c  addiu       $t1, $t1, 0x1C
    ctx->pc = 0x496d94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 28));
    // 0x496d98: 0x2508001c  addiu       $t0, $t0, 0x1C
    ctx->pc = 0x496d98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
    // 0x496d9c: 0x123202b  sltu        $a0, $t1, $v1
    ctx->pc = 0x496d9cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x496da0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x496da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x496da4: 0x1480ffe9  bnez        $a0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x496DA4u;
    {
        const bool branch_taken_0x496da4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x496DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496DA4u;
            // 0x496da8: 0xae650004  sw          $a1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496da4) {
            ctx->pc = 0x496D4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_496d4c;
        }
    }
    ctx->pc = 0x496DACu;
    // 0x496dac: 0x0  nop
    ctx->pc = 0x496dacu;
    // NOP
label_496db0:
    // 0x496db0: 0xf12823  subu        $a1, $a3, $s1
    ctx->pc = 0x496db0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x496db4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x496db4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x496db8: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x496db8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x496dbc: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x496dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x496dc0: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x496dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x496dc4: 0x204082b  sltu        $at, $s0, $a0
    ctx->pc = 0x496dc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x496dc8: 0x54200006  bnel        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x496DC8u;
    {
        const bool branch_taken_0x496dc8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x496dc8) {
            ctx->pc = 0x496DCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x496DC8u;
            // 0x496dcc: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x496DE4u;
            goto label_496de4;
        }
    }
    ctx->pc = 0x496DD0u;
    // 0x496dd0: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x496dd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x496dd4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x496DD4u;
    {
        const bool branch_taken_0x496dd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x496dd4) {
            ctx->pc = 0x496DE0u;
            goto label_496de0;
        }
    }
    ctx->pc = 0x496DDCu;
    // 0x496ddc: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x496ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_496de0:
    // 0x496de0: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x496de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_496de4:
    // 0x496de4: 0x245082b  sltu        $at, $s2, $a1
    ctx->pc = 0x496de4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x496de8: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x496DE8u;
    {
        const bool branch_taken_0x496de8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x496de8) {
            ctx->pc = 0x496E38u;
            goto label_496e38;
        }
    }
    ctx->pc = 0x496DF0u;
label_496df0:
    // 0x496df0: 0x24a5ffe4  addiu       $a1, $a1, -0x1C
    ctx->pc = 0x496df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967268));
    // 0x496df4: 0x2463ffe4  addiu       $v1, $v1, -0x1C
    ctx->pc = 0x496df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967268));
    // 0x496df8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x496df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x496dfc: 0x245082b  sltu        $at, $s2, $a1
    ctx->pc = 0x496dfcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x496e00: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x496e00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x496e04: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x496e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x496e08: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x496e08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x496e0c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x496e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x496e10: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x496e10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x496e14: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x496e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x496e18: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x496e18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x496e1c: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x496e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x496e20: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x496e20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x496e24: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x496e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x496e28: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x496e28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x496e2c: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x496e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x496e30: 0x1420ffef  bnez        $at, . + 4 + (-0x11 << 2)
    ctx->pc = 0x496E30u;
    {
        const bool branch_taken_0x496e30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x496E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496E30u;
            // 0x496e34: 0xac640018  sw          $a0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496e30) {
            ctx->pc = 0x496DF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_496df0;
        }
    }
    ctx->pc = 0x496E38u;
label_496e38:
    // 0x496e38: 0x522000a9  beql        $s1, $zero, . + 4 + (0xA9 << 2)
    ctx->pc = 0x496E38u;
    {
        const bool branch_taken_0x496e38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x496e38) {
            ctx->pc = 0x496E3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x496E38u;
            // 0x496e3c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4970E0u;
            goto label_4970e0;
        }
    }
    ctx->pc = 0x496E40u;
label_496e40:
    // 0x496e40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x496e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x496e44: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x496e44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x496e48: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x496e48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x496e4c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x496e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x496e50: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x496e50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x496e54: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x496e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x496e58: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x496e58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x496e5c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x496e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x496e60: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x496e60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x496e64: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x496e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x496e68: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x496e68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x496e6c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x496e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x496e70: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x496e70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x496e74: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x496e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x496e78: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x496e78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    // 0x496e7c: 0x1620fff0  bnez        $s1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x496E7Cu;
    {
        const bool branch_taken_0x496e7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x496E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496E7Cu;
            // 0x496e80: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496e7c) {
            ctx->pc = 0x496E40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_496e40;
        }
    }
    ctx->pc = 0x496E84u;
    // 0x496e84: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x496E84u;
    {
        const bool branch_taken_0x496e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x496e84) {
            ctx->pc = 0x4970DCu;
            goto label_4970dc;
        }
    }
    ctx->pc = 0x496E8Cu;
label_496e8c:
    // 0x496e8c: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x496e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x496e90: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x496e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x496e94: 0x8e750000  lw          $s5, 0x0($s3)
    ctx->pc = 0x496e94u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x496e98: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x496E98u;
    {
        const bool branch_taken_0x496e98 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x496e98) {
            ctx->pc = 0x496E9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x496E98u;
            // 0x496e9c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x496EA0u;
            goto label_496ea0;
        }
    }
    ctx->pc = 0x496EA0u;
label_496ea0:
    // 0x496ea0: 0x2a4082b  sltu        $at, $s5, $a0
    ctx->pc = 0x496ea0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x496ea4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x496EA4u;
    {
        const bool branch_taken_0x496ea4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x496ea4) {
            ctx->pc = 0x496EE8u;
            goto label_496ee8;
        }
    }
    ctx->pc = 0x496EACu;
    // 0x496eac: 0x3c020924  lui         $v0, 0x924
    ctx->pc = 0x496eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2340 << 16));
    // 0x496eb0: 0x34429249  ori         $v0, $v0, 0x9249
    ctx->pc = 0x496eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37449);
    // 0x496eb4: 0x3c010492  lui         $at, 0x492
    ctx->pc = 0x496eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1170 << 16));
label_496eb8:
    // 0x496eb8: 0x34214924  ori         $at, $at, 0x4924
    ctx->pc = 0x496eb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18724);
    // 0x496ebc: 0x2a1082b  sltu        $at, $s5, $at
    ctx->pc = 0x496ebcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x496ec0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x496EC0u;
    {
        const bool branch_taken_0x496ec0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x496ec0) {
            ctx->pc = 0x496ED0u;
            goto label_496ed0;
        }
    }
    ctx->pc = 0x496EC8u;
    // 0x496ec8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x496EC8u;
    {
        const bool branch_taken_0x496ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x496ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496EC8u;
            // 0x496ecc: 0x15a840  sll         $s5, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496ec8) {
            ctx->pc = 0x496ED8u;
            goto label_496ed8;
        }
    }
    ctx->pc = 0x496ED0u;
label_496ed0:
    // 0x496ed0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x496ed0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496ed4: 0x0  nop
    ctx->pc = 0x496ed4u;
    // NOP
label_496ed8:
    // 0x496ed8: 0x2a4082b  sltu        $at, $s5, $a0
    ctx->pc = 0x496ed8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x496edc: 0x5420fff6  bnel        $at, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x496EDCu;
    {
        const bool branch_taken_0x496edc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x496edc) {
            ctx->pc = 0x496EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x496EDCu;
            // 0x496ee0: 0x3c010492  lui         $at, 0x492 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1170 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x496EB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_496eb8;
        }
    }
    ctx->pc = 0x496EE4u;
    // 0x496ee4: 0x0  nop
    ctx->pc = 0x496ee4u;
    // NOP
label_496ee8:
    // 0x496ee8: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x496ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x496eec: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x496eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x496ef0: 0xc040180  jal         func_100600
    ctx->pc = 0x496EF0u;
    SET_GPR_U32(ctx, 31, 0x496EF8u);
    ctx->pc = 0x496EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x496EF0u;
            // 0x496ef4: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x496EF8u; }
        if (ctx->pc != 0x496EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x496EF8u; }
        if (ctx->pc != 0x496EF8u) { return; }
    }
    ctx->pc = 0x496EF8u;
label_496ef8:
    // 0x496ef8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x496ef8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496efc: 0x5680000a  bnel        $s4, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x496EFCu;
    {
        const bool branch_taken_0x496efc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x496efc) {
            ctx->pc = 0x496F00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x496EFCu;
            // 0x496f00: 0xafb50070  sw          $s5, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x496F28u;
            goto label_496f28;
        }
    }
    ctx->pc = 0x496F04u;
    // 0x496f04: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x496f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x496f08: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x496f08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x496f0c: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x496f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x496f10: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x496f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x496f14: 0xc049e92  jal         func_127A48
    ctx->pc = 0x496F14u;
    SET_GPR_U32(ctx, 31, 0x496F1Cu);
    ctx->pc = 0x496F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x496F14u;
            // 0x496f18: 0x24a50970  addiu       $a1, $a1, 0x970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x496F1Cu; }
        if (ctx->pc != 0x496F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x496F1Cu; }
        if (ctx->pc != 0x496F1Cu) { return; }
    }
    ctx->pc = 0x496F1Cu;
label_496f1c:
    // 0x496f1c: 0xc04981a  jal         func_126068
    ctx->pc = 0x496F1Cu;
    SET_GPR_U32(ctx, 31, 0x496F24u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x496F24u; }
        if (ctx->pc != 0x496F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x496F24u; }
        if (ctx->pc != 0x496F24u) { return; }
    }
    ctx->pc = 0x496F24u;
label_496f24:
    // 0x496f24: 0xafb50070  sw          $s5, 0x70($sp)
    ctx->pc = 0x496f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 21));
label_496f28:
    // 0x496f28: 0xafb40078  sw          $s4, 0x78($sp)
    ctx->pc = 0x496f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 20));
    // 0x496f2c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x496f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x496f30: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x496f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x496f34: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x496f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x496f38: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x496f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x496f3c: 0xb2082b  sltu        $at, $a1, $s2
    ctx->pc = 0x496f3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x496f40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x496f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x496f44: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x496F44u;
    {
        const bool branch_taken_0x496f44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x496F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496F44u;
            // 0x496f48: 0xa22021  addu        $a0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496f44) {
            ctx->pc = 0x496FB0u;
            goto label_496fb0;
        }
    }
    ctx->pc = 0x496F4Cu;
label_496f4c:
    // 0x496f4c: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x496F4Cu;
    {
        const bool branch_taken_0x496f4c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x496f4c) {
            ctx->pc = 0x496F90u;
            goto label_496f90;
        }
    }
    ctx->pc = 0x496F54u;
    // 0x496f54: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x496f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x496f58: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x496f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x496f5c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x496f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x496f60: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x496f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x496f64: 0xe6830000  swc1        $f3, 0x0($s4)
    ctx->pc = 0x496f64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x496f68: 0xe6820004  swc1        $f2, 0x4($s4)
    ctx->pc = 0x496f68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x496f6c: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x496f6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x496f70: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x496f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x496f74: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x496f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x496f78: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x496f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x496f7c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x496f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x496f80: 0xe6820010  swc1        $f2, 0x10($s4)
    ctx->pc = 0x496f80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x496f84: 0xe6810014  swc1        $f1, 0x14($s4)
    ctx->pc = 0x496f84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
    // 0x496f88: 0xe6800018  swc1        $f0, 0x18($s4)
    ctx->pc = 0x496f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
    // 0x496f8c: 0x0  nop
    ctx->pc = 0x496f8cu;
    // NOP
label_496f90:
    // 0x496f90: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x496f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x496f94: 0x24a5001c  addiu       $a1, $a1, 0x1C
    ctx->pc = 0x496f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
    // 0x496f98: 0x2694001c  addiu       $s4, $s4, 0x1C
    ctx->pc = 0x496f98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x496f9c: 0xb2102b  sltu        $v0, $a1, $s2
    ctx->pc = 0x496f9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x496fa0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x496fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x496fa4: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x496FA4u;
    {
        const bool branch_taken_0x496fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x496FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496FA4u;
            // 0x496fa8: 0xafa30074  sw          $v1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496fa4) {
            ctx->pc = 0x496F4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_496f4c;
        }
    }
    ctx->pc = 0x496FACu;
    // 0x496fac: 0x0  nop
    ctx->pc = 0x496facu;
    // NOP
label_496fb0:
    // 0x496fb0: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x496FB0u;
    {
        const bool branch_taken_0x496fb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x496fb0) {
            ctx->pc = 0x497010u;
            goto label_497010;
        }
    }
    ctx->pc = 0x496FB8u;
label_496fb8:
    // 0x496fb8: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x496FB8u;
    {
        const bool branch_taken_0x496fb8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x496fb8) {
            ctx->pc = 0x496FF8u;
            goto label_496ff8;
        }
    }
    ctx->pc = 0x496FC0u;
    // 0x496fc0: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x496fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x496fc4: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x496fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x496fc8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x496fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x496fcc: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x496fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x496fd0: 0xe6830000  swc1        $f3, 0x0($s4)
    ctx->pc = 0x496fd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x496fd4: 0xe6820004  swc1        $f2, 0x4($s4)
    ctx->pc = 0x496fd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x496fd8: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x496fd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x496fdc: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x496fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x496fe0: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x496fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x496fe4: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x496fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x496fe8: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x496fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x496fec: 0xe6820010  swc1        $f2, 0x10($s4)
    ctx->pc = 0x496fecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x496ff0: 0xe6810014  swc1        $f1, 0x14($s4)
    ctx->pc = 0x496ff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
    // 0x496ff4: 0xe6800018  swc1        $f0, 0x18($s4)
    ctx->pc = 0x496ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
label_496ff8:
    // 0x496ff8: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x496ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x496ffc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x496ffcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x497000: 0x2694001c  addiu       $s4, $s4, 0x1C
    ctx->pc = 0x497000u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x497004: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x497004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x497008: 0x1620ffeb  bnez        $s1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x497008u;
    {
        const bool branch_taken_0x497008 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x49700Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497008u;
            // 0x49700c: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497008) {
            ctx->pc = 0x496FB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_496fb8;
        }
    }
    ctx->pc = 0x497010u;
label_497010:
    // 0x497010: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x497010u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x497014: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x497014u;
    {
        const bool branch_taken_0x497014 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x497014) {
            ctx->pc = 0x497080u;
            goto label_497080;
        }
    }
    ctx->pc = 0x49701Cu;
label_49701c:
    // 0x49701c: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x49701Cu;
    {
        const bool branch_taken_0x49701c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x49701c) {
            ctx->pc = 0x497060u;
            goto label_497060;
        }
    }
    ctx->pc = 0x497024u;
    // 0x497024: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x497024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x497028: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x497028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x49702c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x49702cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x497030: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x497030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x497034: 0xe6830000  swc1        $f3, 0x0($s4)
    ctx->pc = 0x497034u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x497038: 0xe6820004  swc1        $f2, 0x4($s4)
    ctx->pc = 0x497038u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x49703c: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x49703cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x497040: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x497040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x497044: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x497044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x497048: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x497048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x49704c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x49704cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x497050: 0xe6820010  swc1        $f2, 0x10($s4)
    ctx->pc = 0x497050u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x497054: 0xe6810014  swc1        $f1, 0x14($s4)
    ctx->pc = 0x497054u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
    // 0x497058: 0xe6800018  swc1        $f0, 0x18($s4)
    ctx->pc = 0x497058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
    // 0x49705c: 0x0  nop
    ctx->pc = 0x49705cu;
    // NOP
label_497060:
    // 0x497060: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x497060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x497064: 0x24a5001c  addiu       $a1, $a1, 0x1C
    ctx->pc = 0x497064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
    // 0x497068: 0x2694001c  addiu       $s4, $s4, 0x1C
    ctx->pc = 0x497068u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x49706c: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x49706cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x497070: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x497070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x497074: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x497074u;
    {
        const bool branch_taken_0x497074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x497078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497074u;
            // 0x497078: 0xafa30074  sw          $v1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497074) {
            ctx->pc = 0x49701Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49701c;
        }
    }
    ctx->pc = 0x49707Cu;
    // 0x49707c: 0x0  nop
    ctx->pc = 0x49707cu;
    // NOP
label_497080:
    // 0x497080: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x497080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x497084: 0x5053000e  beql        $v0, $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x497084u;
    {
        const bool branch_taken_0x497084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x497084) {
            ctx->pc = 0x497088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x497084u;
            // 0x497088: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4970C0u;
            goto label_4970c0;
        }
    }
    ctx->pc = 0x49708Cu;
    // 0x49708c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x49708cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x497090: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x497090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x497094: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x497094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x497098: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x497098u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x49709c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x49709cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4970a0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x4970a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4970a4: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x4970a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x4970a8: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x4970a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x4970ac: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x4970acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x4970b0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x4970b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4970b4: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x4970b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x4970b8: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x4970b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x4970bc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4970bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4970c0:
    // 0x4970c0: 0xc125f9c  jal         func_497E70
    ctx->pc = 0x4970C0u;
    SET_GPR_U32(ctx, 31, 0x4970C8u);
    ctx->pc = 0x497E70u;
    if (runtime->hasFunction(0x497E70u)) {
        auto targetFn = runtime->lookupFunction(0x497E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4970C8u; }
        if (ctx->pc != 0x4970C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00497E70_0x497e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4970C8u; }
        if (ctx->pc != 0x4970C8u) { return; }
    }
    ctx->pc = 0x4970C8u;
label_4970c8:
    // 0x4970c8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x4970c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4970cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4970CCu;
    {
        const bool branch_taken_0x4970cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4970cc) {
            ctx->pc = 0x4970DCu;
            goto label_4970dc;
        }
    }
    ctx->pc = 0x4970D4u;
    // 0x4970d4: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4970D4u;
    SET_GPR_U32(ctx, 31, 0x4970DCu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4970DCu; }
        if (ctx->pc != 0x4970DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4970DCu; }
        if (ctx->pc != 0x4970DCu) { return; }
    }
    ctx->pc = 0x4970DCu;
label_4970dc:
    // 0x4970dc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4970dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4970e0:
    // 0x4970e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4970e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4970e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4970e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4970e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4970e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4970ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4970ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4970f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4970f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4970f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4970f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4970f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4970F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4970FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4970F8u;
            // 0x4970fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x497100u;
}
