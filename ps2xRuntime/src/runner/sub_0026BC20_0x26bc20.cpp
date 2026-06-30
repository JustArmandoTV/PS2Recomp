#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026BC20
// Address: 0x26bc20 - 0x26c4d0
void sub_0026BC20_0x26bc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BC20_0x26bc20");
#endif

    switch (ctx->pc) {
        case 0x26bce8u: goto label_26bce8;
        case 0x26bdacu: goto label_26bdac;
        case 0x26be24u: goto label_26be24;
        case 0x26be38u: goto label_26be38;
        case 0x26be64u: goto label_26be64;
        case 0x26be8cu: goto label_26be8c;
        case 0x26bf88u: goto label_26bf88;
        case 0x26bfd0u: goto label_26bfd0;
        case 0x26bfe8u: goto label_26bfe8;
        case 0x26c004u: goto label_26c004;
        case 0x26c090u: goto label_26c090;
        case 0x26c0c8u: goto label_26c0c8;
        case 0x26c0d8u: goto label_26c0d8;
        case 0x26c13cu: goto label_26c13c;
        case 0x26c158u: goto label_26c158;
        case 0x26c248u: goto label_26c248;
        case 0x26c290u: goto label_26c290;
        case 0x26c2a8u: goto label_26c2a8;
        case 0x26c2c4u: goto label_26c2c4;
        case 0x26c350u: goto label_26c350;
        case 0x26c388u: goto label_26c388;
        case 0x26c398u: goto label_26c398;
        case 0x26c3fcu: goto label_26c3fc;
        case 0x26c418u: goto label_26c418;
        case 0x26c44cu: goto label_26c44c;
        case 0x26c48cu: goto label_26c48c;
        default: break;
    }

    ctx->pc = 0x26bc20u;

label_26bc20:
    // 0x26bc20: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x26bc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x26bc24: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x26bc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x26bc28: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x26bc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x26bc2c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x26bc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x26bc30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x26bc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x26bc34: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26bc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x26bc38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26bc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26bc3c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x26bc3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bc40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26bc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26bc44: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x26bc44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bc48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26bc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26bc4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26bc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26bc50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26bc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26bc54: 0xafa500cc  sw          $a1, 0xCC($sp)
    ctx->pc = 0x26bc54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 5));
    // 0x26bc58: 0xafa600c8  sw          $a2, 0xC8($sp)
    ctx->pc = 0x26bc58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 6));
    // 0x26bc5c: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x26bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26bc60: 0x80a30038  lb          $v1, 0x38($a1)
    ctx->pc = 0x26bc60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x26bc64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26BC64u;
    {
        const bool branch_taken_0x26bc64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC64u;
            // 0x26bc68: 0x24530038  addiu       $s3, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc64) {
            ctx->pc = 0x26BC78u;
            goto label_26bc78;
        }
    }
    ctx->pc = 0x26BC6Cu;
    // 0x26bc6c: 0x1000020c  b           . + 4 + (0x20C << 2)
    ctx->pc = 0x26BC6Cu;
    {
        const bool branch_taken_0x26bc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC6Cu;
            // 0x26bc70: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc6c) {
            ctx->pc = 0x26C4A0u;
            goto label_26c4a0;
        }
    }
    ctx->pc = 0x26BC74u;
    // 0x26bc74: 0x0  nop
    ctx->pc = 0x26bc74u;
    // NOP
label_26bc78:
    // 0x26bc78: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x26bc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x26bc7c: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x26bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x26bc80: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x26bc80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26bc84: 0x14200060  bnez        $at, . + 4 + (0x60 << 2)
    ctx->pc = 0x26BC84u;
    {
        const bool branch_taken_0x26bc84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bc84) {
            ctx->pc = 0x26BE08u;
            goto label_26be08;
        }
    }
    ctx->pc = 0x26BC8Cu;
    // 0x26bc8c: 0x8ea20060  lw          $v0, 0x60($s5)
    ctx->pc = 0x26bc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x26bc90: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x26bc90u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x26bc94: 0x0  nop
    ctx->pc = 0x26bc94u;
    // NOP
    // 0x26bc98: 0x0  nop
    ctx->pc = 0x26bc98u;
    // NOP
    // 0x26bc9c: 0x1010  mfhi        $v0
    ctx->pc = 0x26bc9cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x26bca0: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x26BCA0u;
    {
        const bool branch_taken_0x26bca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bca0) {
            ctx->pc = 0x26BE08u;
            goto label_26be08;
        }
    }
    ctx->pc = 0x26BCA8u;
    // 0x26bca8: 0x82820004  lb          $v0, 0x4($s4)
    ctx->pc = 0x26bca8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x26bcac: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x26bcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x26bcb0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x26bcb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x26bcb4: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x26BCB4u;
    {
        const bool branch_taken_0x26bcb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bcb4) {
            ctx->pc = 0x26BE08u;
            goto label_26be08;
        }
    }
    ctx->pc = 0x26BCBCu;
    // 0x26bcbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26bcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bcc0: 0xa2830004  sb          $v1, 0x4($s4)
    ctx->pc = 0x26bcc0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x26bcc4: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x26bcc4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26bcc8: 0x8eb20018  lw          $s2, 0x18($s5)
    ctx->pc = 0x26bcc8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x26bccc: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x26BCCCu;
    {
        const bool branch_taken_0x26bccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BCCCu;
            // 0x26bcd0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bccc) {
            ctx->pc = 0x26BDF8u;
            goto label_26bdf8;
        }
    }
    ctx->pc = 0x26BCD4u;
    // 0x26bcd4: 0x27b70194  addiu       $s7, $sp, 0x194
    ctx->pc = 0x26bcd4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x26bcd8: 0x27be0198  addiu       $fp, $sp, 0x198
    ctx->pc = 0x26bcd8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x26bcdc: 0x27b0019c  addiu       $s0, $sp, 0x19C
    ctx->pc = 0x26bcdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x26bce0: 0x27b601b8  addiu       $s6, $sp, 0x1B8
    ctx->pc = 0x26bce0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x26bce4: 0x0  nop
    ctx->pc = 0x26bce4u;
    // NOP
label_26bce8:
    // 0x26bce8: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x26bce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x26bcec: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x26bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x26bcf0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26bcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bcf4: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x26bcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26bcf8: 0x27a70190  addiu       $a3, $sp, 0x190
    ctx->pc = 0x26bcf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x26bcfc: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x26bcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x26bd00: 0x8c71000c  lw          $s1, 0xC($v1)
    ctx->pc = 0x26bd00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x26bd04: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x26bd04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x26bd08: 0x82820004  lb          $v0, 0x4($s4)
    ctx->pc = 0x26bd08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x26bd0c: 0xa2e20000  sb          $v0, 0x0($s7)
    ctx->pc = 0x26bd0cu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x26bd10: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x26bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26bd14: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x26bd14u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x26bd18: 0xc683000c  lwc1        $f3, 0xC($s4)
    ctx->pc = 0x26bd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26bd1c: 0x27a201b4  addiu       $v0, $sp, 0x1B4
    ctx->pc = 0x26bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x26bd20: 0xc6820010  lwc1        $f2, 0x10($s4)
    ctx->pc = 0x26bd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26bd24: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x26bd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26bd28: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x26bd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bd2c: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x26bd2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x26bd30: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x26bd30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x26bd34: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x26bd34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x26bd38: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x26bd38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x26bd3c: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x26bd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26bd40: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x26bd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bd44: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x26bd44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x26bd48: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x26bd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x26bd4c: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x26bd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x26bd50: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26bd50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26bd54: 0xc6820028  lwc1        $f2, 0x28($s4)
    ctx->pc = 0x26bd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26bd58: 0x27a201c4  addiu       $v0, $sp, 0x1C4
    ctx->pc = 0x26bd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
    // 0x26bd5c: 0xc681002c  lwc1        $f1, 0x2C($s4)
    ctx->pc = 0x26bd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26bd60: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x26bd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bd64: 0xe6c20000  swc1        $f2, 0x0($s6)
    ctx->pc = 0x26bd64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x26bd68: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x26bd68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x26bd6c: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x26bd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x26bd70: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x26bd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x26bd74: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26bd74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26bd78: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x26bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x26bd7c: 0x27a201c8  addiu       $v0, $sp, 0x1C8
    ctx->pc = 0x26bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x26bd80: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26bd80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26bd84: 0x8e83003c  lw          $v1, 0x3C($s4)
    ctx->pc = 0x26bd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x26bd88: 0x27a201cc  addiu       $v0, $sp, 0x1CC
    ctx->pc = 0x26bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
    // 0x26bd8c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26bd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26bd90: 0xc6800040  lwc1        $f0, 0x40($s4)
    ctx->pc = 0x26bd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bd94: 0x27a201d0  addiu       $v0, $sp, 0x1D0
    ctx->pc = 0x26bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x26bd98: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x26bd98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x26bd9c: 0xc6800044  lwc1        $f0, 0x44($s4)
    ctx->pc = 0x26bd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bda0: 0x27a201d4  addiu       $v0, $sp, 0x1D4
    ctx->pc = 0x26bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x26bda4: 0xc09af08  jal         func_26BC20
    ctx->pc = 0x26BDA4u;
    SET_GPR_U32(ctx, 31, 0x26BDACu);
    ctx->pc = 0x26BDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BDA4u;
            // 0x26bda8: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BC20u;
    goto label_26bc20;
    ctx->pc = 0x26BDACu;
label_26bdac:
    // 0x26bdac: 0x8ea40028  lw          $a0, 0x28($s5)
    ctx->pc = 0x26bdacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x26bdb0: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x26bdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x26bdb4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x26bdb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26bdb8: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x26BDB8u;
    {
        const bool branch_taken_0x26bdb8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bdb8) {
            ctx->pc = 0x26BDF8u;
            goto label_26bdf8;
        }
    }
    ctx->pc = 0x26BDC0u;
    // 0x26bdc0: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x26bdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x26bdc4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x26bdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x26bdc8: 0x16230007  bne         $s1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26BDC8u;
    {
        const bool branch_taken_0x26bdc8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x26bdc8) {
            ctx->pc = 0x26BDE8u;
            goto label_26bde8;
        }
    }
    ctx->pc = 0x26BDD0u;
    // 0x26bdd0: 0x8ea40018  lw          $a0, 0x18($s5)
    ctx->pc = 0x26bdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x26bdd4: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26BDD4u;
    {
        const bool branch_taken_0x26bdd4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x26bdd4) {
            ctx->pc = 0x26BDF8u;
            goto label_26bdf8;
        }
    }
    ctx->pc = 0x26BDDCu;
    // 0x26bddc: 0x8ea30060  lw          $v1, 0x60($s5)
    ctx->pc = 0x26bddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x26bde0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x26bde0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26bde4: 0xaea30018  sw          $v1, 0x18($s5)
    ctx->pc = 0x26bde4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 3));
label_26bde8:
    // 0x26bde8: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x26bde8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26bdec: 0x1060ffbe  beqz        $v1, . + 4 + (-0x42 << 2)
    ctx->pc = 0x26BDECu;
    {
        const bool branch_taken_0x26bdec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bdec) {
            ctx->pc = 0x26BCE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26bce8;
        }
    }
    ctx->pc = 0x26BDF4u;
    // 0x26bdf4: 0x0  nop
    ctx->pc = 0x26bdf4u;
    // NOP
label_26bdf8:
    // 0x26bdf8: 0xaeb20018  sw          $s2, 0x18($s5)
    ctx->pc = 0x26bdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 18));
    // 0x26bdfc: 0x100001a8  b           . + 4 + (0x1A8 << 2)
    ctx->pc = 0x26BDFCu;
    {
        const bool branch_taken_0x26bdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BDFCu;
            // 0x26be00: 0xa2800004  sb          $zero, 0x4($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bdfc) {
            ctx->pc = 0x26C4A0u;
            goto label_26c4a0;
        }
    }
    ctx->pc = 0x26BE04u;
    // 0x26be04: 0x0  nop
    ctx->pc = 0x26be04u;
    // NOP
label_26be08:
    // 0x26be08: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x26be08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26be0c: 0x80420004  lb          $v0, 0x4($v0)
    ctx->pc = 0x26be0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26be10: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x26BE10u;
    {
        const bool branch_taken_0x26be10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26be10) {
            ctx->pc = 0x26BE70u;
            goto label_26be70;
        }
    }
    ctx->pc = 0x26BE18u;
    // 0x26be18: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x26be18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26be1c: 0xc09acd0  jal         func_26B340
    ctx->pc = 0x26BE1Cu;
    SET_GPR_U32(ctx, 31, 0x26BE24u);
    ctx->pc = 0x26BE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BE1Cu;
            // 0x26be20: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B340u;
    if (runtime->hasFunction(0x26B340u)) {
        auto targetFn = runtime->lookupFunction(0x26B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE24u; }
        if (ctx->pc != 0x26BE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B340_0x26b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE24u; }
        if (ctx->pc != 0x26BE24u) { return; }
    }
    ctx->pc = 0x26BE24u;
label_26be24:
    // 0x26be24: 0x8fa600cc  lw          $a2, 0xCC($sp)
    ctx->pc = 0x26be24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26be28: 0x27a401dc  addiu       $a0, $sp, 0x1DC
    ctx->pc = 0x26be28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x26be2c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26be2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26be30: 0xc09aab8  jal         func_26AAE0
    ctx->pc = 0x26BE30u;
    SET_GPR_U32(ctx, 31, 0x26BE38u);
    ctx->pc = 0x26BE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BE30u;
            // 0x26be34: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26AAE0u;
    if (runtime->hasFunction(0x26AAE0u)) {
        auto targetFn = runtime->lookupFunction(0x26AAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE38u; }
        if (ctx->pc != 0x26BE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026AAE0_0x26aae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE38u; }
        if (ctx->pc != 0x26BE38u) { return; }
    }
    ctx->pc = 0x26BE38u;
label_26be38:
    // 0x26be38: 0x27a201dc  addiu       $v0, $sp, 0x1DC
    ctx->pc = 0x26be38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x26be3c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x26be3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26be40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26BE40u;
    {
        const bool branch_taken_0x26be40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26be40) {
            ctx->pc = 0x26BE50u;
            goto label_26be50;
        }
    }
    ctx->pc = 0x26BE48u;
    // 0x26be48: 0x10000195  b           . + 4 + (0x195 << 2)
    ctx->pc = 0x26BE48u;
    {
        const bool branch_taken_0x26be48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BE48u;
            // 0x26be4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be48) {
            ctx->pc = 0x26C4A0u;
            goto label_26c4a0;
        }
    }
    ctx->pc = 0x26BE50u;
label_26be50:
    // 0x26be50: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x26be50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26be54: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x26be54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x26be58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26be58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26be5c: 0xc09c074  jal         func_2701D0
    ctx->pc = 0x26BE5Cu;
    SET_GPR_U32(ctx, 31, 0x26BE64u);
    ctx->pc = 0x26BE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BE5Cu;
            // 0x26be60: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2701D0u;
    if (runtime->hasFunction(0x2701D0u)) {
        auto targetFn = runtime->lookupFunction(0x2701D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE64u; }
        if (ctx->pc != 0x26BE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002701D0_0x2701d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE64u; }
        if (ctx->pc != 0x26BE64u) { return; }
    }
    ctx->pc = 0x26BE64u;
label_26be64:
    // 0x26be64: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x26BE64u;
    {
        const bool branch_taken_0x26be64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26be64) {
            ctx->pc = 0x26C4A0u;
            goto label_26c4a0;
        }
    }
    ctx->pc = 0x26BE6Cu;
    // 0x26be6c: 0x0  nop
    ctx->pc = 0x26be6cu;
    // NOP
label_26be70:
    // 0x26be70: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x26be70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26be74: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x26be74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x26be78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26be78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26be7c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x26be7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26be80: 0x27a80170  addiu       $t0, $sp, 0x170
    ctx->pc = 0x26be80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x26be84: 0xc09aee8  jal         func_26BBA0
    ctx->pc = 0x26BE84u;
    SET_GPR_U32(ctx, 31, 0x26BE8Cu);
    ctx->pc = 0x26BE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BE84u;
            // 0x26be88: 0xa3a00170  sb          $zero, 0x170($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BBA0u;
    if (runtime->hasFunction(0x26BBA0u)) {
        auto targetFn = runtime->lookupFunction(0x26BBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE8Cu; }
        if (ctx->pc != 0x26BE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BBA0_0x26bba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BE8Cu; }
        if (ctx->pc != 0x26BE8Cu) { return; }
    }
    ctx->pc = 0x26BE8Cu;
label_26be8c:
    // 0x26be8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26be90: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x26be90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x26be94: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x26be94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26be98: 0x8c560074  lw          $s6, 0x74($v0)
    ctx->pc = 0x26be98u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x26be9c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x26be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26bea0: 0x12c000ad  beqz        $s6, . + 4 + (0xAD << 2)
    ctx->pc = 0x26BEA0u;
    {
        const bool branch_taken_0x26bea0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BEA0u;
            // 0x26bea4: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bea0) {
            ctx->pc = 0x26C158u;
            goto label_26c158;
        }
    }
    ctx->pc = 0x26BEA8u;
    // 0x26bea8: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x26bea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x26beac: 0x27a80148  addiu       $t0, $sp, 0x148
    ctx->pc = 0x26beacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x26beb0: 0x27a30158  addiu       $v1, $sp, 0x158
    ctx->pc = 0x26beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x26beb4: 0x27a2015c  addiu       $v0, $sp, 0x15C
    ctx->pc = 0x26beb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x26beb8: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x26beb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x26bebc: 0x27a60164  addiu       $a2, $sp, 0x164
    ctx->pc = 0x26bebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
    // 0x26bec0: 0xafa50120  sw          $a1, 0x120($sp)
    ctx->pc = 0x26bec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
    // 0x26bec4: 0x92890004  lbu         $t1, 0x4($s4)
    ctx->pc = 0x26bec4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x26bec8: 0x27a50124  addiu       $a1, $sp, 0x124
    ctx->pc = 0x26bec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x26becc: 0xa0a90000  sb          $t1, 0x0($a1)
    ctx->pc = 0x26beccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x26bed0: 0x8e890008  lw          $t1, 0x8($s4)
    ctx->pc = 0x26bed0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26bed4: 0x27a50128  addiu       $a1, $sp, 0x128
    ctx->pc = 0x26bed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x26bed8: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x26bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x26bedc: 0xc683000c  lwc1        $f3, 0xC($s4)
    ctx->pc = 0x26bedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26bee0: 0x27a5012c  addiu       $a1, $sp, 0x12C
    ctx->pc = 0x26bee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x26bee4: 0xc6820010  lwc1        $f2, 0x10($s4)
    ctx->pc = 0x26bee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26bee8: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x26bee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26beec: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x26beecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bef0: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x26bef0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x26bef4: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x26bef4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x26bef8: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x26bef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x26befc: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x26befcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x26bf00: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x26bf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26bf04: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x26bf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bf08: 0xe4a10010  swc1        $f1, 0x10($a1)
    ctx->pc = 0x26bf08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x26bf0c: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x26bf0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x26bf10: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x26bf10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x26bf14: 0xafa50144  sw          $a1, 0x144($sp)
    ctx->pc = 0x26bf14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 5));
    // 0x26bf18: 0xc6820028  lwc1        $f2, 0x28($s4)
    ctx->pc = 0x26bf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26bf1c: 0xc681002c  lwc1        $f1, 0x2C($s4)
    ctx->pc = 0x26bf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26bf20: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x26bf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bf24: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x26bf24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x26bf28: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x26bf28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x26bf2c: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x26bf2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x26bf30: 0x8e850034  lw          $a1, 0x34($s4)
    ctx->pc = 0x26bf30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x26bf34: 0xafa50154  sw          $a1, 0x154($sp)
    ctx->pc = 0x26bf34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 5));
    // 0x26bf38: 0x8e850038  lw          $a1, 0x38($s4)
    ctx->pc = 0x26bf38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x26bf3c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x26bf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x26bf40: 0x8e85003c  lw          $a1, 0x3C($s4)
    ctx->pc = 0x26bf40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x26bf44: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x26bf44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x26bf48: 0xc6800040  lwc1        $f0, 0x40($s4)
    ctx->pc = 0x26bf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bf4c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x26bf4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x26bf50: 0xc6800044  lwc1        $f0, 0x44($s4)
    ctx->pc = 0x26bf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bf54: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x26bf54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x26bf58: 0x8ec60028  lw          $a2, 0x28($s6)
    ctx->pc = 0x26bf58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x26bf5c: 0x8ec50024  lw          $a1, 0x24($s6)
    ctx->pc = 0x26bf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x26bf60: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x26bf60u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x26bf64: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x26bf64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x26bf68: 0x8ec3002c  lw          $v1, 0x2C($s6)
    ctx->pc = 0x26bf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x26bf6c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26bf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26bf70: 0x8ec2002c  lw          $v0, 0x2C($s6)
    ctx->pc = 0x26bf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x26bf74: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x26bf74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26bf78: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x26BF78u;
    {
        const bool branch_taken_0x26bf78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BF78u;
            // 0x26bf7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf78) {
            ctx->pc = 0x26BFB8u;
            goto label_26bfb8;
        }
    }
    ctx->pc = 0x26BF80u;
    // 0x26bf80: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x26bf80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf84: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x26bf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_26bf88:
    // 0x26bf88: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x26bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x26bf8c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26bf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26bf90: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x26bf90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
    // 0x26bf94: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x26bf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x26bf98: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x26bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x26bf9c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26bfa0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x26bfa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x26bfa4: 0xaca20044  sw          $v0, 0x44($a1)
    ctx->pc = 0x26bfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 2));
    // 0x26bfa8: 0x8ec2002c  lw          $v0, 0x2C($s6)
    ctx->pc = 0x26bfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x26bfac: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x26bfacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26bfb0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x26BFB0u;
    {
        const bool branch_taken_0x26bfb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BFB0u;
            // 0x26bfb4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bfb0) {
            ctx->pc = 0x26BF88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26bf88;
        }
    }
    ctx->pc = 0x26BFB8u;
label_26bfb8:
    // 0x26bfb8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x26bfb8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bfbc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26bfbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bfc0: 0x26b20030  addiu       $s2, $s5, 0x30
    ctx->pc = 0x26bfc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x26bfc4: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x26bfc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bfc8: 0x27b00120  addiu       $s0, $sp, 0x120
    ctx->pc = 0x26bfc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x26bfcc: 0x26be003c  addiu       $fp, $s5, 0x3C
    ctx->pc = 0x26bfccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 60));
label_26bfd0:
    // 0x26bfd0: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x26bfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26bfd4: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x26bfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26bfd8: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x26bfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bfdc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x26bfdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x26bfe0: 0xc0a3264  jal         func_28C990
    ctx->pc = 0x26BFE0u;
    SET_GPR_U32(ctx, 31, 0x26BFE8u);
    ctx->pc = 0x26BFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BFE0u;
            // 0x26bfe4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BFE8u; }
        if (ctx->pc != 0x26BFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BFE8u; }
        if (ctx->pc != 0x26BFE8u) { return; }
    }
    ctx->pc = 0x26BFE8u;
label_26bfe8:
    // 0x26bfe8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x26bfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x26bfec: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x26bfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26bff0: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x26bff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26bff4: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x26bff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bff8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x26bff8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x26bffc: 0xc0a3264  jal         func_28C990
    ctx->pc = 0x26BFFCu;
    SET_GPR_U32(ctx, 31, 0x26C004u);
    ctx->pc = 0x26C000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BFFCu;
            // 0x26c000: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C004u; }
        if (ctx->pc != 0x26C004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C004u; }
        if (ctx->pc != 0x26C004u) { return; }
    }
    ctx->pc = 0x26C004u;
label_26c004:
    // 0x26c004: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26c004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26c008: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x26c008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x26c00c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26c00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26c010: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x26c010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26c014: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26c014u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26c018: 0x57082a  slt         $at, $v0, $s7
    ctx->pc = 0x26c018u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x26c01c: 0x41b80a  movz        $s7, $v0, $at
    ctx->pc = 0x26c01cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
    // 0x26c020: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x26c020u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x26c024: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x26c024u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x26c028: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x26c028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26c02c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x26c02cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x26c030: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x26C030u;
    {
        const bool branch_taken_0x26c030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C030u;
            // 0x26c034: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c030) {
            ctx->pc = 0x26BFD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26bfd0;
        }
    }
    ctx->pc = 0x26C038u;
    // 0x26c038: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x26c038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x26c03c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26c040: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x26c040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x26c044: 0x27a20124  addiu       $v0, $sp, 0x124
    ctx->pc = 0x26c044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x26c048: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x26c048u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x26c04c: 0x27a2012c  addiu       $v0, $sp, 0x12C
    ctx->pc = 0x26c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x26c050: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x26c050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x26c054: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26c054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26c058: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x26c058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x26c05c: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x26c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x26c060: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26c060u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26c064: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26c064u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26c068: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x26c068u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26c06c: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x26c06cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x26c070: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x26c070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x26c074: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x26c074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x26c078: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26c078u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26c07c: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x26c07cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26c080: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x26c080u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x26c084: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x26c084u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c088: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26C088u;
    {
        const bool branch_taken_0x26c088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C088u;
            // 0x26c08c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c088) {
            ctx->pc = 0x26C0B0u;
            goto label_26c0b0;
        }
    }
    ctx->pc = 0x26C090u;
label_26c090:
    // 0x26c090: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x26c090u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x26c094: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26c094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26c098: 0x0  nop
    ctx->pc = 0x26c098u;
    // NOP
    // 0x26c09c: 0x0  nop
    ctx->pc = 0x26c09cu;
    // NOP
    // 0x26c0a0: 0x0  nop
    ctx->pc = 0x26c0a0u;
    // NOP
    // 0x26c0a4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26C0A4u;
    {
        const bool branch_taken_0x26c0a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c0a4) {
            ctx->pc = 0x26C090u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c090;
        }
    }
    ctx->pc = 0x26C0ACu;
    // 0x26c0ac: 0x0  nop
    ctx->pc = 0x26c0acu;
    // NOP
label_26c0b0:
    // 0x26c0b0: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x26c0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x26c0b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c0b8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x26c0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26c0bc: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x26c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x26c0c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26c0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c0c4: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x26c0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_26c0c8:
    // 0x26c0c8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x26c0c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c0cc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x26C0CCu;
    {
        const bool branch_taken_0x26c0cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C0CCu;
            // 0x26c0d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c0cc) {
            ctx->pc = 0x26C0F8u;
            goto label_26c0f8;
        }
    }
    ctx->pc = 0x26C0D4u;
    // 0x26c0d4: 0x0  nop
    ctx->pc = 0x26c0d4u;
    // NOP
label_26c0d8:
    // 0x26c0d8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x26c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x26c0dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26c0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26c0e0: 0x0  nop
    ctx->pc = 0x26c0e0u;
    // NOP
    // 0x26c0e4: 0x0  nop
    ctx->pc = 0x26c0e4u;
    // NOP
    // 0x26c0e8: 0x0  nop
    ctx->pc = 0x26c0e8u;
    // NOP
    // 0x26c0ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26C0ECu;
    {
        const bool branch_taken_0x26c0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c0ec) {
            ctx->pc = 0x26C0D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c0d8;
        }
    }
    ctx->pc = 0x26C0F4u;
    // 0x26c0f4: 0x0  nop
    ctx->pc = 0x26c0f4u;
    // NOP
label_26c0f8:
    // 0x26c0f8: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x26c0f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26c0fc: 0xc1200a  movz        $a0, $a2, $at
    ctx->pc = 0x26c0fcu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x26c100: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26c100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x26c104: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x26c104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26c108: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x26C108u;
    {
        const bool branch_taken_0x26c108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C108u;
            // 0x26c10c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c108) {
            ctx->pc = 0x26C0C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c0c8;
        }
    }
    ctx->pc = 0x26C110u;
    // 0x26c110: 0x28810019  slti        $at, $a0, 0x19
    ctx->pc = 0x26c110u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x26c114: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x26C114u;
    {
        const bool branch_taken_0x26c114 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c114) {
            ctx->pc = 0x26C120u;
            goto label_26c120;
        }
    }
    ctx->pc = 0x26C11Cu;
    // 0x26c11c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x26c11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_26c120:
    // 0x26c120: 0x27a20128  addiu       $v0, $sp, 0x128
    ctx->pc = 0x26c120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x26c124: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26c124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c128: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x26c128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x26c12c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x26c12cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c130: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26c130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c134: 0xc09af08  jal         func_26BC20
    ctx->pc = 0x26C134u;
    SET_GPR_U32(ctx, 31, 0x26C13Cu);
    ctx->pc = 0x26C138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C134u;
            // 0x26c138: 0x27a70120  addiu       $a3, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BC20u;
    goto label_26bc20;
    ctx->pc = 0x26C13Cu;
label_26c13c:
    // 0x26c13c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x26c13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x26c140: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x26c140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26c144: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26C144u;
    {
        const bool branch_taken_0x26c144 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x26c144) {
            ctx->pc = 0x26C158u;
            goto label_26c158;
        }
    }
    ctx->pc = 0x26C14Cu;
    // 0x26c14c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26c14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c150: 0xc09aa98  jal         func_26AA60
    ctx->pc = 0x26C150u;
    SET_GPR_U32(ctx, 31, 0x26C158u);
    ctx->pc = 0x26C154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C150u;
            // 0x26c154: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26AA60u;
    if (runtime->hasFunction(0x26AA60u)) {
        auto targetFn = runtime->lookupFunction(0x26AA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C158u; }
        if (ctx->pc != 0x26C158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026AA60_0x26aa60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C158u; }
        if (ctx->pc != 0x26C158u) { return; }
    }
    ctx->pc = 0x26C158u;
label_26c158:
    // 0x26c158: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x26c158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26c15c: 0x8c560070  lw          $s6, 0x70($v0)
    ctx->pc = 0x26c15cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x26c160: 0x12c000ad  beqz        $s6, . + 4 + (0xAD << 2)
    ctx->pc = 0x26C160u;
    {
        const bool branch_taken_0x26c160 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c160) {
            ctx->pc = 0x26C418u;
            goto label_26c418;
        }
    }
    ctx->pc = 0x26C168u;
    // 0x26c168: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x26c168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x26c16c: 0x27a800f8  addiu       $t0, $sp, 0xF8
    ctx->pc = 0x26c16cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x26c170: 0x27a30108  addiu       $v1, $sp, 0x108
    ctx->pc = 0x26c170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x26c174: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x26c174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x26c178: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x26c178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x26c17c: 0x27a60114  addiu       $a2, $sp, 0x114
    ctx->pc = 0x26c17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x26c180: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x26c180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x26c184: 0x92890004  lbu         $t1, 0x4($s4)
    ctx->pc = 0x26c184u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x26c188: 0x27a500d4  addiu       $a1, $sp, 0xD4
    ctx->pc = 0x26c188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x26c18c: 0xa0a90000  sb          $t1, 0x0($a1)
    ctx->pc = 0x26c18cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x26c190: 0x8e890008  lw          $t1, 0x8($s4)
    ctx->pc = 0x26c190u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26c194: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x26c194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x26c198: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x26c198u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x26c19c: 0xc683000c  lwc1        $f3, 0xC($s4)
    ctx->pc = 0x26c19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26c1a0: 0x27a500dc  addiu       $a1, $sp, 0xDC
    ctx->pc = 0x26c1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x26c1a4: 0xc6820010  lwc1        $f2, 0x10($s4)
    ctx->pc = 0x26c1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c1a8: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x26c1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c1ac: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x26c1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c1b0: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x26c1b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x26c1b4: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x26c1b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x26c1b8: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x26c1b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x26c1bc: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x26c1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x26c1c0: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x26c1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c1c4: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x26c1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c1c8: 0xe4a10010  swc1        $f1, 0x10($a1)
    ctx->pc = 0x26c1c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x26c1cc: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x26c1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x26c1d0: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x26c1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x26c1d4: 0xafa500f4  sw          $a1, 0xF4($sp)
    ctx->pc = 0x26c1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 5));
    // 0x26c1d8: 0xc6820028  lwc1        $f2, 0x28($s4)
    ctx->pc = 0x26c1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c1dc: 0xc681002c  lwc1        $f1, 0x2C($s4)
    ctx->pc = 0x26c1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c1e0: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x26c1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c1e4: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x26c1e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x26c1e8: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x26c1e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x26c1ec: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x26c1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x26c1f0: 0x8e850034  lw          $a1, 0x34($s4)
    ctx->pc = 0x26c1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x26c1f4: 0xafa50104  sw          $a1, 0x104($sp)
    ctx->pc = 0x26c1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 5));
    // 0x26c1f8: 0x8e850038  lw          $a1, 0x38($s4)
    ctx->pc = 0x26c1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x26c1fc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x26c1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x26c200: 0x8e85003c  lw          $a1, 0x3C($s4)
    ctx->pc = 0x26c200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x26c204: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x26c204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x26c208: 0xc6800040  lwc1        $f0, 0x40($s4)
    ctx->pc = 0x26c208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c20c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x26c20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x26c210: 0xc6800044  lwc1        $f0, 0x44($s4)
    ctx->pc = 0x26c210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c214: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x26c214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x26c218: 0x8ec60028  lw          $a2, 0x28($s6)
    ctx->pc = 0x26c218u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x26c21c: 0x8ec50024  lw          $a1, 0x24($s6)
    ctx->pc = 0x26c21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x26c220: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x26c220u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x26c224: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x26c224u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x26c228: 0x8ec3002c  lw          $v1, 0x2C($s6)
    ctx->pc = 0x26c228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x26c22c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26c22cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26c230: 0x8ec2002c  lw          $v0, 0x2C($s6)
    ctx->pc = 0x26c230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x26c234: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x26c234u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26c238: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x26C238u;
    {
        const bool branch_taken_0x26c238 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C238u;
            // 0x26c23c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c238) {
            ctx->pc = 0x26C278u;
            goto label_26c278;
        }
    }
    ctx->pc = 0x26C240u;
    // 0x26c240: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x26c240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c244: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x26c244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_26c248:
    // 0x26c248: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x26c248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x26c24c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26c24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26c250: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x26c250u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
    // 0x26c254: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x26c254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x26c258: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x26c258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x26c25c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26c260: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x26c260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x26c264: 0xaca20044  sw          $v0, 0x44($a1)
    ctx->pc = 0x26c264u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 2));
    // 0x26c268: 0x8ec2002c  lw          $v0, 0x2C($s6)
    ctx->pc = 0x26c268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x26c26c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x26c26cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26c270: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x26C270u;
    {
        const bool branch_taken_0x26c270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C270u;
            // 0x26c274: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c270) {
            ctx->pc = 0x26C248u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c248;
        }
    }
    ctx->pc = 0x26C278u;
label_26c278:
    // 0x26c278: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x26c278u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c27c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26c27cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c280: 0x26b20030  addiu       $s2, $s5, 0x30
    ctx->pc = 0x26c280u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x26c284: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x26c284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c288: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x26c288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26c28c: 0x26be003c  addiu       $fp, $s5, 0x3C
    ctx->pc = 0x26c28cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 60));
label_26c290:
    // 0x26c290: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x26c290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c294: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x26c294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c298: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x26c298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c29c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x26c29cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x26c2a0: 0xc0a3264  jal         func_28C990
    ctx->pc = 0x26C2A0u;
    SET_GPR_U32(ctx, 31, 0x26C2A8u);
    ctx->pc = 0x26C2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C2A0u;
            // 0x26c2a4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C2A8u; }
        if (ctx->pc != 0x26C2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C2A8u; }
        if (ctx->pc != 0x26C2A8u) { return; }
    }
    ctx->pc = 0x26C2A8u;
label_26c2a8:
    // 0x26c2a8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x26c2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x26c2ac: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x26c2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c2b0: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x26c2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c2b4: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x26c2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c2b8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x26c2b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x26c2bc: 0xc0a3264  jal         func_28C990
    ctx->pc = 0x26C2BCu;
    SET_GPR_U32(ctx, 31, 0x26C2C4u);
    ctx->pc = 0x26C2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C2BCu;
            // 0x26c2c0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C2C4u; }
        if (ctx->pc != 0x26C2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C2C4u; }
        if (ctx->pc != 0x26C2C4u) { return; }
    }
    ctx->pc = 0x26C2C4u;
label_26c2c4:
    // 0x26c2c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26c2c8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x26c2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x26c2cc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26c2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26c2d0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x26c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26c2d4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26c2d8: 0x57082a  slt         $at, $v0, $s7
    ctx->pc = 0x26c2d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x26c2dc: 0x41b80a  movz        $s7, $v0, $at
    ctx->pc = 0x26c2dcu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
    // 0x26c2e0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x26c2e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x26c2e4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x26c2e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x26c2e8: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x26c2e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26c2ec: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x26c2ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x26c2f0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x26C2F0u;
    {
        const bool branch_taken_0x26c2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C2F0u;
            // 0x26c2f4: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c2f0) {
            ctx->pc = 0x26C290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c290;
        }
    }
    ctx->pc = 0x26C2F8u;
    // 0x26c2f8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x26c2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x26c2fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26c300: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x26c300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x26c304: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x26c304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x26c308: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x26c308u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x26c30c: 0x27a200dc  addiu       $v0, $sp, 0xDC
    ctx->pc = 0x26c30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x26c310: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x26c310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x26c314: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26c314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26c318: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x26c318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x26c31c: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x26c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x26c320: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26c320u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26c324: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26c324u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26c328: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x26c328u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26c32c: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x26c32cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x26c330: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x26c330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26c334: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x26c334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x26c338: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26c338u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26c33c: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x26c33cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26c340: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x26c340u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x26c344: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x26c344u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c348: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26C348u;
    {
        const bool branch_taken_0x26c348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C348u;
            // 0x26c34c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c348) {
            ctx->pc = 0x26C370u;
            goto label_26c370;
        }
    }
    ctx->pc = 0x26C350u;
label_26c350:
    // 0x26c350: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x26c350u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x26c354: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26c354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26c358: 0x0  nop
    ctx->pc = 0x26c358u;
    // NOP
    // 0x26c35c: 0x0  nop
    ctx->pc = 0x26c35cu;
    // NOP
    // 0x26c360: 0x0  nop
    ctx->pc = 0x26c360u;
    // NOP
    // 0x26c364: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26C364u;
    {
        const bool branch_taken_0x26c364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c364) {
            ctx->pc = 0x26C350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c350;
        }
    }
    ctx->pc = 0x26C36Cu;
    // 0x26c36c: 0x0  nop
    ctx->pc = 0x26c36cu;
    // NOP
label_26c370:
    // 0x26c370: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x26c370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x26c374: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c378: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x26c378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26c37c: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x26c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x26c380: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26c380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c384: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x26c384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_26c388:
    // 0x26c388: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x26c388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c38c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x26C38Cu;
    {
        const bool branch_taken_0x26c38c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C38Cu;
            // 0x26c390: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c38c) {
            ctx->pc = 0x26C3B8u;
            goto label_26c3b8;
        }
    }
    ctx->pc = 0x26C394u;
    // 0x26c394: 0x0  nop
    ctx->pc = 0x26c394u;
    // NOP
label_26c398:
    // 0x26c398: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x26c398u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x26c39c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26c39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26c3a0: 0x0  nop
    ctx->pc = 0x26c3a0u;
    // NOP
    // 0x26c3a4: 0x0  nop
    ctx->pc = 0x26c3a4u;
    // NOP
    // 0x26c3a8: 0x0  nop
    ctx->pc = 0x26c3a8u;
    // NOP
    // 0x26c3ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26C3ACu;
    {
        const bool branch_taken_0x26c3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c3ac) {
            ctx->pc = 0x26C398u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c398;
        }
    }
    ctx->pc = 0x26C3B4u;
    // 0x26c3b4: 0x0  nop
    ctx->pc = 0x26c3b4u;
    // NOP
label_26c3b8:
    // 0x26c3b8: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x26c3b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26c3bc: 0xc1200a  movz        $a0, $a2, $at
    ctx->pc = 0x26c3bcu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x26c3c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26c3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x26c3c4: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x26c3c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26c3c8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x26C3C8u;
    {
        const bool branch_taken_0x26c3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C3C8u;
            // 0x26c3cc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c3c8) {
            ctx->pc = 0x26C388u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c388;
        }
    }
    ctx->pc = 0x26C3D0u;
    // 0x26c3d0: 0x28810019  slti        $at, $a0, 0x19
    ctx->pc = 0x26c3d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x26c3d4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x26C3D4u;
    {
        const bool branch_taken_0x26c3d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c3d4) {
            ctx->pc = 0x26C3E0u;
            goto label_26c3e0;
        }
    }
    ctx->pc = 0x26C3DCu;
    // 0x26c3dc: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x26c3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_26c3e0:
    // 0x26c3e0: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x26c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x26c3e4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26c3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c3e8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x26c3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x26c3ec: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x26c3ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c3f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26c3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c3f4: 0xc09af08  jal         func_26BC20
    ctx->pc = 0x26C3F4u;
    SET_GPR_U32(ctx, 31, 0x26C3FCu);
    ctx->pc = 0x26C3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C3F4u;
            // 0x26c3f8: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BC20u;
    goto label_26bc20;
    ctx->pc = 0x26C3FCu;
label_26c3fc:
    // 0x26c3fc: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x26c3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x26c400: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x26c400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26c404: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26C404u;
    {
        const bool branch_taken_0x26c404 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x26c404) {
            ctx->pc = 0x26C418u;
            goto label_26c418;
        }
    }
    ctx->pc = 0x26C40Cu;
    // 0x26c40c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26c40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c410: 0xc09aa98  jal         func_26AA60
    ctx->pc = 0x26C410u;
    SET_GPR_U32(ctx, 31, 0x26C418u);
    ctx->pc = 0x26C414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C410u;
            // 0x26c414: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26AA60u;
    if (runtime->hasFunction(0x26AA60u)) {
        auto targetFn = runtime->lookupFunction(0x26AA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C418u; }
        if (ctx->pc != 0x26C418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026AA60_0x26aa60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C418u; }
        if (ctx->pc != 0x26C418u) { return; }
    }
    ctx->pc = 0x26C418u;
label_26c418:
    // 0x26c418: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x26c418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26c41c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26C41Cu;
    {
        const bool branch_taken_0x26c41c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x26c41c) {
            ctx->pc = 0x26C430u;
            goto label_26c430;
        }
    }
    ctx->pc = 0x26C424u;
    // 0x26c424: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x26c424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26c428: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C428u;
    {
        const bool branch_taken_0x26c428 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26c428) {
            ctx->pc = 0x26C438u;
            goto label_26c438;
        }
    }
    ctx->pc = 0x26C430u;
label_26c430:
    // 0x26c430: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x26C430u;
    {
        const bool branch_taken_0x26c430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C430u;
            // 0x26c434: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c430) {
            ctx->pc = 0x26C4A0u;
            goto label_26c4a0;
        }
    }
    ctx->pc = 0x26C438u;
label_26c438:
    // 0x26c438: 0x8fa600cc  lw          $a2, 0xCC($sp)
    ctx->pc = 0x26c438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26c43c: 0x27a401d8  addiu       $a0, $sp, 0x1D8
    ctx->pc = 0x26c43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x26c440: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26c440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c444: 0xc09aab8  jal         func_26AAE0
    ctx->pc = 0x26C444u;
    SET_GPR_U32(ctx, 31, 0x26C44Cu);
    ctx->pc = 0x26C448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C444u;
            // 0x26c448: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26AAE0u;
    if (runtime->hasFunction(0x26AAE0u)) {
        auto targetFn = runtime->lookupFunction(0x26AAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C44Cu; }
        if (ctx->pc != 0x26C44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026AAE0_0x26aae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C44Cu; }
        if (ctx->pc != 0x26C44Cu) { return; }
    }
    ctx->pc = 0x26C44Cu;
label_26c44c:
    // 0x26c44c: 0x27a201d8  addiu       $v0, $sp, 0x1D8
    ctx->pc = 0x26c44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x26c450: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x26c450u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26c454: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26C454u;
    {
        const bool branch_taken_0x26c454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c454) {
            ctx->pc = 0x26C468u;
            goto label_26c468;
        }
    }
    ctx->pc = 0x26C45Cu;
    // 0x26c45c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26C45Cu;
    {
        const bool branch_taken_0x26c45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C45Cu;
            // 0x26c460: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c45c) {
            ctx->pc = 0x26C4A0u;
            goto label_26c4a0;
        }
    }
    ctx->pc = 0x26C464u;
    // 0x26c464: 0x0  nop
    ctx->pc = 0x26c464u;
    // NOP
label_26c468:
    // 0x26c468: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x26c468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x26c46c: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x26c46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26c470: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x26c470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c474: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x26c474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x26c478: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26c478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c47c: 0x27a80170  addiu       $t0, $sp, 0x170
    ctx->pc = 0x26c47cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x26c480: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26c480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26c484: 0xc09c0a0  jal         func_270280
    ctx->pc = 0x26C484u;
    SET_GPR_U32(ctx, 31, 0x26C48Cu);
    ctx->pc = 0x26C488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C484u;
            // 0x26c488: 0xaea20028  sw          $v0, 0x28($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270280u;
    if (runtime->hasFunction(0x270280u)) {
        auto targetFn = runtime->lookupFunction(0x270280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C48Cu; }
        if (ctx->pc != 0x26C48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00270280_0x270280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C48Cu; }
        if (ctx->pc != 0x26C48Cu) { return; }
    }
    ctx->pc = 0x26C48Cu;
label_26c48c:
    // 0x26c48c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x26c48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26c490: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x26c490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26c494: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26c494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26c498: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26c498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26c49c: 0x0  nop
    ctx->pc = 0x26c49cu;
    // NOP
label_26c4a0:
    // 0x26c4a0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x26c4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26c4a4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x26c4a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26c4a8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x26c4a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26c4ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x26c4acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26c4b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26c4b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26c4b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26c4b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26c4b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26c4b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c4bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26c4bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c4c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26c4c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c4c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26c4c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x26C4C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C4C8u;
            // 0x26c4cc: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26C4D0u;
}
