#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AD2D0
// Address: 0x3ad2d0 - 0x3ad5b0
void sub_003AD2D0_0x3ad2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD2D0_0x3ad2d0");
#endif

    switch (ctx->pc) {
        case 0x3ad2d0u: goto label_3ad2d0;
        case 0x3ad2d4u: goto label_3ad2d4;
        case 0x3ad2d8u: goto label_3ad2d8;
        case 0x3ad2dcu: goto label_3ad2dc;
        case 0x3ad2e0u: goto label_3ad2e0;
        case 0x3ad2e4u: goto label_3ad2e4;
        case 0x3ad2e8u: goto label_3ad2e8;
        case 0x3ad2ecu: goto label_3ad2ec;
        case 0x3ad2f0u: goto label_3ad2f0;
        case 0x3ad2f4u: goto label_3ad2f4;
        case 0x3ad2f8u: goto label_3ad2f8;
        case 0x3ad2fcu: goto label_3ad2fc;
        case 0x3ad300u: goto label_3ad300;
        case 0x3ad304u: goto label_3ad304;
        case 0x3ad308u: goto label_3ad308;
        case 0x3ad30cu: goto label_3ad30c;
        case 0x3ad310u: goto label_3ad310;
        case 0x3ad314u: goto label_3ad314;
        case 0x3ad318u: goto label_3ad318;
        case 0x3ad31cu: goto label_3ad31c;
        case 0x3ad320u: goto label_3ad320;
        case 0x3ad324u: goto label_3ad324;
        case 0x3ad328u: goto label_3ad328;
        case 0x3ad32cu: goto label_3ad32c;
        case 0x3ad330u: goto label_3ad330;
        case 0x3ad334u: goto label_3ad334;
        case 0x3ad338u: goto label_3ad338;
        case 0x3ad33cu: goto label_3ad33c;
        case 0x3ad340u: goto label_3ad340;
        case 0x3ad344u: goto label_3ad344;
        case 0x3ad348u: goto label_3ad348;
        case 0x3ad34cu: goto label_3ad34c;
        case 0x3ad350u: goto label_3ad350;
        case 0x3ad354u: goto label_3ad354;
        case 0x3ad358u: goto label_3ad358;
        case 0x3ad35cu: goto label_3ad35c;
        case 0x3ad360u: goto label_3ad360;
        case 0x3ad364u: goto label_3ad364;
        case 0x3ad368u: goto label_3ad368;
        case 0x3ad36cu: goto label_3ad36c;
        case 0x3ad370u: goto label_3ad370;
        case 0x3ad374u: goto label_3ad374;
        case 0x3ad378u: goto label_3ad378;
        case 0x3ad37cu: goto label_3ad37c;
        case 0x3ad380u: goto label_3ad380;
        case 0x3ad384u: goto label_3ad384;
        case 0x3ad388u: goto label_3ad388;
        case 0x3ad38cu: goto label_3ad38c;
        case 0x3ad390u: goto label_3ad390;
        case 0x3ad394u: goto label_3ad394;
        case 0x3ad398u: goto label_3ad398;
        case 0x3ad39cu: goto label_3ad39c;
        case 0x3ad3a0u: goto label_3ad3a0;
        case 0x3ad3a4u: goto label_3ad3a4;
        case 0x3ad3a8u: goto label_3ad3a8;
        case 0x3ad3acu: goto label_3ad3ac;
        case 0x3ad3b0u: goto label_3ad3b0;
        case 0x3ad3b4u: goto label_3ad3b4;
        case 0x3ad3b8u: goto label_3ad3b8;
        case 0x3ad3bcu: goto label_3ad3bc;
        case 0x3ad3c0u: goto label_3ad3c0;
        case 0x3ad3c4u: goto label_3ad3c4;
        case 0x3ad3c8u: goto label_3ad3c8;
        case 0x3ad3ccu: goto label_3ad3cc;
        case 0x3ad3d0u: goto label_3ad3d0;
        case 0x3ad3d4u: goto label_3ad3d4;
        case 0x3ad3d8u: goto label_3ad3d8;
        case 0x3ad3dcu: goto label_3ad3dc;
        case 0x3ad3e0u: goto label_3ad3e0;
        case 0x3ad3e4u: goto label_3ad3e4;
        case 0x3ad3e8u: goto label_3ad3e8;
        case 0x3ad3ecu: goto label_3ad3ec;
        case 0x3ad3f0u: goto label_3ad3f0;
        case 0x3ad3f4u: goto label_3ad3f4;
        case 0x3ad3f8u: goto label_3ad3f8;
        case 0x3ad3fcu: goto label_3ad3fc;
        case 0x3ad400u: goto label_3ad400;
        case 0x3ad404u: goto label_3ad404;
        case 0x3ad408u: goto label_3ad408;
        case 0x3ad40cu: goto label_3ad40c;
        case 0x3ad410u: goto label_3ad410;
        case 0x3ad414u: goto label_3ad414;
        case 0x3ad418u: goto label_3ad418;
        case 0x3ad41cu: goto label_3ad41c;
        case 0x3ad420u: goto label_3ad420;
        case 0x3ad424u: goto label_3ad424;
        case 0x3ad428u: goto label_3ad428;
        case 0x3ad42cu: goto label_3ad42c;
        case 0x3ad430u: goto label_3ad430;
        case 0x3ad434u: goto label_3ad434;
        case 0x3ad438u: goto label_3ad438;
        case 0x3ad43cu: goto label_3ad43c;
        case 0x3ad440u: goto label_3ad440;
        case 0x3ad444u: goto label_3ad444;
        case 0x3ad448u: goto label_3ad448;
        case 0x3ad44cu: goto label_3ad44c;
        case 0x3ad450u: goto label_3ad450;
        case 0x3ad454u: goto label_3ad454;
        case 0x3ad458u: goto label_3ad458;
        case 0x3ad45cu: goto label_3ad45c;
        case 0x3ad460u: goto label_3ad460;
        case 0x3ad464u: goto label_3ad464;
        case 0x3ad468u: goto label_3ad468;
        case 0x3ad46cu: goto label_3ad46c;
        case 0x3ad470u: goto label_3ad470;
        case 0x3ad474u: goto label_3ad474;
        case 0x3ad478u: goto label_3ad478;
        case 0x3ad47cu: goto label_3ad47c;
        case 0x3ad480u: goto label_3ad480;
        case 0x3ad484u: goto label_3ad484;
        case 0x3ad488u: goto label_3ad488;
        case 0x3ad48cu: goto label_3ad48c;
        case 0x3ad490u: goto label_3ad490;
        case 0x3ad494u: goto label_3ad494;
        case 0x3ad498u: goto label_3ad498;
        case 0x3ad49cu: goto label_3ad49c;
        case 0x3ad4a0u: goto label_3ad4a0;
        case 0x3ad4a4u: goto label_3ad4a4;
        case 0x3ad4a8u: goto label_3ad4a8;
        case 0x3ad4acu: goto label_3ad4ac;
        case 0x3ad4b0u: goto label_3ad4b0;
        case 0x3ad4b4u: goto label_3ad4b4;
        case 0x3ad4b8u: goto label_3ad4b8;
        case 0x3ad4bcu: goto label_3ad4bc;
        case 0x3ad4c0u: goto label_3ad4c0;
        case 0x3ad4c4u: goto label_3ad4c4;
        case 0x3ad4c8u: goto label_3ad4c8;
        case 0x3ad4ccu: goto label_3ad4cc;
        case 0x3ad4d0u: goto label_3ad4d0;
        case 0x3ad4d4u: goto label_3ad4d4;
        case 0x3ad4d8u: goto label_3ad4d8;
        case 0x3ad4dcu: goto label_3ad4dc;
        case 0x3ad4e0u: goto label_3ad4e0;
        case 0x3ad4e4u: goto label_3ad4e4;
        case 0x3ad4e8u: goto label_3ad4e8;
        case 0x3ad4ecu: goto label_3ad4ec;
        case 0x3ad4f0u: goto label_3ad4f0;
        case 0x3ad4f4u: goto label_3ad4f4;
        case 0x3ad4f8u: goto label_3ad4f8;
        case 0x3ad4fcu: goto label_3ad4fc;
        case 0x3ad500u: goto label_3ad500;
        case 0x3ad504u: goto label_3ad504;
        case 0x3ad508u: goto label_3ad508;
        case 0x3ad50cu: goto label_3ad50c;
        case 0x3ad510u: goto label_3ad510;
        case 0x3ad514u: goto label_3ad514;
        case 0x3ad518u: goto label_3ad518;
        case 0x3ad51cu: goto label_3ad51c;
        case 0x3ad520u: goto label_3ad520;
        case 0x3ad524u: goto label_3ad524;
        case 0x3ad528u: goto label_3ad528;
        case 0x3ad52cu: goto label_3ad52c;
        case 0x3ad530u: goto label_3ad530;
        case 0x3ad534u: goto label_3ad534;
        case 0x3ad538u: goto label_3ad538;
        case 0x3ad53cu: goto label_3ad53c;
        case 0x3ad540u: goto label_3ad540;
        case 0x3ad544u: goto label_3ad544;
        case 0x3ad548u: goto label_3ad548;
        case 0x3ad54cu: goto label_3ad54c;
        case 0x3ad550u: goto label_3ad550;
        case 0x3ad554u: goto label_3ad554;
        case 0x3ad558u: goto label_3ad558;
        case 0x3ad55cu: goto label_3ad55c;
        case 0x3ad560u: goto label_3ad560;
        case 0x3ad564u: goto label_3ad564;
        case 0x3ad568u: goto label_3ad568;
        case 0x3ad56cu: goto label_3ad56c;
        case 0x3ad570u: goto label_3ad570;
        case 0x3ad574u: goto label_3ad574;
        case 0x3ad578u: goto label_3ad578;
        case 0x3ad57cu: goto label_3ad57c;
        case 0x3ad580u: goto label_3ad580;
        case 0x3ad584u: goto label_3ad584;
        case 0x3ad588u: goto label_3ad588;
        case 0x3ad58cu: goto label_3ad58c;
        case 0x3ad590u: goto label_3ad590;
        case 0x3ad594u: goto label_3ad594;
        case 0x3ad598u: goto label_3ad598;
        case 0x3ad59cu: goto label_3ad59c;
        case 0x3ad5a0u: goto label_3ad5a0;
        case 0x3ad5a4u: goto label_3ad5a4;
        case 0x3ad5a8u: goto label_3ad5a8;
        case 0x3ad5acu: goto label_3ad5ac;
        default: break;
    }

    ctx->pc = 0x3ad2d0u;

label_3ad2d0:
    // 0x3ad2d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3ad2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3ad2d4:
    // 0x3ad2d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ad2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ad2d8:
    // 0x3ad2d8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3ad2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3ad2dc:
    // 0x3ad2dc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3ad2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3ad2e0:
    // 0x3ad2e0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3ad2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3ad2e4:
    // 0x3ad2e4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3ad2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3ad2e8:
    // 0x3ad2e8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3ad2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3ad2ec:
    // 0x3ad2ec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3ad2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3ad2f0:
    // 0x3ad2f0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3ad2f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ad2f4:
    // 0x3ad2f4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3ad2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3ad2f8:
    // 0x3ad2f8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3ad2f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ad2fc:
    // 0x3ad2fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ad2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3ad300:
    // 0x3ad300: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3ad300u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ad304:
    // 0x3ad304: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ad304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3ad308:
    // 0x3ad308: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3ad308u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3ad30c:
    // 0x3ad30c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ad30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3ad310:
    // 0x3ad310: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3ad310u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3ad314:
    // 0x3ad314: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x3ad314u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3ad318:
    // 0x3ad318: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3ad318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3ad31c:
    // 0x3ad31c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3ad31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3ad320:
    // 0x3ad320: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x3ad320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_3ad324:
    // 0x3ad324: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ad324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3ad328:
    // 0x3ad328: 0x8c770e00  lw          $s7, 0xE00($v1)
    ctx->pc = 0x3ad328u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3584)));
label_3ad32c:
    // 0x3ad32c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3ad32cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3ad330:
    // 0x3ad330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ad330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad334:
    // 0x3ad334: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3ad334u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3ad338:
    // 0x3ad338: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3ad338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3ad33c:
    // 0x3ad33c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x3ad33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_3ad340:
    // 0x3ad340: 0x8c5600a0  lw          $s6, 0xA0($v0)
    ctx->pc = 0x3ad340u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_3ad344:
    // 0x3ad344: 0xc45400a4  lwc1        $f20, 0xA4($v0)
    ctx->pc = 0x3ad344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ad348:
    // 0x3ad348: 0xc0506ac  jal         func_141AB0
label_3ad34c:
    if (ctx->pc == 0x3AD34Cu) {
        ctx->pc = 0x3AD34Cu;
            // 0x3ad34c: 0x245e0090  addiu       $fp, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->pc = 0x3AD350u;
        goto label_3ad350;
    }
    ctx->pc = 0x3AD348u;
    SET_GPR_U32(ctx, 31, 0x3AD350u);
    ctx->pc = 0x3AD34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD348u;
            // 0x3ad34c: 0x245e0090  addiu       $fp, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD350u; }
        if (ctx->pc != 0x3AD350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD350u; }
        if (ctx->pc != 0x3AD350u) { return; }
    }
    ctx->pc = 0x3AD350u;
label_3ad350:
    // 0x3ad350: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ad350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ad354:
    // 0x3ad354: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3ad354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3ad358:
    // 0x3ad358: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ad358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ad35c:
    // 0x3ad35c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3ad35cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3ad360:
    // 0x3ad360: 0x320f809  jalr        $t9
label_3ad364:
    if (ctx->pc == 0x3AD364u) {
        ctx->pc = 0x3AD364u;
            // 0x3ad364: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3AD368u;
        goto label_3ad368;
    }
    ctx->pc = 0x3AD360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3AD368u);
        ctx->pc = 0x3AD364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD360u;
            // 0x3ad364: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3AD368u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3AD368u; }
            if (ctx->pc != 0x3AD368u) { return; }
        }
        }
    }
    ctx->pc = 0x3AD368u;
label_3ad368:
    // 0x3ad368: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x3ad368u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ad36c:
    // 0x3ad36c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3ad36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3ad370:
    // 0x3ad370: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3ad370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3ad374:
    // 0x3ad374: 0x84512102  lh          $s1, 0x2102($v0)
    ctx->pc = 0x3ad374u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8450)));
label_3ad378:
    // 0x3ad378: 0x92a40080  lbu         $a0, 0x80($s5)
    ctx->pc = 0x3ad378u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 128)));
label_3ad37c:
    // 0x3ad37c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x3ad37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_3ad380:
    // 0x3ad380: 0x24639bc0  addiu       $v1, $v1, -0x6440
    ctx->pc = 0x3ad380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941632));
label_3ad384:
    // 0x3ad384: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3ad384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_3ad388:
    // 0x3ad388: 0x84502100  lh          $s0, 0x2100($v0)
    ctx->pc = 0x3ad388u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8448)));
label_3ad38c:
    // 0x3ad38c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3ad38cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_3ad390:
    // 0x3ad390: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ad390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3ad394:
    // 0x3ad394: 0xc682000c  lwc1        $f2, 0xC($s4)
    ctx->pc = 0x3ad394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ad398:
    // 0x3ad398: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x3ad398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ad39c:
    // 0x3ad39c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x3ad39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3ad3a0:
    // 0x3ad3a0: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x3ad3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3ad3a4:
    // 0x3ad3a4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3ad3a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3ad3a8:
    // 0x3ad3a8: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x3ad3a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_3ad3ac:
    // 0x3ad3ac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3ad3acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ad3b0:
    // 0x3ad3b0: 0x0  nop
    ctx->pc = 0x3ad3b0u;
    // NOP
label_3ad3b4:
    // 0x3ad3b4: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3ad3b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3ad3b8:
    // 0x3ad3b8: 0x4603231c  madd.s      $f12, $f4, $f3
    ctx->pc = 0x3ad3b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_3ad3bc:
    // 0x3ad3bc: 0x460c0818  adda.s      $f1, $f12
    ctx->pc = 0x3ad3bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
label_3ad3c0:
    // 0x3ad3c0: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x3ad3c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_3ad3c4:
    // 0x3ad3c4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3ad3c8:
    if (ctx->pc == 0x3AD3C8u) {
        ctx->pc = 0x3AD3C8u;
            // 0x3ad3c8: 0x4603a39c  madd.s      $f14, $f20, $f3 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[3]));
        ctx->pc = 0x3AD3CCu;
        goto label_3ad3cc;
    }
    ctx->pc = 0x3AD3C4u;
    {
        const bool branch_taken_0x3ad3c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3AD3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD3C4u;
            // 0x3ad3c8: 0x4603a39c  madd.s      $f14, $f20, $f3 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad3c4) {
            ctx->pc = 0x3AD3D8u;
            goto label_3ad3d8;
        }
    }
    ctx->pc = 0x3AD3CCu;
label_3ad3cc:
    // 0x3ad3cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ad3ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ad3d0:
    // 0x3ad3d0: 0x10000008  b           . + 4 + (0x8 << 2)
label_3ad3d4:
    if (ctx->pc == 0x3AD3D4u) {
        ctx->pc = 0x3AD3D4u;
            // 0x3ad3d4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3AD3D8u;
        goto label_3ad3d8;
    }
    ctx->pc = 0x3AD3D0u;
    {
        const bool branch_taken_0x3ad3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD3D0u;
            // 0x3ad3d4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad3d0) {
            ctx->pc = 0x3AD3F4u;
            goto label_3ad3f4;
        }
    }
    ctx->pc = 0x3AD3D8u;
label_3ad3d8:
    // 0x3ad3d8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3ad3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3ad3dc:
    // 0x3ad3dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ad3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3ad3e0:
    // 0x3ad3e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ad3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3ad3e4:
    // 0x3ad3e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ad3e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ad3e8:
    // 0x3ad3e8: 0x0  nop
    ctx->pc = 0x3ad3e8u;
    // NOP
label_3ad3ec:
    // 0x3ad3ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ad3ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3ad3f0:
    // 0x3ad3f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3ad3f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3ad3f4:
    // 0x3ad3f4: 0x46006bc0  add.s       $f15, $f13, $f0
    ctx->pc = 0x3ad3f4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_3ad3f8:
    // 0x3ad3f8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3ad3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3ad3fc:
    // 0x3ad3fc: 0x92a60082  lbu         $a2, 0x82($s5)
    ctx->pc = 0x3ad3fcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 130)));
label_3ad400:
    // 0x3ad400: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3ad400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3ad404:
    // 0x3ad404: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3ad404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_3ad408:
    // 0x3ad408: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ad408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ad40c:
    // 0x3ad40c: 0x90630116  lbu         $v1, 0x116($v1)
    ctx->pc = 0x3ad40cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 278)));
label_3ad410:
    // 0x3ad410: 0x24a59bc0  addiu       $a1, $a1, -0x6440
    ctx->pc = 0x3ad410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941632));
label_3ad414:
    // 0x3ad414: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3ad414u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ad418:
    // 0x3ad418: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x3ad418u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_3ad41c:
    // 0x3ad41c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3ad41cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3ad420:
    // 0x3ad420: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3ad420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3ad424:
    // 0x3ad424: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ad424u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad428:
    // 0x3ad428: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x3ad428u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ad42c:
    // 0x3ad42c: 0x0  nop
    ctx->pc = 0x3ad42cu;
    // NOP
label_3ad430:
    // 0x3ad430: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3ad430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3ad434:
    // 0x3ad434: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3ad434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3ad438:
    // 0x3ad438: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x3ad438u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_3ad43c:
    // 0x3ad43c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3ad43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3ad440:
    // 0x3ad440: 0xc0bc284  jal         func_2F0A10
label_3ad444:
    if (ctx->pc == 0x3AD444u) {
        ctx->pc = 0x3AD444u;
            // 0x3ad444: 0x2423025  or          $a2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
        ctx->pc = 0x3AD448u;
        goto label_3ad448;
    }
    ctx->pc = 0x3AD440u;
    SET_GPR_U32(ctx, 31, 0x3AD448u);
    ctx->pc = 0x3AD444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD440u;
            // 0x3ad444: 0x2423025  or          $a2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD448u; }
        if (ctx->pc != 0x3AD448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD448u; }
        if (ctx->pc != 0x3AD448u) { return; }
    }
    ctx->pc = 0x3AD448u;
label_3ad448:
    // 0x3ad448: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x3ad448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3ad44c:
    // 0x3ad44c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3ad44cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ad450:
    // 0x3ad450: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x3ad450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3ad454:
    // 0x3ad454: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ad454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ad458:
    // 0x3ad458: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3ad458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ad45c:
    // 0x3ad45c: 0xc0ebe78  jal         func_3AF9E0
label_3ad460:
    if (ctx->pc == 0x3AD460u) {
        ctx->pc = 0x3AD460u;
            // 0x3ad460: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3AD464u;
        goto label_3ad464;
    }
    ctx->pc = 0x3AD45Cu;
    SET_GPR_U32(ctx, 31, 0x3AD464u);
    ctx->pc = 0x3AD460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD45Cu;
            // 0x3ad460: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AF9E0u;
    if (runtime->hasFunction(0x3AF9E0u)) {
        auto targetFn = runtime->lookupFunction(0x3AF9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD464u; }
        if (ctx->pc != 0x3AD464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AF9E0_0x3af9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD464u; }
        if (ctx->pc != 0x3AD464u) { return; }
    }
    ctx->pc = 0x3AD464u;
label_3ad464:
    // 0x3ad464: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3ad464u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ad468:
    // 0x3ad468: 0x8ea90004  lw          $t1, 0x4($s5)
    ctx->pc = 0x3ad468u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3ad46c:
    // 0x3ad46c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3ad46cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3ad470:
    // 0x3ad470: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3ad470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3ad474:
    // 0x3ad474: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x3ad474u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
label_3ad478:
    // 0x3ad478: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x3ad478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
label_3ad47c:
    // 0x3ad47c: 0x25089bc0  addiu       $t0, $t0, -0x6440
    ctx->pc = 0x3ad47cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941632));
label_3ad480:
    // 0x3ad480: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x3ad480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3ad484:
    // 0x3ad484: 0x90460116  lbu         $a2, 0x116($v0)
    ctx->pc = 0x3ad484u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 278)));
label_3ad488:
    // 0x3ad488: 0x26a70040  addiu       $a3, $s5, 0x40
    ctx->pc = 0x3ad488u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
label_3ad48c:
    // 0x3ad48c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ad48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ad490:
    // 0x3ad490: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x3ad490u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ad494:
    // 0x3ad494: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3ad494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3ad498:
    // 0x3ad498: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3ad498u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3ad49c:
    // 0x3ad49c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3ad49cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_3ad4a0:
    // 0x3ad4a0: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x3ad4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ad4a4:
    // 0x3ad4a4: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x3ad4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ad4a8:
    // 0x3ad4a8: 0xc5240008  lwc1        $f4, 0x8($t1)
    ctx->pc = 0x3ad4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3ad4ac:
    // 0x3ad4ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ad4acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3ad4b0:
    // 0x3ad4b0: 0x46000940  add.s       $f5, $f1, $f0
    ctx->pc = 0x3ad4b0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3ad4b4:
    // 0x3ad4b4: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x3ad4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ad4b8:
    // 0x3ad4b8: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x3ad4b8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ad4bc:
    // 0x3ad4bc: 0x0  nop
    ctx->pc = 0x3ad4bcu;
    // NOP
label_3ad4c0:
    // 0x3ad4c0: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3ad4c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3ad4c4:
    // 0x3ad4c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ad4c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3ad4c8:
    // 0x3ad4c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ad4c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ad4cc:
    // 0x3ad4cc: 0x0  nop
    ctx->pc = 0x3ad4ccu;
    // NOP
label_3ad4d0:
    // 0x3ad4d0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3ad4d0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3ad4d4:
    // 0x3ad4d4: 0x4603201c  madd.s      $f0, $f4, $f3
    ctx->pc = 0x3ad4d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_3ad4d8:
    // 0x3ad4d8: 0xe6a00070  swc1        $f0, 0x70($s5)
    ctx->pc = 0x3ad4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 112), bits); }
label_3ad4dc:
    // 0x3ad4dc: 0xe6a50074  swc1        $f5, 0x74($s5)
    ctx->pc = 0x3ad4dcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 116), bits); }
label_3ad4e0:
    // 0x3ad4e0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3ad4e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3ad4e4:
    // 0x3ad4e4: 0xaea00078  sw          $zero, 0x78($s5)
    ctx->pc = 0x3ad4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 0));
label_3ad4e8:
    // 0x3ad4e8: 0x92a20083  lbu         $v0, 0x83($s5)
    ctx->pc = 0x3ad4e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 131)));
label_3ad4ec:
    // 0x3ad4ec: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x3ad4ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3ad4f0:
    // 0x3ad4f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3ad4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3ad4f4:
    // 0x3ad4f4: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x3ad4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_3ad4f8:
    // 0x3ad4f8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3ad4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ad4fc:
    // 0x3ad4fc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3ad4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ad500:
    // 0x3ad500: 0x46011382  mul.s       $f14, $f2, $f1
    ctx->pc = 0x3ad500u;
    ctx->f[14] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3ad504:
    // 0x3ad504: 0x460013c2  mul.s       $f15, $f2, $f0
    ctx->pc = 0x3ad504u;
    ctx->f[15] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3ad508:
    // 0x3ad508: 0x46007307  neg.s       $f12, $f14
    ctx->pc = 0x3ad508u;
    ctx->f[12] = FPU_NEG_S(ctx->f[14]);
label_3ad50c:
    // 0x3ad50c: 0xc0bc284  jal         func_2F0A10
label_3ad510:
    if (ctx->pc == 0x3AD510u) {
        ctx->pc = 0x3AD510u;
            // 0x3ad510: 0x46007b47  neg.s       $f13, $f15 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[15]);
        ctx->pc = 0x3AD514u;
        goto label_3ad514;
    }
    ctx->pc = 0x3AD50Cu;
    SET_GPR_U32(ctx, 31, 0x3AD514u);
    ctx->pc = 0x3AD510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD50Cu;
            // 0x3ad510: 0x46007b47  neg.s       $f13, $f15 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD514u; }
        if (ctx->pc != 0x3AD514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD514u; }
        if (ctx->pc != 0x3AD514u) { return; }
    }
    ctx->pc = 0x3AD514u;
label_3ad514:
    // 0x3ad514: 0xc6a0002c  lwc1        $f0, 0x2C($s5)
    ctx->pc = 0x3ad514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ad518:
    // 0x3ad518: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3ad518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ad51c:
    // 0x3ad51c: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_3ad520:
    if (ctx->pc == 0x3AD520u) {
        ctx->pc = 0x3AD520u;
            // 0x3ad520: 0x8e86000c  lw          $a2, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->pc = 0x3AD524u;
        goto label_3ad524;
    }
    ctx->pc = 0x3AD51Cu;
    {
        const bool branch_taken_0x3ad51c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ad51c) {
            ctx->pc = 0x3AD520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD51Cu;
            // 0x3ad520: 0x8e86000c  lw          $a2, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3AD544u;
            goto label_3ad544;
        }
    }
    ctx->pc = 0x3AD524u;
label_3ad524:
    // 0x3ad524: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x3ad524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3ad528:
    // 0x3ad528: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x3ad528u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3ad52c:
    // 0x3ad52c: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x3ad52cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3ad530:
    // 0x3ad530: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x3ad530u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3ad534:
    // 0x3ad534: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ad534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ad538:
    // 0x3ad538: 0xc0ebc60  jal         func_3AF180
label_3ad53c:
    if (ctx->pc == 0x3AD53Cu) {
        ctx->pc = 0x3AD53Cu;
            // 0x3ad53c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3AD540u;
        goto label_3ad540;
    }
    ctx->pc = 0x3AD538u;
    SET_GPR_U32(ctx, 31, 0x3AD540u);
    ctx->pc = 0x3AD53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD538u;
            // 0x3ad53c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AF180u;
    if (runtime->hasFunction(0x3AF180u)) {
        auto targetFn = runtime->lookupFunction(0x3AF180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD540u; }
        if (ctx->pc != 0x3AD540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AF180_0x3af180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD540u; }
        if (ctx->pc != 0x3AD540u) { return; }
    }
    ctx->pc = 0x3AD540u;
label_3ad540:
    // 0x3ad540: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x3ad540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3ad544:
    // 0x3ad544: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ad544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ad548:
    // 0x3ad548: 0x8e870010  lw          $a3, 0x10($s4)
    ctx->pc = 0x3ad548u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3ad54c:
    // 0x3ad54c: 0x27c5001c  addiu       $a1, $fp, 0x1C
    ctx->pc = 0x3ad54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
label_3ad550:
    // 0x3ad550: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3ad550u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ad554:
    // 0x3ad554: 0xc0ec0e4  jal         func_3B0390
label_3ad558:
    if (ctx->pc == 0x3AD558u) {
        ctx->pc = 0x3AD558u;
            // 0x3ad558: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3AD55Cu;
        goto label_3ad55c;
    }
    ctx->pc = 0x3AD554u;
    SET_GPR_U32(ctx, 31, 0x3AD55Cu);
    ctx->pc = 0x3AD558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD554u;
            // 0x3ad558: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B0390u;
    if (runtime->hasFunction(0x3B0390u)) {
        auto targetFn = runtime->lookupFunction(0x3B0390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD55Cu; }
        if (ctx->pc != 0x3AD55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B0390_0x3b0390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3AD55Cu; }
        if (ctx->pc != 0x3AD55Cu) { return; }
    }
    ctx->pc = 0x3AD55Cu;
label_3ad55c:
    // 0x3ad55c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ad55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ad560:
    // 0x3ad560: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x3ad560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3ad564:
    // 0x3ad564: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ad564u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ad568:
    // 0x3ad568: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3ad568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3ad56c:
    // 0x3ad56c: 0x320f809  jalr        $t9
label_3ad570:
    if (ctx->pc == 0x3AD570u) {
        ctx->pc = 0x3AD574u;
        goto label_3ad574;
    }
    ctx->pc = 0x3AD56Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3AD574u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3AD574u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3AD574u; }
            if (ctx->pc != 0x3AD574u) { return; }
        }
        }
    }
    ctx->pc = 0x3AD574u;
label_3ad574:
    // 0x3ad574: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3ad574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3ad578:
    // 0x3ad578: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3ad578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ad57c:
    // 0x3ad57c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3ad57cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3ad580:
    // 0x3ad580: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3ad580u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ad584:
    // 0x3ad584: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3ad584u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ad588:
    // 0x3ad588: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3ad588u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ad58c:
    // 0x3ad58c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3ad58cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ad590:
    // 0x3ad590: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3ad590u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ad594:
    // 0x3ad594: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ad594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ad598:
    // 0x3ad598: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ad598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ad59c:
    // 0x3ad59c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ad59cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ad5a0:
    // 0x3ad5a0: 0x3e00008  jr          $ra
label_3ad5a4:
    if (ctx->pc == 0x3AD5A4u) {
        ctx->pc = 0x3AD5A4u;
            // 0x3ad5a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3AD5A8u;
        goto label_3ad5a8;
    }
    ctx->pc = 0x3AD5A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3AD5A0u;
            // 0x3ad5a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3AD5A8u;
label_3ad5a8:
    // 0x3ad5a8: 0x0  nop
    ctx->pc = 0x3ad5a8u;
    // NOP
label_3ad5ac:
    // 0x3ad5ac: 0x0  nop
    ctx->pc = 0x3ad5acu;
    // NOP
}
