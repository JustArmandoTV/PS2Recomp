#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00221200
// Address: 0x221200 - 0x2213e0
void sub_00221200_0x221200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221200_0x221200");
#endif

    ctx->pc = 0x221200u;

    // 0x221200: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x221200u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x221204: 0x3103000f  andi        $v1, $t0, 0xF
    ctx->pc = 0x221204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x221208: 0xad250004  sw          $a1, 0x4($t1)
    ctx->pc = 0x221208u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 5));
    // 0x22120c: 0x5010004  bgez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22120Cu;
    {
        const bool branch_taken_0x22120c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x221210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22120Cu;
            // 0x221210: 0xad260008  sw          $a2, 0x8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22120c) {
            ctx->pc = 0x221220u;
            goto label_221220;
        }
    }
    ctx->pc = 0x221214u;
    // 0x221214: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x221214u;
    {
        const bool branch_taken_0x221214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x221214) {
            ctx->pc = 0x221218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x221214u;
            // 0x221218: 0x1031823  subu        $v1, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x221224u;
            goto label_221224;
        }
    }
    ctx->pc = 0x22121Cu;
    // 0x22121c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x22121cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_221220:
    // 0x221220: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x221220u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_221224:
    // 0x221224: 0x24e6000f  addiu       $a2, $a3, 0xF
    ctx->pc = 0x221224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x221228: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x221228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x22122c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x22122cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x221230: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x221230u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x221234: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x221234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x221238: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x221238u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x22123c: 0xad26000c  sw          $a2, 0xC($t1)
    ctx->pc = 0x22123cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 6));
    // 0x221240: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x221240u;
    {
        const bool branch_taken_0x221240 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x221244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221240u;
            // 0x221244: 0x52183  sra         $a0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221240) {
            ctx->pc = 0x221250u;
            goto label_221250;
        }
    }
    ctx->pc = 0x221248u;
    // 0x221248: 0x24a4003f  addiu       $a0, $a1, 0x3F
    ctx->pc = 0x221248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x22124c: 0x42183  sra         $a0, $a0, 6
    ctx->pc = 0x22124cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
label_221250:
    // 0x221250: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x221250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x221254: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x221254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x221258: 0xa43024  and         $a2, $a1, $a0
    ctx->pc = 0x221258u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x22125c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x22125cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x221260: 0xad260010  sw          $a2, 0x10($t1)
    ctx->pc = 0x221260u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 6));
    // 0x221264: 0x52183  sra         $a0, $a1, 6
    ctx->pc = 0x221264u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 6));
    // 0x221268: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x221268u;
    {
        const bool branch_taken_0x221268 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x22126Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221268u;
            // 0x22126c: 0xad260018  sw          $a2, 0x18($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221268) {
            ctx->pc = 0x221278u;
            goto label_221278;
        }
    }
    ctx->pc = 0x221270u;
    // 0x221270: 0x24a4003f  addiu       $a0, $a1, 0x3F
    ctx->pc = 0x221270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x221274: 0x42183  sra         $a0, $a0, 6
    ctx->pc = 0x221274u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
label_221278:
    // 0x221278: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x221278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x22127c: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x22127cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x221280: 0xa45024  and         $t2, $a1, $a0
    ctx->pc = 0x221280u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x221284: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x221284u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x221288: 0x3c054280  lui         $a1, 0x4280
    ctx->pc = 0x221288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17024 << 16));
    // 0x22128c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x22128cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x221290: 0xad2a001c  sw          $t2, 0x1C($t1)
    ctx->pc = 0x221290u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 10));
    // 0x221294: 0x440c0  sll         $t0, $a0, 3
    ctx->pc = 0x221294u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x221298: 0xad2a0020  sw          $t2, 0x20($t1)
    ctx->pc = 0x221298u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 10));
    // 0x22129c: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x22129cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2212a0: 0x3c043f19  lui         $a0, 0x3F19
    ctx->pc = 0x2212a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16153 << 16));
    // 0x2212a4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2212a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2212a8: 0x3486999a  ori         $a2, $a0, 0x999A
    ctx->pc = 0x2212a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x2212ac: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x2212acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x2212b0: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x2212b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2212b4: 0x0  nop
    ctx->pc = 0x2212b4u;
    // NOP
    // 0x2212b8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2212b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2212bc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2212bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2212c0: 0x0  nop
    ctx->pc = 0x2212c0u;
    // NOP
    // 0x2212c4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x2212c4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x2212c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2212c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2212cc: 0x0  nop
    ctx->pc = 0x2212ccu;
    // NOP
    // 0x2212d0: 0x0  nop
    ctx->pc = 0x2212d0u;
    // NOP
    // 0x2212d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2212d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2212d8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2212D8u;
    {
        const bool branch_taken_0x2212d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2212d8) {
            ctx->pc = 0x2212DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2212D8u;
            // 0x2212dc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2212F0u;
            goto label_2212f0;
        }
    }
    ctx->pc = 0x2212E0u;
    // 0x2212e0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2212e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2212e4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2212e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2212e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2212E8u;
    {
        const bool branch_taken_0x2212e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2212e8) {
            ctx->pc = 0x221304u;
            goto label_221304;
        }
    }
    ctx->pc = 0x2212F0u;
label_2212f0:
    // 0x2212f0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2212f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2212f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2212f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2212f8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2212f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2212fc: 0x0  nop
    ctx->pc = 0x2212fcu;
    // NOP
    // 0x221300: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x221300u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_221304:
    // 0x221304: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x221304u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221308: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x221308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x22130c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22130cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x221310: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x221310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x221314: 0xa43024  and         $a2, $a1, $a0
    ctx->pc = 0x221314u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x221318: 0x3c043ecc  lui         $a0, 0x3ECC
    ctx->pc = 0x221318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16076 << 16));
    // 0x22131c: 0xad260024  sw          $a2, 0x24($t1)
    ctx->pc = 0x22131cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 6));
    // 0x221320: 0x3484cccc  ori         $a0, $a0, 0xCCCC
    ctx->pc = 0x221320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52428);
    // 0x221324: 0x3c054280  lui         $a1, 0x4280
    ctx->pc = 0x221324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17024 << 16));
    // 0x221328: 0xad260030  sw          $a2, 0x30($t1)
    ctx->pc = 0x221328u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 6));
    // 0x22132c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x22132cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x221330: 0x0  nop
    ctx->pc = 0x221330u;
    // NOP
    // 0x221334: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x221334u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x221338: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x221338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x22133c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x22133cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221340: 0x0  nop
    ctx->pc = 0x221340u;
    // NOP
    // 0x221344: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x221344u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x221348: 0x0  nop
    ctx->pc = 0x221348u;
    // NOP
    // 0x22134c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22134cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221350: 0x0  nop
    ctx->pc = 0x221350u;
    // NOP
    // 0x221354: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x221354u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221358: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x221358u;
    {
        const bool branch_taken_0x221358 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x221358) {
            ctx->pc = 0x22135Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x221358u;
            // 0x22135c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x221370u;
            goto label_221370;
        }
    }
    ctx->pc = 0x221360u;
    // 0x221360: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x221360u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x221364: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x221364u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x221368: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x221368u;
    {
        const bool branch_taken_0x221368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22136Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221368u;
            // 0x22136c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221368) {
            ctx->pc = 0x221388u;
            goto label_221388;
        }
    }
    ctx->pc = 0x221370u;
label_221370:
    // 0x221370: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x221370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x221374: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x221374u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x221378: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x221378u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x22137c: 0x0  nop
    ctx->pc = 0x22137cu;
    // NOP
    // 0x221380: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x221380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x221384: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x221384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_221388:
    // 0x221388: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x221388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x22138c: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x22138cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x221390: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x221390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x221394: 0xad240034  sw          $a0, 0x34($t1)
    ctx->pc = 0x221394u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 52), GPR_U32(ctx, 4));
    // 0x221398: 0xad240040  sw          $a0, 0x40($t1)
    ctx->pc = 0x221398u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 64), GPR_U32(ctx, 4));
    // 0x22139c: 0xad230044  sw          $v1, 0x44($t1)
    ctx->pc = 0x22139cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 68), GPR_U32(ctx, 3));
    // 0x2213a0: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x2213a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2213a4: 0xad230014  sw          $v1, 0x14($t1)
    ctx->pc = 0x2213a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 3));
    // 0x2213a8: 0x8d230040  lw          $v1, 0x40($t1)
    ctx->pc = 0x2213a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x2213ac: 0xad230048  sw          $v1, 0x48($t1)
    ctx->pc = 0x2213acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 72), GPR_U32(ctx, 3));
    // 0x2213b0: 0x8d230040  lw          $v1, 0x40($t1)
    ctx->pc = 0x2213b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x2213b4: 0xad23004c  sw          $v1, 0x4C($t1)
    ctx->pc = 0x2213b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 76), GPR_U32(ctx, 3));
    // 0x2213b8: 0x8d230020  lw          $v1, 0x20($t1)
    ctx->pc = 0x2213b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x2213bc: 0xad230028  sw          $v1, 0x28($t1)
    ctx->pc = 0x2213bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 3));
    // 0x2213c0: 0xad23002c  sw          $v1, 0x2C($t1)
    ctx->pc = 0x2213c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 44), GPR_U32(ctx, 3));
    // 0x2213c4: 0x8d230030  lw          $v1, 0x30($t1)
    ctx->pc = 0x2213c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x2213c8: 0xad230038  sw          $v1, 0x38($t1)
    ctx->pc = 0x2213c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 56), GPR_U32(ctx, 3));
    // 0x2213cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2213CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2213D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2213CCu;
            // 0x2213d0: 0xad23003c  sw          $v1, 0x3C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2213D4u;
    // 0x2213d4: 0x0  nop
    ctx->pc = 0x2213d4u;
    // NOP
    // 0x2213d8: 0x0  nop
    ctx->pc = 0x2213d8u;
    // NOP
    // 0x2213dc: 0x0  nop
    ctx->pc = 0x2213dcu;
    // NOP
}
