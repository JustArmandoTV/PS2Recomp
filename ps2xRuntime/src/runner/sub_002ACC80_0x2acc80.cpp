#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ACC80
// Address: 0x2acc80 - 0x2ace50
void sub_002ACC80_0x2acc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACC80_0x2acc80");
#endif

    switch (ctx->pc) {
        case 0x2acd94u: goto label_2acd94;
        case 0x2acda8u: goto label_2acda8;
        case 0x2acdbcu: goto label_2acdbc;
        case 0x2acde0u: goto label_2acde0;
        case 0x2acde8u: goto label_2acde8;
        case 0x2ace14u: goto label_2ace14;
        default: break;
    }

    ctx->pc = 0x2acc80u;

    // 0x2acc80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2acc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2acc84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2acc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2acc88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2acc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2acc8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2acc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2acc90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2acc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2acc94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2acc94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acc98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2acc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2acc9c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2acc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2acca0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2acca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acca4: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2acca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2acca8: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x2acca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2accac: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2accacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2accb0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2accb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2accb4: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x2accb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2accb8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2accb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2accbc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2accbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2accc0: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x2accc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2accc4: 0xe7a1007c  swc1        $f1, 0x7C($sp)
    ctx->pc = 0x2accc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2accc8: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2accc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2acccc: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2accccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2accd0: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2accd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2accd4: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x2accd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2accd8: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x2accd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2accdc: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2accdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2acce0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2acce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2acce4: 0x8fa70064  lw          $a3, 0x64($sp)
    ctx->pc = 0x2acce4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2acce8: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x2acce8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x2accec: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2accecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2accf0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2accf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2accf4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACCF4u;
    {
        const bool branch_taken_0x2accf4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2ACCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACCF4u;
            // 0x2accf8: 0x38883  sra         $s1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2accf4) {
            ctx->pc = 0x2ACD04u;
            goto label_2acd04;
        }
    }
    ctx->pc = 0x2ACCFCu;
    // 0x2accfc: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x2accfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2acd00: 0x38883  sra         $s1, $v1, 2
    ctx->pc = 0x2acd00u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 2));
label_2acd04:
    // 0x2acd04: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2acd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2acd08: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x2acd08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2acd0c: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2ACD0Cu;
    {
        const bool branch_taken_0x2acd0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2acd0c) {
            ctx->pc = 0x2ACD10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACD0Cu;
            // 0x2acd10: 0x8fa30070  lw          $v1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ACD40u;
            goto label_2acd40;
        }
    }
    ctx->pc = 0x2ACD14u;
    // 0x2acd14: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2acd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2acd18: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x2acd18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2acd1c: 0x50200012  beql        $at, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2ACD1Cu;
    {
        const bool branch_taken_0x2acd1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acd1c) {
            ctx->pc = 0x2ACD20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACD1Cu;
            // 0x2acd20: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ACD68u;
            goto label_2acd68;
        }
    }
    ctx->pc = 0x2ACD24u;
    // 0x2acd24: 0xc72023  subu        $a0, $a2, $a3
    ctx->pc = 0x2acd24u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2acd28: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACD28u;
    {
        const bool branch_taken_0x2acd28 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2ACD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACD28u;
            // 0x2acd2c: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acd28) {
            ctx->pc = 0x2ACD38u;
            goto label_2acd38;
        }
    }
    ctx->pc = 0x2ACD30u;
    // 0x2acd30: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x2acd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x2acd34: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2acd34u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_2acd38:
    // 0x2acd38: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2ACD38u;
    {
        const bool branch_taken_0x2acd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACD38u;
            // 0x2acd3c: 0x2238823  subu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acd38) {
            ctx->pc = 0x2ACD64u;
            goto label_2acd64;
        }
    }
    ctx->pc = 0x2ACD40u;
label_2acd40:
    // 0x2acd40: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x2acd40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2acd44: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ACD44u;
    {
        const bool branch_taken_0x2acd44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2acd44) {
            ctx->pc = 0x2ACD64u;
            goto label_2acd64;
        }
    }
    ctx->pc = 0x2ACD4Cu;
    // 0x2acd4c: 0xc72023  subu        $a0, $a2, $a3
    ctx->pc = 0x2acd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2acd50: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACD50u;
    {
        const bool branch_taken_0x2acd50 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2ACD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACD50u;
            // 0x2acd54: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acd50) {
            ctx->pc = 0x2ACD60u;
            goto label_2acd60;
        }
    }
    ctx->pc = 0x2ACD58u;
    // 0x2acd58: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x2acd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x2acd5c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2acd5cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_2acd60:
    // 0x2acd60: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x2acd60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_2acd64:
    // 0x2acd64: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2acd64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2acd68:
    // 0x2acd68: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x2acd68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x2acd6c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2acd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2acd70: 0x54600002  bnel        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ACD70u;
    {
        const bool branch_taken_0x2acd70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2acd70) {
            ctx->pc = 0x2ACD74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACD70u;
            // 0x2acd74: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ACD7Cu;
            goto label_2acd7c;
        }
    }
    ctx->pc = 0x2ACD78u;
    // 0x2acd78: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2acd78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acd7c:
    // 0x2acd7c: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x2acd7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2acd80: 0x5020001d  beql        $at, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2ACD80u;
    {
        const bool branch_taken_0x2acd80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acd80) {
            ctx->pc = 0x2ACD84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACD80u;
            // 0x2acd84: 0x8fa40070  lw          $a0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ACDF8u;
            goto label_2acdf8;
        }
    }
    ctx->pc = 0x2ACD88u;
    // 0x2acd88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2acd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd8c: 0xc0ab498  jal         func_2AD260
    ctx->pc = 0x2ACD8Cu;
    SET_GPR_U32(ctx, 31, 0x2ACD94u);
    ctx->pc = 0x2ACD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACD8Cu;
            // 0x2acd90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD260u;
    if (runtime->hasFunction(0x2AD260u)) {
        auto targetFn = runtime->lookupFunction(0x2AD260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACD94u; }
        if (ctx->pc != 0x2ACD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD260_0x2ad260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACD94u; }
        if (ctx->pc != 0x2ACD94u) { return; }
    }
    ctx->pc = 0x2ACD94u;
label_2acd94:
    // 0x2acd94: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x2acd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2acd98: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ACD98u;
    {
        const bool branch_taken_0x2acd98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACD98u;
            // 0x2acd9c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acd98) {
            ctx->pc = 0x2ACDB0u;
            goto label_2acdb0;
        }
    }
    ctx->pc = 0x2ACDA0u;
    // 0x2acda0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2ACDA0u;
    SET_GPR_U32(ctx, 31, 0x2ACDA8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACDA8u; }
        if (ctx->pc != 0x2ACDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACDA8u; }
        if (ctx->pc != 0x2ACDA8u) { return; }
    }
    ctx->pc = 0x2ACDA8u;
label_2acda8:
    // 0x2acda8: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x2acda8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x2acdac: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2acdacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2acdb0:
    // 0x2acdb0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2acdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2acdb4: 0xc040180  jal         func_100600
    ctx->pc = 0x2ACDB4u;
    SET_GPR_U32(ctx, 31, 0x2ACDBCu);
    ctx->pc = 0x2ACDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACDB4u;
            // 0x2acdb8: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACDBCu; }
        if (ctx->pc != 0x2ACDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACDBCu; }
        if (ctx->pc != 0x2ACDBCu) { return; }
    }
    ctx->pc = 0x2ACDBCu;
label_2acdbc:
    // 0x2acdbc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2acdbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acdc0: 0x5660000a  bnel        $s3, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2ACDC0u;
    {
        const bool branch_taken_0x2acdc0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2acdc0) {
            ctx->pc = 0x2ACDC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACDC0u;
            // 0x2acdc4: 0xae53000c  sw          $s3, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ACDECu;
            goto label_2acdec;
        }
    }
    ctx->pc = 0x2ACDC8u;
    // 0x2acdc8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2acdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2acdcc: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2acdccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2acdd0: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x2acdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x2acdd4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2acdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2acdd8: 0xc049e92  jal         func_127A48
    ctx->pc = 0x2ACDD8u;
    SET_GPR_U32(ctx, 31, 0x2ACDE0u);
    ctx->pc = 0x2ACDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACDD8u;
            // 0x2acddc: 0x24a5c870  addiu       $a1, $a1, -0x3790 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACDE0u; }
        if (ctx->pc != 0x2ACDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACDE0u; }
        if (ctx->pc != 0x2ACDE0u) { return; }
    }
    ctx->pc = 0x2ACDE0u;
label_2acde0:
    // 0x2acde0: 0xc04981a  jal         func_126068
    ctx->pc = 0x2ACDE0u;
    SET_GPR_U32(ctx, 31, 0x2ACDE8u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACDE8u; }
        if (ctx->pc != 0x2ACDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACDE8u; }
        if (ctx->pc != 0x2ACDE8u) { return; }
    }
    ctx->pc = 0x2ACDE8u;
label_2acde8:
    // 0x2acde8: 0xae53000c  sw          $s3, 0xC($s2)
    ctx->pc = 0x2acde8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
label_2acdec:
    // 0x2acdec: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2acdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2acdf0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2acdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2acdf4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2acdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2acdf8:
    // 0x2acdf8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2acdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2acdfc: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x2acdfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ace00: 0x8fa70074  lw          $a3, 0x74($sp)
    ctx->pc = 0x2ace00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2ace04: 0x8fa6007c  lw          $a2, 0x7C($sp)
    ctx->pc = 0x2ace04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x2ace08: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2ace08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ace0c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ACE0Cu;
    {
        const bool branch_taken_0x2ace0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2ACE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACE0Cu;
            // 0x2ace10: 0x8e49000c  lw          $t1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ace0c) {
            ctx->pc = 0x2ACE30u;
            goto label_2ace30;
        }
    }
    ctx->pc = 0x2ACE14u;
label_2ace14:
    // 0x2ace14: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2ace14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2ace18: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2ace18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2ace1c: 0x15060002  bne         $t0, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ACE1Cu;
    {
        const bool branch_taken_0x2ace1c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        ctx->pc = 0x2ACE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACE1Cu;
            // 0x2ace20: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ace1c) {
            ctx->pc = 0x2ACE28u;
            goto label_2ace28;
        }
    }
    ctx->pc = 0x2ACE24u;
    // 0x2ace24: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2ace24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2ace28:
    // 0x2ace28: 0x1505fffa  bne         $t0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2ACE28u;
    {
        const bool branch_taken_0x2ace28 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        ctx->pc = 0x2ACE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACE28u;
            // 0x2ace2c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ace28) {
            ctx->pc = 0x2ACE14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ace14;
        }
    }
    ctx->pc = 0x2ACE30u;
label_2ace30:
    // 0x2ace30: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x2ace30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x2ace34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ace34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ace38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ace38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ace3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ace3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ace40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ace40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ace44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ace44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ace48: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACE48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACE48u;
            // 0x2ace4c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ACE50u;
}
