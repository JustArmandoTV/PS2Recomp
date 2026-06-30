#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A4E80
// Address: 0x2a4e80 - 0x2a5310
void sub_002A4E80_0x2a4e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4E80_0x2a4e80");
#endif

    switch (ctx->pc) {
        case 0x2a4efcu: goto label_2a4efc;
        case 0x2a4f04u: goto label_2a4f04;
        case 0x2a4f68u: goto label_2a4f68;
        case 0x2a4fb4u: goto label_2a4fb4;
        case 0x2a5014u: goto label_2a5014;
        case 0x2a5098u: goto label_2a5098;
        case 0x2a50c8u: goto label_2a50c8;
        case 0x2a5120u: goto label_2a5120;
        case 0x2a5160u: goto label_2a5160;
        case 0x2a5184u: goto label_2a5184;
        case 0x2a518cu: goto label_2a518c;
        case 0x2a51b4u: goto label_2a51b4;
        case 0x2a5200u: goto label_2a5200;
        case 0x2a5244u: goto label_2a5244;
        case 0x2a52d0u: goto label_2a52d0;
        case 0x2a52e4u: goto label_2a52e4;
        default: break;
    }

    ctx->pc = 0x2a4e80u;

    // 0x2a4e80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a4e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a4e84: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2a4e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2a4e88: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a4e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a4e8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a4e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a4e90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a4e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a4e94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a4e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a4e98: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a4e98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4e9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a4e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a4ea0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a4ea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ea4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a4ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a4ea8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a4ea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4eac: 0x1220010d  beqz        $s1, . + 4 + (0x10D << 2)
    ctx->pc = 0x2A4EACu;
    {
        const bool branch_taken_0x2a4eac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4EACu;
            // 0x2a4eb0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4eac) {
            ctx->pc = 0x2A52E4u;
            goto label_2a52e4;
        }
    }
    ctx->pc = 0x2A4EB4u;
    // 0x2a4eb4: 0x3c011555  lui         $at, 0x1555
    ctx->pc = 0x2a4eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5461 << 16));
    // 0x2a4eb8: 0x34215556  ori         $at, $at, 0x5556
    ctx->pc = 0x2a4eb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21846);
    // 0x2a4ebc: 0x221082b  sltu        $at, $s1, $at
    ctx->pc = 0x2a4ebcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x2a4ec0: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A4EC0u;
    {
        const bool branch_taken_0x2a4ec0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4ec0) {
            ctx->pc = 0x2A4EE4u;
            goto label_2a4ee4;
        }
    }
    ctx->pc = 0x2A4EC8u;
    // 0x2a4ec8: 0x3c031555  lui         $v1, 0x1555
    ctx->pc = 0x2a4ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5461 << 16));
    // 0x2a4ecc: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2a4eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2a4ed0: 0x34635555  ori         $v1, $v1, 0x5555
    ctx->pc = 0x2a4ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21845);
    // 0x2a4ed4: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x2a4ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2a4ed8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x2a4ed8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2a4edc: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2A4EDCu;
    {
        const bool branch_taken_0x2a4edc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4edc) {
            ctx->pc = 0x2A4EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4EDCu;
            // 0x2a4ee0: 0x8e660004  lw          $a2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A4F08u;
            goto label_2a4f08;
        }
    }
    ctx->pc = 0x2A4EE4u;
label_2a4ee4:
    // 0x2a4ee4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2a4ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2a4ee8: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2a4ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2a4eec: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x2a4eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x2a4ef0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2a4ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a4ef4: 0xc049e92  jal         func_127A48
    ctx->pc = 0x2A4EF4u;
    SET_GPR_U32(ctx, 31, 0x2A4EFCu);
    ctx->pc = 0x2A4EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4EF4u;
            // 0x2a4ef8: 0x24a50f20  addiu       $a1, $a1, 0xF20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4EFCu; }
        if (ctx->pc != 0x2A4EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4EFCu; }
        if (ctx->pc != 0x2A4EFCu) { return; }
    }
    ctx->pc = 0x2A4EFCu;
label_2a4efc:
    // 0x2a4efc: 0xc04981a  jal         func_126068
    ctx->pc = 0x2A4EFCu;
    SET_GPR_U32(ctx, 31, 0x2A4F04u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4F04u; }
        if (ctx->pc != 0x2A4F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4F04u; }
        if (ctx->pc != 0x2A4F04u) { return; }
    }
    ctx->pc = 0x2A4F04u;
label_2a4f04:
    // 0x2a4f04: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x2a4f04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2a4f08:
    // 0x2a4f08: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a4f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2a4f0c: 0xd12021  addu        $a0, $a2, $s1
    ctx->pc = 0x2a4f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x2a4f10: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x2a4f10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2a4f14: 0x54200077  bnel        $at, $zero, . + 4 + (0x77 << 2)
    ctx->pc = 0x2A4F14u;
    {
        const bool branch_taken_0x2a4f14 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4f14) {
            ctx->pc = 0x2A4F18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4F14u;
            // 0x2a4f18: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A50F4u;
            goto label_2a50f4;
        }
    }
    ctx->pc = 0x2A4F1Cu;
    // 0x2a4f1c: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2a4f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2a4f20: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x2a4f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2a4f24: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x2a4f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2a4f28: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x2a4f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x2a4f2c: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x2a4f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a4f30: 0x3464aaab  ori         $a0, $v1, 0xAAAB
    ctx->pc = 0x2a4f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x2a4f34: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x2a4f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2a4f38: 0x722823  subu        $a1, $v1, $s2
    ctx->pc = 0x2a4f38u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2a4f3c: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x2a4f3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2a4f40: 0x2010  mfhi        $a0
    ctx->pc = 0x2a4f40u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2a4f44: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x2a4f44u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2a4f48: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2a4f48u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2a4f4c: 0x853821  addu        $a3, $a0, $a1
    ctx->pc = 0x2a4f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a4f50: 0xf1082b  sltu        $at, $a3, $s1
    ctx->pc = 0x2a4f50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2a4f54: 0x50200029  beql        $at, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x2A4F54u;
    {
        const bool branch_taken_0x2a4f54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4f54) {
            ctx->pc = 0x2A4F58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4F54u;
            // 0x2a4f58: 0x112040  sll         $a0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A4FFCu;
            goto label_2a4ffc;
        }
    }
    ctx->pc = 0x2A4F5Cu;
    // 0x2a4f5c: 0xf1082b  sltu        $at, $a3, $s1
    ctx->pc = 0x2a4f5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2a4f60: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A4F60u;
    {
        const bool branch_taken_0x2a4f60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4F60u;
            // 0x2a4f64: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4f60) {
            ctx->pc = 0x2A4FA8u;
            goto label_2a4fa8;
        }
    }
    ctx->pc = 0x2A4F68u;
label_2a4f68:
    // 0x2a4f68: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A4F68u;
    {
        const bool branch_taken_0x2a4f68 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4f68) {
            ctx->pc = 0x2A4F88u;
            goto label_2a4f88;
        }
    }
    ctx->pc = 0x2A4F70u;
    // 0x2a4f70: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2a4f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a4f74: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2a4f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4f78: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2a4f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4f7c: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x2a4f7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2a4f80: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x2a4f80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2a4f84: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x2a4f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_2a4f88:
    // 0x2a4f88: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2a4f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2a4f8c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2a4f8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2a4f90: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x2a4f90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x2a4f94: 0xf1082b  sltu        $at, $a3, $s1
    ctx->pc = 0x2a4f94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2a4f98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2a4f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a4f9c: 0x1420fff2  bnez        $at, . + 4 + (-0xE << 2)
    ctx->pc = 0x2A4F9Cu;
    {
        const bool branch_taken_0x2a4f9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4F9Cu;
            // 0x2a4fa0: 0xae640004  sw          $a0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4f9c) {
            ctx->pc = 0x2A4F68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a4f68;
        }
    }
    ctx->pc = 0x2A4FA4u;
    // 0x2a4fa4: 0x0  nop
    ctx->pc = 0x2a4fa4u;
    // NOP
label_2a4fa8:
    // 0x2a4fa8: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x2a4fa8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2a4fac: 0x10200044  beqz        $at, . + 4 + (0x44 << 2)
    ctx->pc = 0x2A4FACu;
    {
        const bool branch_taken_0x2a4fac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4FACu;
            // 0x2a4fb0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4fac) {
            ctx->pc = 0x2A50C0u;
            goto label_2a50c0;
        }
    }
    ctx->pc = 0x2A4FB4u;
label_2a4fb4:
    // 0x2a4fb4: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A4FB4u;
    {
        const bool branch_taken_0x2a4fb4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4fb4) {
            ctx->pc = 0x2A4FD8u;
            goto label_2a4fd8;
        }
    }
    ctx->pc = 0x2A4FBCu;
    // 0x2a4fbc: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2a4fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a4fc0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2a4fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4fc4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2a4fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4fc8: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x2a4fc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2a4fcc: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x2a4fccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2a4fd0: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x2a4fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x2a4fd4: 0x0  nop
    ctx->pc = 0x2a4fd4u;
    // NOP
label_2a4fd8:
    // 0x2a4fd8: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x2a4fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2a4fdc: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x2a4fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x2a4fe0: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x2a4fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x2a4fe4: 0xc3202b  sltu        $a0, $a2, $v1
    ctx->pc = 0x2a4fe4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2a4fe8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a4fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a4fec: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2A4FECu;
    {
        const bool branch_taken_0x2a4fec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4FECu;
            // 0x2a4ff0: 0xae650004  sw          $a1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4fec) {
            ctx->pc = 0x2A4FB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a4fb4;
        }
    }
    ctx->pc = 0x2A4FF4u;
    // 0x2a4ff4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2A4FF4u;
    {
        const bool branch_taken_0x2a4ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4ff4) {
            ctx->pc = 0x2A50C0u;
            goto label_2a50c0;
        }
    }
    ctx->pc = 0x2A4FFCu;
label_2a4ffc:
    // 0x2a4ffc: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2a4ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2a5000: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x2a5000u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a5004: 0x664823  subu        $t1, $v1, $a2
    ctx->pc = 0x2a5004u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2a5008: 0x123082b  sltu        $at, $t1, $v1
    ctx->pc = 0x2a5008u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2a500c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A500Cu;
    {
        const bool branch_taken_0x2a500c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A500Cu;
            // 0x2a5010: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a500c) {
            ctx->pc = 0x2A5058u;
            goto label_2a5058;
        }
    }
    ctx->pc = 0x2A5014u;
label_2a5014:
    // 0x2a5014: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A5014u;
    {
        const bool branch_taken_0x2a5014 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5014) {
            ctx->pc = 0x2A5038u;
            goto label_2a5038;
        }
    }
    ctx->pc = 0x2A501Cu;
    // 0x2a501c: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x2a501cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a5020: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x2a5020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5024: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x2a5024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5028: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x2a5028u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2a502c: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x2a502cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2a5030: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x2a5030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x2a5034: 0x0  nop
    ctx->pc = 0x2a5034u;
    // NOP
label_2a5038:
    // 0x2a5038: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x2a5038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2a503c: 0x2529000c  addiu       $t1, $t1, 0xC
    ctx->pc = 0x2a503cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x2a5040: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x2a5040u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x2a5044: 0x123202b  sltu        $a0, $t1, $v1
    ctx->pc = 0x2a5044u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2a5048: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a5048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a504c: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2A504Cu;
    {
        const bool branch_taken_0x2a504c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A504Cu;
            // 0x2a5050: 0xae650004  sw          $a1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a504c) {
            ctx->pc = 0x2A5014u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a5014;
        }
    }
    ctx->pc = 0x2A5054u;
    // 0x2a5054: 0x0  nop
    ctx->pc = 0x2a5054u;
    // NOP
label_2a5058:
    // 0x2a5058: 0xf12823  subu        $a1, $a3, $s1
    ctx->pc = 0x2a5058u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x2a505c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2a505cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2a5060: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2a5060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a5064: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x2a5064u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a5068: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x2a5068u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a506c: 0x204082b  sltu        $at, $s0, $a0
    ctx->pc = 0x2a506cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2a5070: 0x54200006  bnel        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A5070u;
    {
        const bool branch_taken_0x2a5070 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5070) {
            ctx->pc = 0x2A5074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5070u;
            // 0x2a5074: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A508Cu;
            goto label_2a508c;
        }
    }
    ctx->pc = 0x2A5078u;
    // 0x2a5078: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x2a5078u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2a507c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A507Cu;
    {
        const bool branch_taken_0x2a507c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a507c) {
            ctx->pc = 0x2A5088u;
            goto label_2a5088;
        }
    }
    ctx->pc = 0x2A5084u;
    // 0x2a5084: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x2a5084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_2a5088:
    // 0x2a5088: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x2a5088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_2a508c:
    // 0x2a508c: 0x245082b  sltu        $at, $s2, $a1
    ctx->pc = 0x2a508cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2a5090: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2A5090u;
    {
        const bool branch_taken_0x2a5090 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5090) {
            ctx->pc = 0x2A50C0u;
            goto label_2a50c0;
        }
    }
    ctx->pc = 0x2A5098u;
label_2a5098:
    // 0x2a5098: 0x24a5fff4  addiu       $a1, $a1, -0xC
    ctx->pc = 0x2a5098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967284));
    // 0x2a509c: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x2a509cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x2a50a0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2a50a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a50a4: 0x245082b  sltu        $at, $s2, $a1
    ctx->pc = 0x2a50a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2a50a8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2a50a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2a50ac: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2a50acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a50b0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2a50b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a50b4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2a50b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2a50b8: 0x1420fff7  bnez        $at, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A50B8u;
    {
        const bool branch_taken_0x2a50b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A50BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A50B8u;
            // 0x2a50bc: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a50b8) {
            ctx->pc = 0x2A5098u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a5098;
        }
    }
    ctx->pc = 0x2A50C0u;
label_2a50c0:
    // 0x2a50c0: 0x52200089  beql        $s1, $zero, . + 4 + (0x89 << 2)
    ctx->pc = 0x2A50C0u;
    {
        const bool branch_taken_0x2a50c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a50c0) {
            ctx->pc = 0x2A50C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A50C0u;
            // 0x2a50c4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A52E8u;
            goto label_2a52e8;
        }
    }
    ctx->pc = 0x2A50C8u;
label_2a50c8:
    // 0x2a50c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a50c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a50cc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2a50ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2a50d0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2a50d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2a50d4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2a50d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a50d8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2a50d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a50dc: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x2a50dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2a50e0: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x2a50e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2a50e4: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2A50E4u;
    {
        const bool branch_taken_0x2a50e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A50E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A50E4u;
            // 0x2a50e8: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a50e4) {
            ctx->pc = 0x2A50C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a50c8;
        }
    }
    ctx->pc = 0x2A50ECu;
    // 0x2a50ec: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x2A50ECu;
    {
        const bool branch_taken_0x2a50ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a50ec) {
            ctx->pc = 0x2A52E4u;
            goto label_2a52e4;
        }
    }
    ctx->pc = 0x2A50F4u;
label_2a50f4:
    // 0x2a50f4: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x2a50f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x2a50f8: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x2a50f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x2a50fc: 0x8e750000  lw          $s5, 0x0($s3)
    ctx->pc = 0x2a50fcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2a5100: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A5100u;
    {
        const bool branch_taken_0x2a5100 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5100) {
            ctx->pc = 0x2A5104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5100u;
            // 0x2a5104: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A5108u;
            goto label_2a5108;
        }
    }
    ctx->pc = 0x2A5108u;
label_2a5108:
    // 0x2a5108: 0x2a4082b  sltu        $at, $s5, $a0
    ctx->pc = 0x2a5108u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2a510c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A510Cu;
    {
        const bool branch_taken_0x2a510c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a510c) {
            ctx->pc = 0x2A5150u;
            goto label_2a5150;
        }
    }
    ctx->pc = 0x2A5114u;
    // 0x2a5114: 0x3c021555  lui         $v0, 0x1555
    ctx->pc = 0x2a5114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5461 << 16));
    // 0x2a5118: 0x34425555  ori         $v0, $v0, 0x5555
    ctx->pc = 0x2a5118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21845);
    // 0x2a511c: 0x3c010aaa  lui         $at, 0xAAA
    ctx->pc = 0x2a511cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2730 << 16));
label_2a5120:
    // 0x2a5120: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x2a5120u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
    // 0x2a5124: 0x2a1082b  sltu        $at, $s5, $at
    ctx->pc = 0x2a5124u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x2a5128: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A5128u;
    {
        const bool branch_taken_0x2a5128 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5128) {
            ctx->pc = 0x2A5138u;
            goto label_2a5138;
        }
    }
    ctx->pc = 0x2A5130u;
    // 0x2a5130: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A5130u;
    {
        const bool branch_taken_0x2a5130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5130u;
            // 0x2a5134: 0x15a840  sll         $s5, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5130) {
            ctx->pc = 0x2A5140u;
            goto label_2a5140;
        }
    }
    ctx->pc = 0x2A5138u;
label_2a5138:
    // 0x2a5138: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a5138u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a513c: 0x0  nop
    ctx->pc = 0x2a513cu;
    // NOP
label_2a5140:
    // 0x2a5140: 0x2a4082b  sltu        $at, $s5, $a0
    ctx->pc = 0x2a5140u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2a5144: 0x5420fff6  bnel        $at, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A5144u;
    {
        const bool branch_taken_0x2a5144 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5144) {
            ctx->pc = 0x2A5148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5144u;
            // 0x2a5148: 0x3c010aaa  lui         $at, 0xAAA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2730 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A5120u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a5120;
        }
    }
    ctx->pc = 0x2A514Cu;
    // 0x2a514c: 0x0  nop
    ctx->pc = 0x2a514cu;
    // NOP
label_2a5150:
    // 0x2a5150: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x2a5150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x2a5154: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2a5154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2a5158: 0xc040180  jal         func_100600
    ctx->pc = 0x2A5158u;
    SET_GPR_U32(ctx, 31, 0x2A5160u);
    ctx->pc = 0x2A515Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5158u;
            // 0x2a515c: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5160u; }
        if (ctx->pc != 0x2A5160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5160u; }
        if (ctx->pc != 0x2A5160u) { return; }
    }
    ctx->pc = 0x2A5160u;
label_2a5160:
    // 0x2a5160: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a5160u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5164: 0x5680000a  bnel        $s4, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2A5164u;
    {
        const bool branch_taken_0x2a5164 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5164) {
            ctx->pc = 0x2A5168u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5164u;
            // 0x2a5168: 0xafb50070  sw          $s5, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A5190u;
            goto label_2a5190;
        }
    }
    ctx->pc = 0x2A516Cu;
    // 0x2a516c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2a516cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2a5170: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2a5170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2a5174: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x2a5174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x2a5178: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2a5178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a517c: 0xc049e92  jal         func_127A48
    ctx->pc = 0x2A517Cu;
    SET_GPR_U32(ctx, 31, 0x2A5184u);
    ctx->pc = 0x2A5180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A517Cu;
            // 0x2a5180: 0x24a50f40  addiu       $a1, $a1, 0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5184u; }
        if (ctx->pc != 0x2A5184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5184u; }
        if (ctx->pc != 0x2A5184u) { return; }
    }
    ctx->pc = 0x2A5184u;
label_2a5184:
    // 0x2a5184: 0xc04981a  jal         func_126068
    ctx->pc = 0x2A5184u;
    SET_GPR_U32(ctx, 31, 0x2A518Cu);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A518Cu; }
        if (ctx->pc != 0x2A518Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A518Cu; }
        if (ctx->pc != 0x2A518Cu) { return; }
    }
    ctx->pc = 0x2A518Cu;
label_2a518c:
    // 0x2a518c: 0xafb50070  sw          $s5, 0x70($sp)
    ctx->pc = 0x2a518cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 21));
label_2a5190:
    // 0x2a5190: 0xafb40078  sw          $s4, 0x78($sp)
    ctx->pc = 0x2a5190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 20));
    // 0x2a5194: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2a5194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2a5198: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x2a5198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2a519c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a519cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a51a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a51a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a51a4: 0xb2082b  sltu        $at, $a1, $s2
    ctx->pc = 0x2a51a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2a51a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a51a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a51ac: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A51ACu;
    {
        const bool branch_taken_0x2a51ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A51B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A51ACu;
            // 0x2a51b0: 0xa22021  addu        $a0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a51ac) {
            ctx->pc = 0x2A51F8u;
            goto label_2a51f8;
        }
    }
    ctx->pc = 0x2A51B4u;
label_2a51b4:
    // 0x2a51b4: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A51B4u;
    {
        const bool branch_taken_0x2a51b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a51b4) {
            ctx->pc = 0x2A51D8u;
            goto label_2a51d8;
        }
    }
    ctx->pc = 0x2A51BCu;
    // 0x2a51bc: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2a51bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a51c0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2a51c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a51c4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2a51c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a51c8: 0xe6820000  swc1        $f2, 0x0($s4)
    ctx->pc = 0x2a51c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x2a51cc: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x2a51ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x2a51d0: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x2a51d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x2a51d4: 0x0  nop
    ctx->pc = 0x2a51d4u;
    // NOP
label_2a51d8:
    // 0x2a51d8: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x2a51d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2a51dc: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x2a51dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2a51e0: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x2a51e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x2a51e4: 0xb2102b  sltu        $v0, $a1, $s2
    ctx->pc = 0x2a51e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2a51e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a51e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a51ec: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2A51ECu;
    {
        const bool branch_taken_0x2a51ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A51F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A51ECu;
            // 0x2a51f0: 0xafa30074  sw          $v1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a51ec) {
            ctx->pc = 0x2A51B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a51b4;
        }
    }
    ctx->pc = 0x2A51F4u;
    // 0x2a51f4: 0x0  nop
    ctx->pc = 0x2a51f4u;
    // NOP
label_2a51f8:
    // 0x2a51f8: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x2A51F8u;
    {
        const bool branch_taken_0x2a51f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a51f8) {
            ctx->pc = 0x2A5238u;
            goto label_2a5238;
        }
    }
    ctx->pc = 0x2A5200u;
label_2a5200:
    // 0x2a5200: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A5200u;
    {
        const bool branch_taken_0x2a5200 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5200) {
            ctx->pc = 0x2A5220u;
            goto label_2a5220;
        }
    }
    ctx->pc = 0x2A5208u;
    // 0x2a5208: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2a5208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a520c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2a520cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5210: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2a5210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5214: 0xe6820000  swc1        $f2, 0x0($s4)
    ctx->pc = 0x2a5214u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x2a5218: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x2a5218u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x2a521c: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x2a521cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_2a5220:
    // 0x2a5220: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x2a5220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2a5224: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2a5224u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2a5228: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x2a5228u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x2a522c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a522cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a5230: 0x1620fff3  bnez        $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2A5230u;
    {
        const bool branch_taken_0x2a5230 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5230u;
            // 0x2a5234: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5230) {
            ctx->pc = 0x2A5200u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a5200;
        }
    }
    ctx->pc = 0x2A5238u;
label_2a5238:
    // 0x2a5238: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x2a5238u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2a523c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A523Cu;
    {
        const bool branch_taken_0x2a523c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a523c) {
            ctx->pc = 0x2A5288u;
            goto label_2a5288;
        }
    }
    ctx->pc = 0x2A5244u;
label_2a5244:
    // 0x2a5244: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A5244u;
    {
        const bool branch_taken_0x2a5244 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5244) {
            ctx->pc = 0x2A5268u;
            goto label_2a5268;
        }
    }
    ctx->pc = 0x2A524Cu;
    // 0x2a524c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2a524cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a5250: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2a5250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5254: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2a5254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5258: 0xe6820000  swc1        $f2, 0x0($s4)
    ctx->pc = 0x2a5258u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x2a525c: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x2a525cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x2a5260: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x2a5260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x2a5264: 0x0  nop
    ctx->pc = 0x2a5264u;
    // NOP
label_2a5268:
    // 0x2a5268: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x2a5268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2a526c: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x2a526cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2a5270: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x2a5270u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x2a5274: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x2a5274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2a5278: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a5278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a527c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2A527Cu;
    {
        const bool branch_taken_0x2a527c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A527Cu;
            // 0x2a5280: 0xafa30074  sw          $v1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a527c) {
            ctx->pc = 0x2A5244u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a5244;
        }
    }
    ctx->pc = 0x2A5284u;
    // 0x2a5284: 0x0  nop
    ctx->pc = 0x2a5284u;
    // NOP
label_2a5288:
    // 0x2a5288: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2a5288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a528c: 0x5053000e  beql        $v0, $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x2A528Cu;
    {
        const bool branch_taken_0x2a528c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x2a528c) {
            ctx->pc = 0x2A5290u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A528Cu;
            // 0x2a5290: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A52C8u;
            goto label_2a52c8;
        }
    }
    ctx->pc = 0x2A5294u;
    // 0x2a5294: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2a5294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a5298: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2a5298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2a529c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x2a529cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x2a52a0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2a52a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2a52a4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2a52a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a52a8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2a52a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2a52ac: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x2a52acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x2a52b0: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x2a52b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x2a52b4: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x2a52b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2a52b8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2a52b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2a52bc: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x2a52bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x2a52c0: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x2a52c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x2a52c4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a52c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2a52c8:
    // 0x2a52c8: 0xc0a94e0  jal         func_2A5380
    ctx->pc = 0x2A52C8u;
    SET_GPR_U32(ctx, 31, 0x2A52D0u);
    ctx->pc = 0x2A5380u;
    if (runtime->hasFunction(0x2A5380u)) {
        auto targetFn = runtime->lookupFunction(0x2A5380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A52D0u; }
        if (ctx->pc != 0x2A52D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A5380_0x2a5380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A52D0u; }
        if (ctx->pc != 0x2A52D0u) { return; }
    }
    ctx->pc = 0x2A52D0u;
label_2a52d0:
    // 0x2a52d0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2a52d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a52d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A52D4u;
    {
        const bool branch_taken_0x2a52d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a52d4) {
            ctx->pc = 0x2A52E4u;
            goto label_2a52e4;
        }
    }
    ctx->pc = 0x2A52DCu;
    // 0x2a52dc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2A52DCu;
    SET_GPR_U32(ctx, 31, 0x2A52E4u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A52E4u; }
        if (ctx->pc != 0x2A52E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A52E4u; }
        if (ctx->pc != 0x2A52E4u) { return; }
    }
    ctx->pc = 0x2A52E4u;
label_2a52e4:
    // 0x2a52e4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2a52e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2a52e8:
    // 0x2a52e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a52e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a52ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a52ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a52f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a52f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a52f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a52f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a52f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a52f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a52fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a52fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5300: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5300u;
            // 0x2a5304: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5308u;
    // 0x2a5308: 0x0  nop
    ctx->pc = 0x2a5308u;
    // NOP
    // 0x2a530c: 0x0  nop
    ctx->pc = 0x2a530cu;
    // NOP
}
