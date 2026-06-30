#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00366FF0
// Address: 0x366ff0 - 0x367330
void sub_00366FF0_0x366ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366FF0_0x366ff0");
#endif

    ctx->pc = 0x366ff0u;

    // 0x366ff0: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x366ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x366ff4: 0x30a34000  andi        $v1, $a1, 0x4000
    ctx->pc = 0x366ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x366ff8: 0x50600021  beql        $v1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x366FF8u;
    {
        const bool branch_taken_0x366ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x366ff8) {
            ctx->pc = 0x366FFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x366FF8u;
            // 0x366ffc: 0x30a30800  andi        $v1, $a1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
            ctx->pc = 0x367080u;
            goto label_367080;
        }
    }
    ctx->pc = 0x367000u;
    // 0x367000: 0x8c860194  lw          $a2, 0x194($a0)
    ctx->pc = 0x367000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
    // 0x367004: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x367004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x367008: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x367008u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x36700c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x36700cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x367010: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x367010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x367014: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x367014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x367018: 0xc48001cc  lwc1        $f0, 0x1CC($a0)
    ctx->pc = 0x367018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36701c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x36701cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x367020: 0x0  nop
    ctx->pc = 0x367020u;
    // NOP
    // 0x367024: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x367024u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x367028: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x367028u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x36702c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x36702cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367030: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x367030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x367034: 0xe48001cc  swc1        $f0, 0x1CC($a0)
    ctx->pc = 0x367034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 460), bits); }
    // 0x367038: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x367038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36703c: 0xc48001cc  lwc1        $f0, 0x1CC($a0)
    ctx->pc = 0x36703cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367040: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x367040u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x367044: 0x4502002f  bc1fl       . + 4 + (0x2F << 2)
    ctx->pc = 0x367044u;
    {
        const bool branch_taken_0x367044 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x367044) {
            ctx->pc = 0x367048u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x367044u;
            // 0x367048: 0x8c850054  lw          $a1, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x367104u;
            goto label_367104;
        }
    }
    ctx->pc = 0x36704Cu;
    // 0x36704c: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x36704cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x367050: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x367050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x367054: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x367054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x367058: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x367058u;
    {
        const bool branch_taken_0x367058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367058) {
            ctx->pc = 0x36705Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x367058u;
            // 0x36705c: 0xc4c00014  lwc1        $f0, 0x14($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x367068u;
            goto label_367068;
        }
    }
    ctx->pc = 0x367060u;
    // 0x367060: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x367060u;
    {
        const bool branch_taken_0x367060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367060u;
            // 0x367064: 0xe48201cc  swc1        $f2, 0x1CC($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 460), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x367060) {
            ctx->pc = 0x367100u;
            goto label_367100;
        }
    }
    ctx->pc = 0x367068u;
label_367068:
    // 0x367068: 0x0  nop
    ctx->pc = 0x367068u;
    // NOP
    // 0x36706c: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x36706cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x367070: 0x0  nop
    ctx->pc = 0x367070u;
    // NOP
    // 0x367074: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x367074u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x367078: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x367078u;
    {
        const bool branch_taken_0x367078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36707Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367078u;
            // 0x36707c: 0xe48001cc  swc1        $f0, 0x1CC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 460), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x367078) {
            ctx->pc = 0x367100u;
            goto label_367100;
        }
    }
    ctx->pc = 0x367080u;
label_367080:
    // 0x367080: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x367080u;
    {
        const bool branch_taken_0x367080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367080) {
            ctx->pc = 0x367100u;
            goto label_367100;
        }
    }
    ctx->pc = 0x367088u;
    // 0x367088: 0x8c850104  lw          $a1, 0x104($a0)
    ctx->pc = 0x367088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x36708c: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x36708cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x367090: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x367090u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x367094: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x367094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x367098: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x367098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x36709c: 0xc48001cc  lwc1        $f0, 0x1CC($a0)
    ctx->pc = 0x36709cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3670a0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3670a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3670a4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3670a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x3670a8: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x3670a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3670ac: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x3670acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3670b0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x3670b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3670b4: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x3670b4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x3670b8: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x3670b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x3670bc: 0xe48001cc  swc1        $f0, 0x1CC($a0)
    ctx->pc = 0x3670bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 460), bits); }
    // 0x3670c0: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3670c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3670c4: 0xc48001cc  lwc1        $f0, 0x1CC($a0)
    ctx->pc = 0x3670c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3670c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3670c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3670cc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x3670CCu;
    {
        const bool branch_taken_0x3670cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3670cc) {
            ctx->pc = 0x367100u;
            goto label_367100;
        }
    }
    ctx->pc = 0x3670D4u;
    // 0x3670d4: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x3670d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3670d8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3670d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3670dc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3670dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3670e0: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3670E0u;
    {
        const bool branch_taken_0x3670e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3670e0) {
            ctx->pc = 0x3670E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3670E0u;
            // 0x3670e4: 0xc4c00014  lwc1        $f0, 0x14($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3670F0u;
            goto label_3670f0;
        }
    }
    ctx->pc = 0x3670E8u;
    // 0x3670e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3670E8u;
    {
        const bool branch_taken_0x3670e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3670ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3670E8u;
            // 0x3670ec: 0xe48201cc  swc1        $f2, 0x1CC($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 460), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3670e8) {
            ctx->pc = 0x367100u;
            goto label_367100;
        }
    }
    ctx->pc = 0x3670F0u;
label_3670f0:
    // 0x3670f0: 0x0  nop
    ctx->pc = 0x3670f0u;
    // NOP
    // 0x3670f4: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x3670f4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x3670f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3670f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3670fc: 0xe48001cc  swc1        $f0, 0x1CC($a0)
    ctx->pc = 0x3670fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 460), bits); }
label_367100:
    // 0x367100: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x367100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_367104:
    // 0x367104: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x367104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x367108: 0x50600021  beql        $v1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x367108u;
    {
        const bool branch_taken_0x367108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367108) {
            ctx->pc = 0x36710Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x367108u;
            // 0x36710c: 0x30a31000  andi        $v1, $a1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
            ctx->pc = 0x367190u;
            goto label_367190;
        }
    }
    ctx->pc = 0x367110u;
    // 0x367110: 0x8c860198  lw          $a2, 0x198($a0)
    ctx->pc = 0x367110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
    // 0x367114: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x367114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x367118: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x367118u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x36711c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x36711cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x367120: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x367120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x367124: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x367124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x367128: 0xc48001d0  lwc1        $f0, 0x1D0($a0)
    ctx->pc = 0x367128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36712c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x36712cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x367130: 0x0  nop
    ctx->pc = 0x367130u;
    // NOP
    // 0x367134: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x367134u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x367138: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x367138u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x36713c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x36713cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367140: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x367140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x367144: 0xe48001d0  swc1        $f0, 0x1D0($a0)
    ctx->pc = 0x367144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 464), bits); }
    // 0x367148: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x367148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36714c: 0xc48001d0  lwc1        $f0, 0x1D0($a0)
    ctx->pc = 0x36714cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367150: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x367150u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x367154: 0x4502002f  bc1fl       . + 4 + (0x2F << 2)
    ctx->pc = 0x367154u;
    {
        const bool branch_taken_0x367154 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x367154) {
            ctx->pc = 0x367158u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x367154u;
            // 0x367158: 0x8c850054  lw          $a1, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x367214u;
            goto label_367214;
        }
    }
    ctx->pc = 0x36715Cu;
    // 0x36715c: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x36715cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x367160: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x367160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x367164: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x367164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x367168: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x367168u;
    {
        const bool branch_taken_0x367168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367168) {
            ctx->pc = 0x36716Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x367168u;
            // 0x36716c: 0xc4c00014  lwc1        $f0, 0x14($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x367178u;
            goto label_367178;
        }
    }
    ctx->pc = 0x367170u;
    // 0x367170: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x367170u;
    {
        const bool branch_taken_0x367170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367170u;
            // 0x367174: 0xe48201d0  swc1        $f2, 0x1D0($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 464), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x367170) {
            ctx->pc = 0x367210u;
            goto label_367210;
        }
    }
    ctx->pc = 0x367178u;
label_367178:
    // 0x367178: 0x0  nop
    ctx->pc = 0x367178u;
    // NOP
    // 0x36717c: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x36717cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x367180: 0x0  nop
    ctx->pc = 0x367180u;
    // NOP
    // 0x367184: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x367184u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x367188: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x367188u;
    {
        const bool branch_taken_0x367188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36718Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367188u;
            // 0x36718c: 0xe48001d0  swc1        $f0, 0x1D0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 464), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x367188) {
            ctx->pc = 0x367210u;
            goto label_367210;
        }
    }
    ctx->pc = 0x367190u;
label_367190:
    // 0x367190: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x367190u;
    {
        const bool branch_taken_0x367190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367190) {
            ctx->pc = 0x367210u;
            goto label_367210;
        }
    }
    ctx->pc = 0x367198u;
    // 0x367198: 0x8c850104  lw          $a1, 0x104($a0)
    ctx->pc = 0x367198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x36719c: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x36719cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x3671a0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3671a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3671a4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3671a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3671a8: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x3671a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x3671ac: 0xc48001d0  lwc1        $f0, 0x1D0($a0)
    ctx->pc = 0x3671acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3671b0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3671b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3671b4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3671b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x3671b8: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x3671b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3671bc: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x3671bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3671c0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x3671c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3671c4: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x3671c4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x3671c8: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x3671c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x3671cc: 0xe48001d0  swc1        $f0, 0x1D0($a0)
    ctx->pc = 0x3671ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 464), bits); }
    // 0x3671d0: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3671d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3671d4: 0xc48001d0  lwc1        $f0, 0x1D0($a0)
    ctx->pc = 0x3671d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3671d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3671d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3671dc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x3671DCu;
    {
        const bool branch_taken_0x3671dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3671dc) {
            ctx->pc = 0x367210u;
            goto label_367210;
        }
    }
    ctx->pc = 0x3671E4u;
    // 0x3671e4: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x3671e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3671e8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3671e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3671ec: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3671ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3671f0: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3671F0u;
    {
        const bool branch_taken_0x3671f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3671f0) {
            ctx->pc = 0x3671F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3671F0u;
            // 0x3671f4: 0xc4c00014  lwc1        $f0, 0x14($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x367200u;
            goto label_367200;
        }
    }
    ctx->pc = 0x3671F8u;
    // 0x3671f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3671F8u;
    {
        const bool branch_taken_0x3671f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3671FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3671F8u;
            // 0x3671fc: 0xe48201d0  swc1        $f2, 0x1D0($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 464), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3671f8) {
            ctx->pc = 0x367210u;
            goto label_367210;
        }
    }
    ctx->pc = 0x367200u;
label_367200:
    // 0x367200: 0x0  nop
    ctx->pc = 0x367200u;
    // NOP
    // 0x367204: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x367204u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x367208: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x367208u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36720c: 0xe48001d0  swc1        $f0, 0x1D0($a0)
    ctx->pc = 0x36720cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 464), bits); }
label_367210:
    // 0x367210: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x367210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_367214:
    // 0x367214: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x367214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x367218: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x367218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x36721c: 0x50600021  beql        $v1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x36721Cu;
    {
        const bool branch_taken_0x36721c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36721c) {
            ctx->pc = 0x367220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36721Cu;
            // 0x367220: 0x30a32000  andi        $v1, $a1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3672A4u;
            goto label_3672a4;
        }
    }
    ctx->pc = 0x367224u;
    // 0x367224: 0x8c86019c  lw          $a2, 0x19C($a0)
    ctx->pc = 0x367224u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 412)));
    // 0x367228: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x367228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x36722c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x36722cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x367230: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x367230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x367234: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x367234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x367238: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x367238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x36723c: 0xc48001d4  lwc1        $f0, 0x1D4($a0)
    ctx->pc = 0x36723cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367240: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x367240u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x367244: 0x0  nop
    ctx->pc = 0x367244u;
    // NOP
    // 0x367248: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x367248u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x36724c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x36724cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x367250: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x367250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367254: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x367254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x367258: 0xe48001d4  swc1        $f0, 0x1D4($a0)
    ctx->pc = 0x367258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 468), bits); }
    // 0x36725c: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x36725cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x367260: 0xc48001d4  lwc1        $f0, 0x1D4($a0)
    ctx->pc = 0x367260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367264: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x367264u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x367268: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x367268u;
    {
        const bool branch_taken_0x367268 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x367268) {
            ctx->pc = 0x367324u;
            goto label_367324;
        }
    }
    ctx->pc = 0x367270u;
    // 0x367270: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x367270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x367274: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x367274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x367278: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x367278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x36727c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x36727Cu;
    {
        const bool branch_taken_0x36727c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36727c) {
            ctx->pc = 0x367280u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36727Cu;
            // 0x367280: 0xc4c00014  lwc1        $f0, 0x14($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x36728Cu;
            goto label_36728c;
        }
    }
    ctx->pc = 0x367284u;
    // 0x367284: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x367284u;
    {
        const bool branch_taken_0x367284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367284u;
            // 0x367288: 0xe48201d4  swc1        $f2, 0x1D4($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 468), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x367284) {
            ctx->pc = 0x367324u;
            goto label_367324;
        }
    }
    ctx->pc = 0x36728Cu;
label_36728c:
    // 0x36728c: 0x0  nop
    ctx->pc = 0x36728cu;
    // NOP
    // 0x367290: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x367290u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x367294: 0x0  nop
    ctx->pc = 0x367294u;
    // NOP
    // 0x367298: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x367298u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36729c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x36729Cu;
    {
        const bool branch_taken_0x36729c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3672A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36729Cu;
            // 0x3672a0: 0xe48001d4  swc1        $f0, 0x1D4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 468), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36729c) {
            ctx->pc = 0x367324u;
            goto label_367324;
        }
    }
    ctx->pc = 0x3672A4u;
label_3672a4:
    // 0x3672a4: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3672A4u;
    {
        const bool branch_taken_0x3672a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3672a4) {
            ctx->pc = 0x367324u;
            goto label_367324;
        }
    }
    ctx->pc = 0x3672ACu;
    // 0x3672ac: 0x8c850104  lw          $a1, 0x104($a0)
    ctx->pc = 0x3672acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x3672b0: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x3672b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x3672b4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3672b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3672b8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3672b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3672bc: 0x8ca60028  lw          $a2, 0x28($a1)
    ctx->pc = 0x3672bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x3672c0: 0xc48001d4  lwc1        $f0, 0x1D4($a0)
    ctx->pc = 0x3672c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3672c4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3672c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3672c8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3672c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x3672cc: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x3672ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3672d0: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x3672d0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3672d4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x3672d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3672d8: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x3672d8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x3672dc: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x3672dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x3672e0: 0xe48001d4  swc1        $f0, 0x1D4($a0)
    ctx->pc = 0x3672e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 468), bits); }
    // 0x3672e4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3672e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3672e8: 0xc48001d4  lwc1        $f0, 0x1D4($a0)
    ctx->pc = 0x3672e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3672ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3672ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3672f0: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x3672F0u;
    {
        const bool branch_taken_0x3672f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3672f0) {
            ctx->pc = 0x367324u;
            goto label_367324;
        }
    }
    ctx->pc = 0x3672F8u;
    // 0x3672f8: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x3672f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3672fc: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3672fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x367300: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x367300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x367304: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x367304u;
    {
        const bool branch_taken_0x367304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367304) {
            ctx->pc = 0x367308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x367304u;
            // 0x367308: 0xc4c00014  lwc1        $f0, 0x14($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x367314u;
            goto label_367314;
        }
    }
    ctx->pc = 0x36730Cu;
    // 0x36730c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x36730Cu;
    {
        const bool branch_taken_0x36730c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36730Cu;
            // 0x367310: 0xe48201d4  swc1        $f2, 0x1D4($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 468), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36730c) {
            ctx->pc = 0x367324u;
            goto label_367324;
        }
    }
    ctx->pc = 0x367314u;
label_367314:
    // 0x367314: 0x0  nop
    ctx->pc = 0x367314u;
    // NOP
    // 0x367318: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x367318u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x36731c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x36731cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x367320: 0xe48001d4  swc1        $f0, 0x1D4($a0)
    ctx->pc = 0x367320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 468), bits); }
label_367324:
    // 0x367324: 0x3e00008  jr          $ra
    ctx->pc = 0x367324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36732Cu;
    // 0x36732c: 0x0  nop
    ctx->pc = 0x36732cu;
    // NOP
}
