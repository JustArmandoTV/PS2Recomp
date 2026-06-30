#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024D000
// Address: 0x24d000 - 0x24d440
void sub_0024D000_0x24d000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D000_0x24d000");
#endif

    ctx->pc = 0x24d000u;

    // 0x24d000: 0x8cca0038  lw          $t2, 0x38($a2)
    ctx->pc = 0x24d000u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x24d004: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24d004u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24d008: 0x3c09c000  lui         $t1, 0xC000
    ctx->pc = 0x24d008u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)49152 << 16));
    // 0x24d00c: 0x3c0f0064  lui         $t7, 0x64
    ctx->pc = 0x24d00cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)100 << 16));
    // 0x24d010: 0x44894800  mtc1        $t1, $f9
    ctx->pc = 0x24d010u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x24d014: 0x3c0b4080  lui         $t3, 0x4080
    ctx->pc = 0x24d014u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16512 << 16));
    // 0x24d018: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x24d018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x24d01c: 0x25eff860  addiu       $t7, $t7, -0x7A0
    ctx->pc = 0x24d01cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965344));
    // 0x24d020: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x24d020u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x24d024: 0x27a80044  addiu       $t0, $sp, 0x44
    ctx->pc = 0x24d024u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x24d028: 0xc4a10060  lwc1        $f1, 0x60($a1)
    ctx->pc = 0x24d028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d02c: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x24d02cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x24d030: 0x3149ffff  andi        $t1, $t2, 0xFFFF
    ctx->pc = 0x24d030u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x24d034: 0x314c000f  andi        $t4, $t2, 0xF
    ctx->pc = 0x24d034u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
    // 0x24d038: 0x312900e0  andi        $t1, $t1, 0xE0
    ctx->pc = 0x24d038u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)224);
    // 0x24d03c: 0xc5080  sll         $t2, $t4, 2
    ctx->pc = 0x24d03cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x24d040: 0x94843  sra         $t1, $t1, 1
    ctx->pc = 0x24d040u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 1));
    // 0x24d044: 0x1456821  addu        $t5, $t2, $a1
    ctx->pc = 0x24d044u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x24d048: 0x1e94821  addu        $t1, $t7, $t1
    ctx->pc = 0x24d048u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x24d04c: 0x15d6021  addu        $t4, $t2, $sp
    ctx->pc = 0x24d04cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x24d050: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x24d050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d054: 0x3c0a3400  lui         $t2, 0x3400
    ctx->pc = 0x24d054u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)13312 << 16));
    // 0x24d058: 0x448b2000  mtc1        $t3, $f4
    ctx->pc = 0x24d058u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x24d05c: 0x27a3004c  addiu       $v1, $sp, 0x4C
    ctx->pc = 0x24d05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x24d060: 0x448a3000  mtc1        $t2, $f6
    ctx->pc = 0x24d060u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x24d064: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24d064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d068: 0x0  nop
    ctx->pc = 0x24d068u;
    // NOP
    // 0x24d06c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x24d06cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x24d070: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x24d070u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x24d074: 0xc5220004  lwc1        $f2, 0x4($t1)
    ctx->pc = 0x24d074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d078: 0xc4a10064  lwc1        $f1, 0x64($a1)
    ctx->pc = 0x24d078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d07c: 0xc7aa0040  lwc1        $f10, 0x40($sp)
    ctx->pc = 0x24d07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x24d080: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x24d080u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x24d084: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x24d084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24d088: 0xc5220008  lwc1        $f2, 0x8($t1)
    ctx->pc = 0x24d088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d08c: 0xc4a10068  lwc1        $f1, 0x68($a1)
    ctx->pc = 0x24d08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d090: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x24d090u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x24d094: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x24d094u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x24d098: 0xc522000c  lwc1        $f2, 0xC($t1)
    ctx->pc = 0x24d098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d09c: 0xc4a1006c  lwc1        $f1, 0x6C($a1)
    ctx->pc = 0x24d09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d0a0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x24d0a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x24d0a4: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x24d0a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x24d0a8: 0x8ccb003c  lw          $t3, 0x3C($a2)
    ctx->pc = 0x24d0a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x24d0ac: 0xc4a10070  lwc1        $f1, 0x70($a1)
    ctx->pc = 0x24d0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d0b0: 0x316affff  andi        $t2, $t3, 0xFFFF
    ctx->pc = 0x24d0b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x24d0b4: 0x3178000f  andi        $t8, $t3, 0xF
    ctx->pc = 0x24d0b4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)15);
    // 0x24d0b8: 0x314b00e0  andi        $t3, $t2, 0xE0
    ctx->pc = 0x24d0b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)224);
    // 0x24d0bc: 0xb7043  sra         $t6, $t3, 1
    ctx->pc = 0x24d0bcu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 11), 1));
    // 0x24d0c0: 0x185100  sll         $t2, $t8, 4
    ctx->pc = 0x24d0c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
    // 0x24d0c4: 0x1ee7021  addu        $t6, $t7, $t6
    ctx->pc = 0x24d0c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x24d0c8: 0x1455821  addu        $t3, $t2, $a1
    ctx->pc = 0x24d0c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x24d0cc: 0xc5c20000  lwc1        $f2, 0x0($t6)
    ctx->pc = 0x24d0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d0d0: 0x185080  sll         $t2, $t8, 2
    ctx->pc = 0x24d0d0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x24d0d4: 0x1455021  addu        $t2, $t2, $a1
    ctx->pc = 0x24d0d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x24d0d8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x24d0d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x24d0dc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x24d0dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x24d0e0: 0xc5c20004  lwc1        $f2, 0x4($t6)
    ctx->pc = 0x24d0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d0e4: 0xc4a10074  lwc1        $f1, 0x74($a1)
    ctx->pc = 0x24d0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d0e8: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x24d0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d0ec: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x24d0ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x24d0f0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x24d0f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x24d0f4: 0xc5c70008  lwc1        $f7, 0x8($t6)
    ctx->pc = 0x24d0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24d0f8: 0xc4a10078  lwc1        $f1, 0x78($a1)
    ctx->pc = 0x24d0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d0fc: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x24d0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d100: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x24d100u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x24d104: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x24d104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x24d108: 0xc5c8000c  lwc1        $f8, 0xC($t6)
    ctx->pc = 0x24d108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x24d10c: 0xc4a7007c  lwc1        $f7, 0x7C($a1)
    ctx->pc = 0x24d10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24d110: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x24d110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d114: 0x460741c2  mul.s       $f7, $f8, $f7
    ctx->pc = 0x24d114u;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x24d118: 0xe7a7001c  swc1        $f7, 0x1C($sp)
    ctx->pc = 0x24d118u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x24d11c: 0xc5480070  lwc1        $f8, 0x70($t2)
    ctx->pc = 0x24d11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x24d120: 0xc5670020  lwc1        $f7, 0x20($t3)
    ctx->pc = 0x24d120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24d124: 0x46082b02  mul.s       $f12, $f5, $f8
    ctx->pc = 0x24d124u;
    ctx->f[12] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x24d128: 0x46084142  mul.s       $f5, $f8, $f8
    ctx->pc = 0x24d128u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x24d12c: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x24d12cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x24d130: 0x46076142  mul.s       $f5, $f12, $f7
    ctx->pc = 0x24d130u;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[7]);
    // 0x24d134: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x24d134u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24d138: 0xc5650024  lwc1        $f5, 0x24($t3)
    ctx->pc = 0x24d138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24d13c: 0xc7a80030  lwc1        $f8, 0x30($sp)
    ctx->pc = 0x24d13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x24d140: 0x46056142  mul.s       $f5, $f12, $f5
    ctx->pc = 0x24d140u;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x24d144: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x24d144u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24d148: 0xc5650028  lwc1        $f5, 0x28($t3)
    ctx->pc = 0x24d148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24d14c: 0xc7a70034  lwc1        $f7, 0x34($sp)
    ctx->pc = 0x24d14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24d150: 0x46056142  mul.s       $f5, $f12, $f5
    ctx->pc = 0x24d150u;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x24d154: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x24d154u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24d158: 0xc56b002c  lwc1        $f11, 0x2C($t3)
    ctx->pc = 0x24d158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x24d15c: 0xc7a50038  lwc1        $f5, 0x38($sp)
    ctx->pc = 0x24d15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24d160: 0x460b62c2  mul.s       $f11, $f12, $f11
    ctx->pc = 0x24d160u;
    ctx->f[11] = FPU_MUL_S(ctx->f[12], ctx->f[11]);
    // 0x24d164: 0xe7ab003c  swc1        $f11, 0x3C($sp)
    ctx->pc = 0x24d164u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x24d168: 0xc4ae0020  lwc1        $f14, 0x20($a1)
    ctx->pc = 0x24d168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x24d16c: 0xc4ad0030  lwc1        $f13, 0x30($a1)
    ctx->pc = 0x24d16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x24d170: 0xc4ac0040  lwc1        $f12, 0x40($a1)
    ctx->pc = 0x24d170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24d174: 0xc4ab0050  lwc1        $f11, 0x50($a1)
    ctx->pc = 0x24d174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x24d178: 0x460e1b82  mul.s       $f14, $f3, $f14
    ctx->pc = 0x24d178u;
    ctx->f[14] = FPU_MUL_S(ctx->f[3], ctx->f[14]);
    // 0x24d17c: 0x460d1342  mul.s       $f13, $f2, $f13
    ctx->pc = 0x24d17cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
    // 0x24d180: 0x460d7018  adda.s      $f14, $f13
    ctx->pc = 0x24d180u;
    ctx->f[31] = FPU_ADD_S(ctx->f[14], ctx->f[13]);
    // 0x24d184: 0x460c0b1c  madd.s      $f12, $f1, $f12
    ctx->pc = 0x24d184u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[12]));
    // 0x24d188: 0x460c5ac0  add.s       $f11, $f11, $f12
    ctx->pc = 0x24d188u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[12]);
    // 0x24d18c: 0xe7ab0010  swc1        $f11, 0x10($sp)
    ctx->pc = 0x24d18cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x24d190: 0xc7ab0010  lwc1        $f11, 0x10($sp)
    ctx->pc = 0x24d190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x24d194: 0xc4af0024  lwc1        $f15, 0x24($a1)
    ctx->pc = 0x24d194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x24d198: 0xc4ae0034  lwc1        $f14, 0x34($a1)
    ctx->pc = 0x24d198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x24d19c: 0xc4ad0044  lwc1        $f13, 0x44($a1)
    ctx->pc = 0x24d19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x24d1a0: 0xc4ac0054  lwc1        $f12, 0x54($a1)
    ctx->pc = 0x24d1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24d1a4: 0x460a5a81  sub.s       $f10, $f11, $f10
    ctx->pc = 0x24d1a4u;
    ctx->f[10] = FPU_SUB_S(ctx->f[11], ctx->f[10]);
    // 0x24d1a8: 0x460f1bc2  mul.s       $f15, $f3, $f15
    ctx->pc = 0x24d1a8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[3], ctx->f[15]);
    // 0x24d1ac: 0x460e12c2  mul.s       $f11, $f2, $f14
    ctx->pc = 0x24d1acu;
    ctx->f[11] = FPU_MUL_S(ctx->f[2], ctx->f[14]);
    // 0x24d1b0: 0x460b7818  adda.s      $f15, $f11
    ctx->pc = 0x24d1b0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[15], ctx->f[11]);
    // 0x24d1b4: 0x460d0adc  madd.s      $f11, $f1, $f13
    ctx->pc = 0x24d1b4u;
    ctx->f[11] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[13]));
    // 0x24d1b8: 0x460b62c0  add.s       $f11, $f12, $f11
    ctx->pc = 0x24d1b8u;
    ctx->f[11] = FPU_ADD_S(ctx->f[12], ctx->f[11]);
    // 0x24d1bc: 0xe7ab0014  swc1        $f11, 0x14($sp)
    ctx->pc = 0x24d1bcu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x24d1c0: 0xc4af0028  lwc1        $f15, 0x28($a1)
    ctx->pc = 0x24d1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x24d1c4: 0xc4ae0038  lwc1        $f14, 0x38($a1)
    ctx->pc = 0x24d1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x24d1c8: 0xc4ad0048  lwc1        $f13, 0x48($a1)
    ctx->pc = 0x24d1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x24d1cc: 0xc4ac0058  lwc1        $f12, 0x58($a1)
    ctx->pc = 0x24d1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24d1d0: 0xc7ab0014  lwc1        $f11, 0x14($sp)
    ctx->pc = 0x24d1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x24d1d4: 0x460f1bc2  mul.s       $f15, $f3, $f15
    ctx->pc = 0x24d1d4u;
    ctx->f[15] = FPU_MUL_S(ctx->f[3], ctx->f[15]);
    // 0x24d1d8: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x24d1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x24d1dc: 0x460e10c2  mul.s       $f3, $f2, $f14
    ctx->pc = 0x24d1dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[14]);
    // 0x24d1e0: 0xe7aa0020  swc1        $f10, 0x20($sp)
    ctx->pc = 0x24d1e0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24d1e4: 0x46037818  adda.s      $f15, $f3
    ctx->pc = 0x24d1e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[15], ctx->f[3]);
    // 0x24d1e8: 0x460d085c  madd.s      $f1, $f1, $f13
    ctx->pc = 0x24d1e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[13]));
    // 0x24d1ec: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x24d1ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x24d1f0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x24d1f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x24d1f4: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x24d1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d1f8: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x24d1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d1fc: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x24d1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d200: 0xc7aa001c  lwc1        $f10, 0x1C($sp)
    ctx->pc = 0x24d200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x24d204: 0x46015841  sub.s       $f1, $f11, $f1
    ctx->pc = 0x24d204u;
    ctx->f[1] = FPU_SUB_S(ctx->f[11], ctx->f[1]);
    // 0x24d208: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x24d208u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24d20c: 0x46024202  mul.s       $f8, $f8, $f2
    ctx->pc = 0x24d20cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x24d210: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x24d210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d214: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x24d214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d218: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x24d218u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x24d21c: 0x460238c2  mul.s       $f3, $f7, $f2
    ctx->pc = 0x24d21cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x24d220: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x24d220u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24d224: 0xc4670000  lwc1        $f7, 0x0($v1)
    ctx->pc = 0x24d224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24d228: 0x46034018  adda.s      $f8, $f3
    ctx->pc = 0x24d228u;
    ctx->f[31] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
    // 0x24d22c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x24d22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d230: 0x460750c1  sub.s       $f3, $f10, $f7
    ctx->pc = 0x24d230u;
    ctx->f[3] = FPU_SUB_S(ctx->f[10], ctx->f[7]);
    // 0x24d234: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x24d234u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x24d238: 0xc5a70060  lwc1        $f7, 0x60($t5)
    ctx->pc = 0x24d238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24d23c: 0x46012a1c  madd.s      $f8, $f5, $f1
    ctx->pc = 0x24d23cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x24d240: 0xc5850030  lwc1        $f5, 0x30($t4)
    ctx->pc = 0x24d240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24d244: 0xc5830020  lwc1        $f3, 0x20($t4)
    ctx->pc = 0x24d244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d248: 0x46074ac2  mul.s       $f11, $f9, $f7
    ctx->pc = 0x24d248u;
    ctx->f[11] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
    // 0x24d24c: 0x46055a82  mul.s       $f10, $f11, $f5
    ctx->pc = 0x24d24cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x24d250: 0x460b5942  mul.s       $f5, $f11, $f11
    ctx->pc = 0x24d250u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x24d254: 0x4604281a  mula.s      $f5, $f4
    ctx->pc = 0x24d254u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x24d258: 0x460a515d  msub.s      $f5, $f10, $f10
    ctx->pc = 0x24d258u;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[10], ctx->f[10]));
    // 0x24d25c: 0x460358c2  mul.s       $f3, $f11, $f3
    ctx->pc = 0x24d25cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x24d260: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x24d260u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x24d264: 0x460029c5  abs.s       $f7, $f5
    ctx->pc = 0x24d264u;
    ctx->f[7] = FPU_ABS_S(ctx->f[5]);
    // 0x24d268: 0x460730c2  mul.s       $f3, $f6, $f7
    ctx->pc = 0x24d268u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x24d26c: 0x460a425d  msub.s      $f9, $f8, $f10
    ctx->pc = 0x24d26cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[10]));
    // 0x24d270: 0x46034836  c.le.s      $f9, $f3
    ctx->pc = 0x24d270u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d274: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x24D274u;
    {
        const bool branch_taken_0x24d274 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24D278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D274u;
            // 0x24d278: 0x3c0a3f7f  lui         $t2, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d274) {
            ctx->pc = 0x24D298u;
            goto label_24d298;
        }
    }
    ctx->pc = 0x24D27Cu;
    // 0x24d27c: 0x354afffe  ori         $t2, $t2, 0xFFFE
    ctx->pc = 0x24d27cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65534);
    // 0x24d280: 0x448a2800  mtc1        $t2, $f5
    ctx->pc = 0x24d280u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x24d284: 0x0  nop
    ctx->pc = 0x24d284u;
    // NOP
    // 0x24d288: 0x460728c2  mul.s       $f3, $f5, $f7
    ctx->pc = 0x24d288u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x24d28c: 0x46034834  c.lt.s      $f9, $f3
    ctx->pc = 0x24d28cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d290: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x24D290u;
    {
        const bool branch_taken_0x24d290 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24d290) {
            ctx->pc = 0x24D2A0u;
            goto label_24d2a0;
        }
    }
    ctx->pc = 0x24D298u;
label_24d298:
    // 0x24d298: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x24D298u;
    {
        const bool branch_taken_0x24d298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D298u;
            // 0x24d29c: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d298) {
            ctx->pc = 0x24D438u;
            goto label_24d438;
        }
    }
    ctx->pc = 0x24D2A0u;
label_24d2a0:
    // 0x24d2a0: 0x0  nop
    ctx->pc = 0x24d2a0u;
    // NOP
    // 0x24d2a4: 0x46074a43  div.s       $f9, $f9, $f7
    ctx->pc = 0x24d2a4u;
    if (ctx->f[7] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = copysignf(INFINITY, ctx->f[9] * 0.0f); } else ctx->f[9] = ctx->f[9] / ctx->f[7];
    // 0x24d2a8: 0x460a48c2  mul.s       $f3, $f9, $f10
    ctx->pc = 0x24d2a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[10]);
    // 0x24d2ac: 0x460819c1  sub.s       $f7, $f3, $f8
    ctx->pc = 0x24d2acu;
    ctx->f[7] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x24d2b0: 0x460430c2  mul.s       $f3, $f6, $f4
    ctx->pc = 0x24d2b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x24d2b4: 0x46033836  c.le.s      $f7, $f3
    ctx->pc = 0x24d2b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d2b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24D2B8u;
    {
        const bool branch_taken_0x24d2b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24D2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D2B8u;
            // 0x24d2bc: 0x460428c2  mul.s       $f3, $f5, $f4 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d2b8) {
            ctx->pc = 0x24D2D0u;
            goto label_24d2d0;
        }
    }
    ctx->pc = 0x24D2C0u;
    // 0x24d2c0: 0x46033834  c.lt.s      $f7, $f3
    ctx->pc = 0x24d2c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d2c4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x24D2C4u;
    {
        const bool branch_taken_0x24d2c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24d2c4) {
            ctx->pc = 0x24D2D8u;
            goto label_24d2d8;
        }
    }
    ctx->pc = 0x24D2CCu;
    // 0x24d2cc: 0x0  nop
    ctx->pc = 0x24d2ccu;
    // NOP
label_24d2d0:
    // 0x24d2d0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x24D2D0u;
    {
        const bool branch_taken_0x24d2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D2D0u;
            // 0x24d2d4: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d2d0) {
            ctx->pc = 0x24D438u;
            goto label_24d438;
        }
    }
    ctx->pc = 0x24D2D8u;
label_24d2d8:
    // 0x24d2d8: 0x3c0b3f00  lui         $t3, 0x3F00
    ctx->pc = 0x24d2d8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16128 << 16));
    // 0x24d2dc: 0xc5840040  lwc1        $f4, 0x40($t4)
    ctx->pc = 0x24d2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24d2e0: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x24d2e0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
    // 0x24d2e4: 0x460958c2  mul.s       $f3, $f11, $f9
    ctx->pc = 0x24d2e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[9]);
    // 0x24d2e8: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x24d2e8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x24d2ec: 0xe5830040  swc1        $f3, 0x40($t4)
    ctx->pc = 0x24d2ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 64), bits); }
    // 0x24d2f0: 0x448b1800  mtc1        $t3, $f3
    ctx->pc = 0x24d2f0u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x24d2f4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x24d2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x24d2f8: 0x460b18c2  mul.s       $f3, $f3, $f11
    ctx->pc = 0x24d2f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
    // 0x24d2fc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x24d2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24d300: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x24d300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24d304: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x24d304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24d308: 0xe5830000  swc1        $f3, 0x0($t4)
    ctx->pc = 0x24d308u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x24d30c: 0xc7aa0038  lwc1        $f10, 0x38($sp)
    ctx->pc = 0x24d30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x24d310: 0xc7a80004  lwc1        $f8, 0x4($sp)
    ctx->pc = 0x24d310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x24d314: 0xc7a70034  lwc1        $f7, 0x34($sp)
    ctx->pc = 0x24d314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24d318: 0xc7a90008  lwc1        $f9, 0x8($sp)
    ctx->pc = 0x24d318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x24d31c: 0xc7a60030  lwc1        $f6, 0x30($sp)
    ctx->pc = 0x24d31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24d320: 0xc7a50000  lwc1        $f5, 0x0($sp)
    ctx->pc = 0x24d320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24d324: 0xc4a300b4  lwc1        $f3, 0xB4($a1)
    ctx->pc = 0x24d324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d328: 0x460a401a  mula.s      $f8, $f10
    ctx->pc = 0x24d328u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
    // 0x24d32c: 0x448a2000  mtc1        $t2, $f4
    ctx->pc = 0x24d32cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x24d330: 0x46074add  msub.s      $f11, $f9, $f7
    ctx->pc = 0x24d330u;
    ctx->f[11] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[7]));
    // 0x24d334: 0x4606481a  mula.s      $f9, $f6
    ctx->pc = 0x24d334u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x24d338: 0x460a2a5d  msub.s      $f9, $f5, $f10
    ctx->pc = 0x24d338u;
    ctx->f[9] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[10]));
    // 0x24d33c: 0x4607281a  mula.s      $f5, $f7
    ctx->pc = 0x24d33cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x24d340: 0x460641dd  msub.s      $f7, $f8, $f6
    ctx->pc = 0x24d340u;
    ctx->f[7] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[6]));
    // 0x24d344: 0x460b5982  mul.s       $f6, $f11, $f11
    ctx->pc = 0x24d344u;
    ctx->f[6] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x24d348: 0x46094942  mul.s       $f5, $f9, $f9
    ctx->pc = 0x24d348u;
    ctx->f[5] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x24d34c: 0x46053018  adda.s      $f6, $f5
    ctx->pc = 0x24d34cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x24d350: 0x4607395c  madd.s      $f5, $f7, $f7
    ctx->pc = 0x24d350u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[7]));
    // 0x24d354: 0x46050144  c1          0x50144
    ctx->pc = 0x24d354u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x24d358: 0x46032834  c.lt.s      $f5, $f3
    ctx->pc = 0x24d358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d35c: 0x460520c3  div.s       $f3, $f4, $f5
    ctx->pc = 0x24d35cu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[3] = ctx->f[4] / ctx->f[5];
    // 0x24d360: 0x46035ac2  mul.s       $f11, $f11, $f3
    ctx->pc = 0x24d360u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x24d364: 0x46034a42  mul.s       $f9, $f9, $f3
    ctx->pc = 0x24d364u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x24d368: 0x460339c2  mul.s       $f7, $f7, $f3
    ctx->pc = 0x24d368u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x24d36c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x24D36Cu;
    {
        const bool branch_taken_0x24d36c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24D370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D36Cu;
            // 0x24d370: 0x46030182  mul.s       $f6, $f0, $f3 (Delay Slot)
        ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d36c) {
            ctx->pc = 0x24D380u;
            goto label_24d380;
        }
    }
    ctx->pc = 0x24D374u;
    // 0x24d374: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x24D374u;
    {
        const bool branch_taken_0x24d374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D374u;
            // 0x24d378: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d374) {
            ctx->pc = 0x24D438u;
            goto label_24d438;
        }
    }
    ctx->pc = 0x24D37Cu;
    // 0x24d37c: 0x0  nop
    ctx->pc = 0x24d37cu;
    // NOP
label_24d380:
    // 0x24d380: 0xc5250000  lwc1        $f5, 0x0($t1)
    ctx->pc = 0x24d380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24d384: 0xc5240004  lwc1        $f4, 0x4($t1)
    ctx->pc = 0x24d384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24d388: 0xc5230008  lwc1        $f3, 0x8($t1)
    ctx->pc = 0x24d388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d38c: 0x46055942  mul.s       $f5, $f11, $f5
    ctx->pc = 0x24d38cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x24d390: 0x46044902  mul.s       $f4, $f9, $f4
    ctx->pc = 0x24d390u;
    ctx->f[4] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
    // 0x24d394: 0x46042818  adda.s      $f5, $f4
    ctx->pc = 0x24d394u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x24d398: 0x460338dc  madd.s      $f3, $f7, $f3
    ctx->pc = 0x24d398u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
    // 0x24d39c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x24d39cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d3a0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24D3A0u;
    {
        const bool branch_taken_0x24d3a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24d3a0) {
            ctx->pc = 0x24D3B8u;
            goto label_24d3b8;
        }
    }
    ctx->pc = 0x24D3A8u;
    // 0x24d3a8: 0x46005ac7  neg.s       $f11, $f11
    ctx->pc = 0x24d3a8u;
    ctx->f[11] = FPU_NEG_S(ctx->f[11]);
    // 0x24d3ac: 0x46004a47  neg.s       $f9, $f9
    ctx->pc = 0x24d3acu;
    ctx->f[9] = FPU_NEG_S(ctx->f[9]);
    // 0x24d3b0: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x24d3b0u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
    // 0x24d3b4: 0x46003187  neg.s       $f6, $f6
    ctx->pc = 0x24d3b4u;
    ctx->f[6] = FPU_NEG_S(ctx->f[6]);
label_24d3b8:
    // 0x24d3b8: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x24d3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d3bc: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x24d3bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x24d3c0: 0x460358c2  mul.s       $f3, $f11, $f3
    ctx->pc = 0x24d3c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x24d3c4: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x24d3c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x24d3c8: 0xc4a000b0  lwc1        $f0, 0xB0($a1)
    ctx->pc = 0x24d3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d3cc: 0x4601395c  madd.s      $f5, $f7, $f1
    ctx->pc = 0x24d3ccu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[1]));
    // 0x24d3d0: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x24d3d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d3d4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x24D3D4u;
    {
        const bool branch_taken_0x24d3d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24d3d4) {
            ctx->pc = 0x24D3E8u;
            goto label_24d3e8;
        }
    }
    ctx->pc = 0x24D3DCu;
    // 0x24d3dc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x24D3DCu;
    {
        const bool branch_taken_0x24d3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D3DCu;
            // 0x24d3e0: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d3dc) {
            ctx->pc = 0x24D438u;
            goto label_24d438;
        }
    }
    ctx->pc = 0x24D3E4u;
    // 0x24d3e4: 0x0  nop
    ctx->pc = 0x24d3e4u;
    // NOP
label_24d3e8:
    // 0x24d3e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24d3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d3ec: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x24d3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24d3f0: 0x460058c7  neg.s       $f3, $f11
    ctx->pc = 0x24d3f0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[11]);
    // 0x24d3f4: 0x46004887  neg.s       $f2, $f9
    ctx->pc = 0x24d3f4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[9]);
    // 0x24d3f8: 0x46003847  neg.s       $f1, $f7
    ctx->pc = 0x24d3f8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[7]);
    // 0x24d3fc: 0x46003007  neg.s       $f0, $f6
    ctx->pc = 0x24d3fcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[6]);
    // 0x24d400: 0xe4c40000  swc1        $f4, 0x0($a2)
    ctx->pc = 0x24d400u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x24d404: 0xc5040000  lwc1        $f4, 0x0($t0)
    ctx->pc = 0x24d404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24d408: 0xe4c40004  swc1        $f4, 0x4($a2)
    ctx->pc = 0x24d408u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x24d40c: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x24d40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24d410: 0xe4c40008  swc1        $f4, 0x8($a2)
    ctx->pc = 0x24d410u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x24d414: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x24d414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24d418: 0xe4c4000c  swc1        $f4, 0xC($a2)
    ctx->pc = 0x24d418u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x24d41c: 0xe4c30020  swc1        $f3, 0x20($a2)
    ctx->pc = 0x24d41cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x24d420: 0xe4c20024  swc1        $f2, 0x24($a2)
    ctx->pc = 0x24d420u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x24d424: 0xe4c10028  swc1        $f1, 0x28($a2)
    ctx->pc = 0x24d424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x24d428: 0xe4c0002c  swc1        $f0, 0x2C($a2)
    ctx->pc = 0x24d428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
    // 0x24d42c: 0xe4c50034  swc1        $f5, 0x34($a2)
    ctx->pc = 0x24d42cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
    // 0x24d430: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x24d430u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x24d434: 0x0  nop
    ctx->pc = 0x24d434u;
    // NOP
label_24d438:
    // 0x24d438: 0x3e00008  jr          $ra
    ctx->pc = 0x24D438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D438u;
            // 0x24d43c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24D440u;
}
