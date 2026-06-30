#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028C8D0
// Address: 0x28c8d0 - 0x28c990
void sub_0028C8D0_0x28c8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C8D0_0x28c8d0");
#endif

    ctx->pc = 0x28c8d0u;

    // 0x28c8d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28c8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28c8d4: 0x3c057f80  lui         $a1, 0x7F80
    ctx->pc = 0x28c8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32640 << 16));
    // 0x28c8d8: 0xe7ac000c  swc1        $f12, 0xC($sp)
    ctx->pc = 0x28c8d8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x28c8dc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x28c8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x28c8e0: 0x8fa8000c  lw          $t0, 0xC($sp)
    ctx->pc = 0x28c8e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x28c8e4: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x28c8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x28c8e8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x28c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x28c8ec: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x28c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
    // 0x28c8f0: 0x1053824  and         $a3, $t0, $a1
    ctx->pc = 0x28c8f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x28c8f4: 0x8287c  dsll32      $a1, $t0, 1
    ctx->pc = 0x28c8f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) << (32 + 1));
    // 0x28c8f8: 0x73dc2  srl         $a3, $a3, 23
    ctx->pc = 0x28c8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 23));
    // 0x28c8fc: 0x5287e  dsrl32      $a1, $a1, 1
    ctx->pc = 0x28c8fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 1));
    // 0x28c900: 0x24e7ff81  addiu       $a3, $a3, -0x7F
    ctx->pc = 0x28c900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967169));
    // 0x28c904: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x28c904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x28c908: 0xc75023  subu        $t2, $a2, $a3
    ctx->pc = 0x28c908u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x28c90c: 0x52fc3  sra         $a1, $a1, 31
    ctx->pc = 0x28c90cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 31));
    // 0x28c910: 0xe31807  srav        $v1, $v1, $a3
    ctx->pc = 0x28c910u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x28c914: 0xa02827  not         $a1, $a1
    ctx->pc = 0x28c914u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x28c918: 0x1054824  and         $t1, $t0, $a1
    ctx->pc = 0x28c918u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x28c91c: 0x1242824  and         $a1, $t1, $a0
    ctx->pc = 0x28c91cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
    // 0x28c920: 0x727c3  sra         $a0, $a3, 31
    ctx->pc = 0x28c920u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), 31));
    // 0x28c924: 0x53fc3  sra         $a3, $a1, 31
    ctx->pc = 0x28c924u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 31));
    // 0x28c928: 0xa2fc3  sra         $a1, $t2, 31
    ctx->pc = 0x28c928u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 10), 31));
    // 0x28c92c: 0x673024  and         $a2, $v1, $a3
    ctx->pc = 0x28c92cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x28c930: 0xa04027  not         $t0, $a1
    ctx->pc = 0x28c930u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x28c934: 0x1482824  and         $a1, $t2, $t0
    ctx->pc = 0x28c934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x28c938: 0x31030017  andi        $v1, $t0, 0x17
    ctx->pc = 0x28c938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)23);
    // 0x28c93c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x28c93cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x28c940: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x28c940u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x28c944: 0x1002827  not         $a1, $t0
    ctx->pc = 0x28c944u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 8) | GPR_U64(ctx, 0)));
    // 0x28c948: 0x454025  or          $t0, $v0, $a1
    ctx->pc = 0x28c948u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x28c94c: 0x801827  not         $v1, $a0
    ctx->pc = 0x28c94cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x28c950: 0x451027  nor         $v0, $v0, $a1
    ctx->pc = 0x28c950u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 5)));
    // 0x28c954: 0x1222824  and         $a1, $t1, $v0
    ctx->pc = 0x28c954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x28c958: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x28c958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x28c95c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x28c95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x28c960: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x28c960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x28c964: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x28c964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x28c968: 0x802027  not         $a0, $a0
    ctx->pc = 0x28c968u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x28c96c: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x28c96cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x28c970: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x28c970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x28c974: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x28c974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x28c978: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x28c978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x28c97c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x28c97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28c980: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x28c980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x28c984: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x28c984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28c988: 0x3e00008  jr          $ra
    ctx->pc = 0x28C988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C988u;
            // 0x28c98c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C990u;
}
